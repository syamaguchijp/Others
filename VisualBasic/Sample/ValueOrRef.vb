Public Class ValueOrRef

    Shared Sub test()

        Dim sp As New Sample()

        '///////////// Integer 値型 /////////////

        '値渡し
        Dim v1 As Integer = 10
        Debug.WriteLine("before: " & v1.ToString)
        sp.test1(v1)
        Debug.WriteLine("after: " & v1.ToString) '10

        '参照渡し
        Dim v11 As Integer = 10
        Debug.WriteLine("before: " & v11.ToString)
        sp.test11(v11)
        Debug.WriteLine("after: " & v11.ToString) '100


        '///////////// String 参照型 /////////////

        '値渡し
        Dim v2 As String = "AAAA"
        Debug.WriteLine("before: " & v2.ToString)
        sp.test2(v2)
        Debug.WriteLine("after: " & v2.ToString) 'AAAA
        'Stringは参照型の中でも特殊で、末尾に文字列を加える段階で、別の文字列を生成している。
        'そのため、値渡しでは関数実行前の値は影響を受けない。

        '参照渡し
        Dim v12 As String = "AAAA"
        Debug.WriteLine("before: " & v12.ToString)
        sp.test12(v12)
        Debug.WriteLine("after: " & v12.ToString) 'AAAAHoge


        '///////////// Array 参照型 /////////////

        '値渡し
        Dim v3() As String = {"Honda", "Yamaha", "Kawasaki"}
        Debug.WriteLine("before: " & v3(0))
        sp.test3(v3)
        Debug.WriteLine("after: " & v3(0)) 'Hoge

        '参照渡し
        Dim v13() As String = {"Honda", "Yamaha", "Kawasaki"}
        Debug.WriteLine("before: " & v13(0))
        sp.test13(v13)
        Debug.WriteLine("after: " & v13(0)) 'Hoge


        '///////////// クラス 参照型 /////////////

        '値渡し
        Dim v5 As New User("Yamaha")
        Debug.WriteLine("before: " & v5.name)
        sp.test5(v5)
        Debug.WriteLine("after: " & v5.name) 'Fuga

        '参照渡し
        Dim v15 As New User("Yamaha")
        Debug.WriteLine("before: " & v15.name)
        sp.test15(v15)
        Debug.WriteLine("after: " & v15.name) 'Fuga


    End Sub


    Public Class Sample


        'Integer
        Sub test1(arg1 As Integer)
            arg1 *= 10
        End Sub
        Sub test11(ByRef arg1 As Integer)
            arg1 *= 10
        End Sub

        'String
        Sub test2(arg1 As String)
            arg1 &= "Hoge"
        End Sub
        Sub test12(ByRef arg1 As String)
            arg1 &= "Hoge"
        End Sub

        'Array
        Sub test3(ary() As String)
            ary(0) = "Hoge"
        End Sub
        Sub test13(ByRef ary() As String)
            ary(0) = "Hoge"
        End Sub

        'Class
        Sub test5(arg As User)
            arg.name = "Fuga"
        End Sub
        Sub test15(ByRef arg As User)
            arg.name = "Fuga"
        End Sub

    End Class

    Public Class User
        'メンバ
        Public name As String
        'コンストラクタ
        Sub New(v As String)
            name = v
        End Sub
    End Class

End Class
