using System;
using System.Text;

public class Program
{
    public static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split(' ');
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);

        StringBuilder sb = new StringBuilder();
        for (int i = a; i <= b; i++)
        {
            sb.Append(i);
        }
        string s = sb.ToString();

        Console.Write(s);

        char[] sChars = s.ToCharArray();
        Array.Reverse(sChars);
        Console.WriteLine(new string(sChars));
    }
}