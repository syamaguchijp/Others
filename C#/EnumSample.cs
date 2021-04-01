using System;

class EnumSample {
    public EnumSample() {

        ColorEnum white = ColorEnum.White;
        Console.WriteLine(white);
        Console.WriteLine((int)white);
        Console.WriteLine(white.ToString());

    }

    enum ColorEnum
    {
        Red = 0,
        Black,
        White,
        Yellow
    }
}