using System;

public class Dog
{
    public string Name { get; set; }
    public int Age { get; set; }

    public void PrintName()
    {
        Console.WriteLine($"O nome do cachorro é: {Name}.");
    }

    public void ShowAge()
    {
        Console.WriteLine($"A idade do cachorro é: {Age} anos.");
    }
}