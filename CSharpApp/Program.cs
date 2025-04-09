using System;
using System.Runtime.InteropServices;

class Program
{
    [DllImport("libmath_lib.dylib", CallingConvention = CallingConvention.Cdecl)]
    public static extern double add(double a, double b);

    [DllImport("libmath_lib.dylib", CallingConvention = CallingConvention.Cdecl)]
    public static extern double subtract(double a, double b);

    [DllImport("libmath_lib.dylib", CallingConvention = CallingConvention.Cdecl)]
    public static extern double multiply(double a, double b);

    [DllImport("libmath_lib.dylib", CallingConvention = CallingConvention.Cdecl)]
    public static extern double divide(double a, double b);

    static void Main()
    {
        Console.WriteLine($"Add: {add(2.0, 3.0)}");
        Console.WriteLine($"Subtract: {subtract(5.0, 1.5)}");
        Console.WriteLine($"Multiply: {multiply(3.0, 4.0)}");
        Console.WriteLine($"Divide: {divide(10.0, 2.0)}");
    }
}