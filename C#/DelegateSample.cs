using System;

class DelegateSample {

    // デリゲートの宣言（関数ポインタ）
    delegate void FinishDelegate (bool isSuccess, string errorCode);

    public DelegateSample() {

        // デリゲートの生成
        FinishDelegate fd = delegate (bool isSuccess, string errorCode) {
            Console.WriteLine(string.Format(
                "isSuccess = {0}, errorCode = {1}", isSuccess, errorCode));
        };

        User user = new User();
        user.execute(fd); // コールバック
    }
    
    class User {
        public void execute(FinishDelegate callback) {
            Console.WriteLine("execute");
            if (callback != null) {
                callback(true, "NO_ERROR");
            }
        }
    }
}