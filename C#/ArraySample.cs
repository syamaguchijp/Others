using System;
using System.Collections.Generic;

class ArraySample {

    public ArraySample() {

        ////////////// 配列 //////////////

        // 初期化
        int[] ary = new int[6] { 0, 1, 2, 3, 4, 5 };

        // 変更
        ary[5] = 100;

        // 要素数
        Console.WriteLine(ary.Length);

        // リサイズ（末尾に1要素を追加）
        Array.Resize(ref ary, ary.Length + 1);
        ary[ary.Length - 1] = 1000;

        // 走査
        for (int i = 0; i < ary.Length; i++) {
            Console.WriteLine("{0}: {1}", i + 1, ary[i]);
        }
        foreach (int i in ary) {
            Console.WriteLine(i);
        }
        Console.WriteLine("---");

        // コピー

        // Shallow
        int[] ary2 = ary;
        ary[0] = 99;
        foreach (int i in ary2) {
            Console.WriteLine(i); // aryの変更がary2に影響している
        }
        Console.WriteLine("---");

        // Deep
        int[] ary3 = new int[ary.Length];
        Array.Copy(ary, ary3, ary.Length);
        ary[0] = 9999;
        foreach (int i in ary3) {
            Console.WriteLine(i); // aryの変更がary3に影響しない
        }
        Console.WriteLine("---");

        // ソート
        ary = new int[6] {100, 1, 6, 9, 0, 7};
        Array.Sort(ary);
        foreach (int i in ary) {
            Console.WriteLine(i);
        }


        ////////////// リスト //////////////

        // 生成
        var list = new List<string>() {"Honda", "Yamaha"};

        // 変更
        list[1] = "Kawasaki";

        // 削除
        list.RemoveAt(0); // indexを指定
        list.Remove("Kawasaki"); // 要素を指定

        // 末尾に追加
        list.Add("Honda");
        list.Add("Yamaha");

        // 位置を指定して追加
        list.Insert(0, "Harley");

        // 要素数
        Console.WriteLine(list.Count);

        // 走査
        for (int i = 0; i < list.Count; i++) {
            Console.WriteLine("{0}: {1}", i + 1, list[i]);
        }
        foreach (string s in list) {
            Console.WriteLine(s);
        }

        // index取得
        Console.WriteLine(list.IndexOf("Honda"));

        // 存在確認
        Console.WriteLine(list.Contains("Harley"));


        ////////////// 辞書 //////////////

        // 生成
        var dict = new Dictionary<string, int>()
        { {"a", 100},
          {"b", 101},
          {"c", 102}
        };

        // 変更
        dict["a"] = 0;

        // 追加
        dict.Add("d", 103);

        // 削除
        dict.Remove("d");

        // 要素数
        Console.WriteLine(dict.Count);

        // 走査
        foreach (KeyValuePair<string, int> pair in dict) {
            Console.WriteLine("{0}-{1}", pair.Key, pair.Value);
        }
        foreach (string key in dict.Keys) {
            Console.WriteLine(key);
        }
        foreach (int val in dict.Values) {
            Console.WriteLine(val);
        }

        // 存在確認
        Console.WriteLine(dict.ContainsKey("a"));
        Console.WriteLine(dict.ContainsValue(102));


        ////////////// セット型 //////////////

        var hs = new HashSet<string>() {
            "A", "B", "C", "A"
        };

        hs.Add("B");
        hs.Remove("B");

        foreach (var str in hs) {
            Console.WriteLine(str);
        }
        
    }
}