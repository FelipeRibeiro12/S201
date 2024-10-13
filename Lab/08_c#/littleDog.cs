using System;

public class LittleDog : Dog
{
    private string size = "Small";

    public void ShowSize()
    {
        Console.WriteLine($"O cachorro é {size}.");
    }
}