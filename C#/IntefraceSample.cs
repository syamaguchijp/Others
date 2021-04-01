using System;
using System.Threading;

class InterfaceSample {
    public InterfaceSample() {

        Caller cl = new Caller();
        cl.execute();
    }


    interface CallBack {
        public void finishTask();
    }

    // 呼び出し元
    class Caller: CallBack {

        private Callee caller;

        public Caller() {
            Console.WriteLine("New");
            Callee c = new Callee();
            caller = c;
            caller.registerCallback(new WeakReference<CallBack>(this));
        }

        public void execute() {
            if (caller != null) {
                caller.doTask();
            }
        }

        // コールバックをここに実装
        public void finishTask() {
            Console.WriteLine("finishTask!!!");
        }
    }

    class Callee {

        // 弱参照
        private WeakReference<CallBack> callbackRef;

        public void registerCallback(WeakReference<CallBack> c) {
            callbackRef = c;
        }

        public void doTask() {
            Console.WriteLine("doTask");
            
            Thread.Sleep(2000);

            if (callbackRef != null) {
                // コールバックを実行する
                CallBack callback1 = null;
                if (callbackRef.TryGetTarget(out callback1)) {
                    callback1.finishTask();
                }
            }
        }
    }
}
