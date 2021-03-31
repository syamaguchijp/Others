using System;

class StringSapmle {

    public StringSapmle() {

        // 結合
        Console.WriteLine("ABC" + "DEF");
        Console.WriteLine(string.Concat("ABC", "DEF"));

        // フォーマット
        string str = "ABC";
        int number = 123;
        Console.WriteLine($"str = {str}, number = {number}");
        Console.WriteLine(string.Format("str = {0},number = {1}", str, number));

        // 長さ
        Console.WriteLine(str.Length);

        // 抽出
        str = "ABCDEF";
        Console.WriteLine(str.Substring(2, 2)); // CD

        // 文字位置
        Console.WriteLine(str.IndexOf("C")); // 2

        // 置換
        Console.WriteLine(str.Replace("ABC", "ZZZ"));

        // 削除
        str = "ABCDEF";
        Console.WriteLine(str.Remove(2, 2)); // ABEF

        // Trim
        str = " ab cd ";
        Console.WriteLine(str.Trim());
        Console.WriteLine(str.TrimStart()); // 頭のみ
        Console.WriteLine(str.TrimEnd()); // 末尾のみ

        // 存在確認
        str = "ABCDEF";
        Console.WriteLine(str.Contains("CD"));
        Console.WriteLine(str.StartsWith("ABC"));
        Console.WriteLine(str.EndsWith("DEF"));

        // null空文字チェック
        str = "";
        Console.WriteLine(string.IsNullOrEmpty(str));

        // 分割
        str = "Japan,America,Germany";
        string[] ary = str.Split(',');
        foreach (string s in ary) {
            Console.WriteLine(s);
        }

        // 大文字小文字
        Console.WriteLine("abc".ToUpper());
        Console.WriteLine("ABC".ToLower());

        // 文字列 <=> 数値
        Console.WriteLine("123".ToString());
        Console.WriteLine(int.Parse("123"));

    }
}