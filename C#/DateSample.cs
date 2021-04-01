using System;

class DateSample {
    public DateSample() {

        // DateTimeオブジェクト

        // 現在日時（ローカル時刻）
        DateTime dt = DateTime.Now;
        Console.WriteLine(dt);

        // UTC
        dt = DateTime.UtcNow;
        Console.WriteLine(dt);

        // 日時を指定して生成
        dt = new DateTime(2021, 4, 1, 1, 2, 3, 0);
        Console.WriteLine(dt);

        // タイムゾーンを指定
        dt = new DateTime(2021, 4, 1, 1, 2, 3, 0, DateTimeKind.Local);
        Console.WriteLine(dt);

        dt = new DateTime(2021, 4, 1, 1, 2, 3, 0, DateTimeKind.Utc);
        Console.WriteLine(dt);
        
        /*
        var jstZoneInfo = TimeZoneInfo.FindSystemTimeZoneById("Tokyo Standard Time");
        dt = TimeZoneInfo.ConvertTimeFromUtc(dt, jstZoneInfo);
        Console.WriteLine(dt);
        */
        Console.WriteLine("-----------");

        // 文字列

        // Datetime to String
        string str = dt.ToString("yyyy/MM/dd HH:mm:ss");
        Console.WriteLine(str);

        // String to Datetime
        str = "2021/04/01 01:02:03";
        dt = DateTime.Parse(str);
        Console.WriteLine(dt);

        // ISO8601
        dt = DateTime.Now;
        str = dt.ToString("yyyy-MM-dd'T'HH:mm:sszzz");
        Console.WriteLine(str);
        dt = DateTime.Parse(str, null, System.Globalization.DateTimeStyles.RoundtripKind);
        Console.WriteLine(dt);

        // 比較
        DateTime dt1 = DateTime.Now;
        DateTime dt2 = dt1.AddHours(1); // 1時間後
        switch (dt1.CompareTo(dt2)) {
            case -1:
                Console.WriteLine("dt1 < dt2");
                break;
            case 0:
                Console.WriteLine("dt1 = dt2");
                break;
            case 1:
                Console.WriteLine("dt1 > dt2");
                break;
        }
    }
}