using System;

class ValueOrRef {

    public ValueOrRef() {

        ///////////// int 値型 /////////////

        // 値渡し
        int v1 = 10;
        test1(v1);
        Console.WriteLine(v1); // 元の値に変化はない

        // 参照渡し
        int v11 = 20;
        test11(ref v11);
        Console.WriteLine(v11);

        ///////////// string 参照型 /////////////

        // 値渡し
        string v2 = "ABC";
        test2(v2);
        Console.WriteLine(v2); // 元の値に変化はない
        // stringは参照型の中でも特殊で、末尾に文字列を加える段階で、別の文字列を生成している。

        // 参照渡し
        string v12 = "DEF";
        test12(ref v12);
        Console.WriteLine(v12);

        ///////////// 配列 参照型 /////////////

        // 値渡し
        int[] v3 = new int[6] { 0, 1, 2, 3, 4, 5 };
        test3(v3);
        Console.WriteLine(v3[0]);

        // 参照渡し
        int[] v13 = new int[6] { 0, 1, 2, 3, 4, 5 };
        test13(ref v13);
        Console.WriteLine(v13[0]);

        ///////////// クラス 参照型 /////////////

        // 値渡し
        TestPerson v4 = new TestPerson();
        test4(v4);
        Console.WriteLine(v4.name);

        // 参照渡し
        TestPerson v14 = new TestPerson();
        test14(ref v14);
        Console.WriteLine(v14.name);
    }

    public void test1(int val) {
        val *= 10;
        Console.WriteLine(val);
    }

    public void test11(ref int val) {
        val *= 10;
        Console.WriteLine(val);
    }

    public void test2(string val) {
        val += "ZZZZZ";
        Console.WriteLine(val);
    }

    public void test12(ref string val) {
        val += "XXXX";
        Console.WriteLine(val);
    }

    public void test3(int[] val) {
        val[0] = 999;
        Console.WriteLine(val[0]);
    }

    public void test13(ref int[] val) {
        val[0] = 888;
        Console.WriteLine(val[0]);
    }

    public void test4(TestPerson val) {
        val.name = "ZZZZZ";
        Console.WriteLine(val.name);
    }

    public void test14(ref TestPerson val) {
        val.name = "XXXXX";
        Console.WriteLine(val.name);
    }
}

class TestPerson {
    public string name = "Hoge";
}