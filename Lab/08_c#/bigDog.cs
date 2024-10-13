using System;

public class BigDog : Dog
{
    private string size = "Large";

    public void ShowSize()
    {
        Console.WriteLine($"O cachorro é {size}.");
    }
}