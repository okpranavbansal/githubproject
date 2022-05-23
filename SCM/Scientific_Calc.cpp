#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, s;
    int x;
    cout << "\t\tCALCULATOR\t\t" << endl;
    cout << "1.Addition \t\t\t11.Cosine of angle" << endl;
    cout << "2.Substraction \t\t\t12.Tangent of angle" << endl;
    cout << "3.Multiplication \t\t13.Inverse of sin" << endl;
    cout << "4.Divsion \t\t\t14.Inverse of cos" << endl;
    cout << "5.Remainder Finding \t\t15.Degree to radian" << endl;
    cout << "6.Squareroot \t\t\t16.Log with base 10" << endl;
    cout << "7.Cuberoot \t\t\t17.Inverse of number" << endl;
    cout << "8.Power of a to the b \t\t18.Exponetial of number" << endl;
    cout << "9.Logarithm \t\t\t19.10 to the power a" << endl;
    cout << "10.Sine of angle \t\t20.Nth root of a number" << endl;
    cout << "\t\tEnter Choice ";
    cin >> x;
    switch (x)
    {
    case 1:
    {
        cout << "enter 2 numbers ";
        cin >> a >> b;
        s = a + b;
        cout << "Sum is " << s << endl;
        break;
    }
    case 2:
    {
        cout << "enter 2 numbers ";
        cin >> a >> b;
        s = a - b;
        cout << "Difference is " << s << endl;
        break;
    case 3:
    {
        cout << "enter 2 numbers ";
        cin >> a >> b;
        s = a * b;
        cout << "Product is " << s << endl;
        break;
    }
    case 4:
    {
        cout << "enter 2 numbers ";
        cin >> a >> b;
        s = a / b;
        cout << "Devision is " << s << endl;
        break;
    }
    case 5:
    {
        int x, y, z;
        cout << "enter 2 numbers ";
        cin >> x >> y;
        z = x % y;
        cout << "Remainder is " << z << endl;
        break;
    }
    case 6:
    {
        cout << "enter number ";
        cin >> a;
        cout << "Squareroot is " << sqrt(a) << endl;
        break;
    }
    case 7:
    {
        cout << "enter number ";
        cin >> a;
        cout << "Cuberoot is " << cbrt(a) << endl;
        break;
    }
    case 8:
    {
        cout << "enter 2 number ";
        cin >> a >> b;
        cout << "Power of a to the b is " << pow(a, b) << endl;
        break;
    }
    case 9:
    {
        cout << "enter number ";
        cin >> a;
        cout << "Log is " << log(a) << endl;
        break;
    }
    case 10:
    {
        cout << "enter number ";
        cin >> a;
        cout << "Sin is " << sin(a) << endl;
        break;
    }
    case 11:
    {
        cout << "enter number ";
        cin >> a;
        cout << "Cosine is " << cos(a) << endl;
        break;
    }
    case 12:
    {
        cout << "enter number ";
        cin >> a;
        cout << "Tangent is " << tan(a) << endl;
        break;
    }
    case 13:
    {
        cout << "enter number ";
        cin >> a;
        cout << "Inverse of sin " << asin(a) << endl;
        break;
    }
    case 14:
    {
        cout << "enter number ";
        cin >> a;
        cout << "Inverse of cos " << acos(a) << endl;
        break;
    }
    case 15:
    {
        cout << "enter angle in degrees ";
        cin >> a;
        s = a * 3.14 / 180;
        cout << a << " degrees=" << s << " radians";
        break;
    }
    case 16:
    {
        cout << "enter a number ";
        cin >> a;
        s = log10(a);
        cout << s;
        break;
    }
    case 17:
    {
        cout << "Enter a number ";
        cin >> a;
        s = 1 / a;
        cout << "Inverse of x is " << s << endl;
        break;
    }
    case 18:
    {
        cout << "Enter a number ";
        cin >> a;
        s = exp(a);
        cout << "Exponential of x is " << s << endl;
        break;
    }
    case 19:
    {
        cout << "Enter a number ";
        cin >> a;
        cout << "10 to the power a is " << pow(10, a) << endl;
        break;
    }
    case 20:
    {
        cout << "Enter 2 numbers ";
        cin >> a >> b;
        cout << "Nth root of a number is  " << pow(a, 1 / b) << endl;
        break;
    }

    default:
    {
        cout << "\t\tEXIT\t\t";
    }
    }
    }
}