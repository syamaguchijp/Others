Public Class InterfaceSample

    Shared Sub test()

        Dim sp As New Caller()
        sp.execute()

    End Sub


    Private Interface CallBack
        Sub finishTask() '値を返さないのでFunctionではなくSub
    End Interface

    '呼び出し元
    Private Class Caller
        Implements CallBack

        Private caller As Callee

        Sub New()
            Debug.WriteLine("New")
            Dim c As New Callee()
            caller = c
            caller.registerCallback(New WeakReference(Of CallBack)(Me)) 'Me = self
        End Sub

        Public Sub execute()
            If caller IsNot Nothing Then
                caller.doTask()
            End If
        End Sub

        'コールバックをここに実装
        Sub finishTask() Implements CallBack.finishTask
            Debug.WriteLine("finishTask!!!")
        End Sub
    End Class

    Private Class Callee

        '弱参照
        Private callbackRef As WeakReference(Of CallBack)

        Sub registerCallback(c)
            callbackRef = c
        End Sub

        Public Sub doTask()
            Debug.WriteLine("doTask")
            System.Threading.Thread.Sleep(2000)
            If callbackRef IsNot Nothing Then
                'コールバックを実行する
                Dim callback1 As CallBack = Nothing
                If callbackRef.TryGetTarget(callback1) Then
                    callback1.finishTask()
                End If
            End If
        End Sub

    End Class

End Class

