Public Class ArraySample

    Shared Sub test()

        '/////////////// 配列 ///////////////

        '生成
        Dim ary() As String = {"Honda", "Yamaha", "Kawasaki"}
        Debug.WriteLine(ary(0))
        Debug.WriteLine(ary(1))
        Debug.WriteLine(ary(2))

        Dim ary2(3) As String
        ary2(0) = "Honda"
        ary2(1) = "Yamaha"
        ary2(2) = "Kawasaki"


        '走査
        For Each v As String In ary
            Debug.WriteLine(v)
        Next

        For i = 0 To ary.Count - 1
            Debug.WriteLine(ary(i))
        Next

        For i = 0 To UBound(ary)
            Debug.WriteLine(ary(i))
        Next

        '存在確認
        If ary.Contains("Honda") Then
            Debug.WriteLine("存在確認")
        End If
        If Array.IndexOf(ary, "Yamaha") = 1 Then
            Debug.WriteLine("Yamaha index = 1")
        End If

        '要素数の変更
        ReDim Preserve ary(5) 'Preserveをつけないと今までの値が保持されない
        ary(3) = "Suzuki"
        For Each v As String In ary
            Debug.WriteLine(v)
        Next

        '要素数
        Debug.WriteLine(ary.Length)

        'ソート
        Dim intAry() As Integer = {7, 100, 22, 99, 51, 0}
        Array.Sort(intAry)
        For Each v As String In intAry
            Debug.WriteLine(v)
        Next


        '/////////////// リスト ///////////////

        Dim myList As New List(Of String)(New String() {"Honda", "Yamaha", "Kawasaki"}) 'ジェネリック

        Dim myList2 As New List(Of String)
        '要素の追加
        myList2.Add("Honda")
        myList2.Add("Yamaha")
        myList2.Add("Kawasaki")

        '書き換え
        myList2(1) = "Harley"

        '要素の削除
        myList2.RemoveAt(1)


        '走査
        For i = 0 To myList.Count - 1
            Debug.WriteLine(myList(i)) ' 赤 黄 青が出力される
        Next i

        For Each s In myList
            Debug.WriteLine(s)
        Next

        'インデックス
        Debug.WriteLine(myList.IndexOf("Yamaha"))

        '存在確認
        If myList.Contains("Yamaha") Then
            Debug.WriteLine("存在確認")
        End If

        '要素数
        Debug.WriteLine(myList.Count)

        'リストから配列にコピー
        Dim myList3 = myList.ToArray()



        '/////////////// 辞書 ///////////////

        '生成
        Dim dict As New Dictionary(Of String, Integer) From {
            {"Japan", 1},
            {"America", 2},
            {"Germany", 3}
            }

        'アクセス
        Debug.WriteLine(dict("Germany"))

        '追加
        dict.Add("France", 10)
        dict("France") = 1000

        '削除
        dict.Remove("France")

        '走査
        For Each item In dict
            Debug.WriteLine(item.Key)
            Debug.WriteLine(item.Value)
        Next
        For i = 0 To dict.Count - 1
            Debug.WriteLine(dict.Keys(i))
            Debug.WriteLine(dict.Values(i))
        Next

        '存在確認
        If (dict.ContainsKey("Germany")) Then
            Debug.WriteLine("contains")
        End If

        If (dict.ContainsValue(2)) Then
            Debug.WriteLine("contains")
        End If

        '要素数
        Debug.WriteLine(dict.Count)


    End Sub
End Class
