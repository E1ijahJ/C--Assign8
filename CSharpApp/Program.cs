using System;
using System.Runtime.InteropServices;

class Program
{
    [DllImport("libmath_lib.dylib")]
public static extern double add(double a, double b);

[DllImport("libmath_lib.dylib")]
public static extern double subtract(double a, double b);

[DllImport("libmath_lib.dylib")]
public static extern double multiply(double a, double b);

[DllImport("libmath_lib.dylib")]
public static extern double divide(double a, double b);
    static void Main(string[] args)
    {
        Console.WriteLine($"Add: {add(2.0, 3.0)}");
        Console.WriteLine($"Subtract: {subtract(5.0, 2.0)}");
        Console.WriteLine($"Multiply: {multiply(2.0, 3.0)}");
        Console.WriteLine($"Divide: {divide(6.0, 2.0)}");
    }
}