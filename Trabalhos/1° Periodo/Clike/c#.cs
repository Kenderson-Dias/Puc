using System;
class MainClass {
    public static void Main(string[] args)
    {
        string entrada = Console.ReadLine();
        int n1 = int.Parse(entrada);
        string entra = Console.ReadLine();
        int n2 = int.Parse(entra);


        for (int i = n1; i <= n2; i++)
        {
            Console.Write(i);

        }

        for (int i = n2; i >= n1; i--)
        {
            if (i > 9)
            {
                Console.Write($"{i % 10}{i / 10}");
            } else {
                Console.Write(i);
            }
        }
    }

}