Public Class ClassSample

    Shared Sub test()

        Dim user As New User("XXXX")
        user.nickName = "AAAAA"
        Debug.WriteLine(user.nickName)

        user.setName("Honda")
        Debug.WriteLine(user.getName())
        Debug.WriteLine(user.test())
        user.testSub()

        Debug.WriteLine(User.HOGE)
        Debug.WriteLine(User.methodClass())

        Dim user2 As New SpecialUser("Yamaha")
        Debug.WriteLine(user2.test())
        Debug.WriteLine(user2.nickName)

    End Sub

    Public Class User

        'メンバ
        Public nickName As String
        Private _name As String

        'コンストラクタ
        Sub New(v As String)
            nickName = v
        End Sub

        '値を返すメソッド
        Function test()
            Return _name & "san"
        End Function

        '値を返さないメソッド
        Sub testSub() '値を返さないのでFunctionではなくSub
            Debug.WriteLine("Test Sub")
        End Sub

        'ゲッター
        Function getName()
            Return _name
        End Function

        'セッター
        Sub setName(a As String)
            _name = a
        End Sub

        'クラス変数
        Public Shared HOGE As String = "HOGE"

        'クラスメソッド
        Public Shared Function methodClass()
            Return "CLASSMETHOD"
        End Function

    End Class

    '継承
    Public Class SpecialUser
        Inherits User

        'コンストラクタ
        Sub New(v As String)
            MyBase.New(v) 'MyBase = super
        End Sub

        'オーバーライド
        Overloads Function test()
            Return nickName & "san"
        End Function
    End Class

End Class
