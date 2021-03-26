Public Class StringSample
    Shared Sub test()

        '結合
        Dim a As String = "あ"
        Dim b As String = "い"
        Debug.WriteLine(a + b)
        Debug.WriteLine(a & b)
        Debug.WriteLine(String.Concat(a, b))

        '置換
        Dim str As String = "ABCDEFG"
        Debug.WriteLine(str.Replace("ABC", "ZZZ"))

        '切り出し
        str = "ABCDEFG"
        Debug.WriteLine(str.Substring(1, 3)) 'BCD

        '検索
        Debug.WriteLine(str.IndexOf("C")) '2

        'トリム
        str = " ab cd "
        Debug.WriteLine(str.Trim)
        Debug.WriteLine(str.TrimEnd)
        Debug.WriteLine(str.TrimStart)

        '文字列長
        Debug.WriteLine(str.Length)

        '存在確認
        Debug.WriteLine(str.Contains("C"))

        'NULL空文字チェック
        str = Nothing
        If String.IsNullOrEmpty(str) Then
            Debug.WriteLine("nullです")
        End If

        '分割
        str = "A,B,C,D,E"
        Dim strAry() As String = str.Split(",")
        For Each c In strAry
            Debug.WriteLine(c)
        Next

        '数値との変換
        Dim num As Integer = 12345
        Debug.WriteLine(num.ToString)
        str = "1234"
        Debug.WriteLine(Integer.Parse(str))

        '大文字小文字
        str = "abc"
        Debug.WriteLine(str.ToUpper)
        str = "ABC"
        Debug.WriteLine(str.ToLower)

        'フォーマット
        Debug.WriteLine(String.Format("{0}年{1}月{2}日", 2021, 3, 4))



    End Sub

End Class
