using System;

class Program
{
    static void Main(string[] args)
    {
        Dog dog1 = new Dog { Name = "Spike", Age = 5 };
        BigDog dog2 = new BigDog { Name = "Snoop", Age = 3 };
        LittleDog dog3 = new LittleDog { Name = "Scoob Doo", Age = 7 };

        dog1.PrintName();
        dog1.ShowAge();

        dog2.PrintName();
        dog2.ShowAge();
        dog2.ShowSize();

        dog3.PrintName();
        dog3.ShowAge();
        dog3.ShowSize();
    }
}