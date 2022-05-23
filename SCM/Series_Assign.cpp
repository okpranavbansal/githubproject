#include <iostream>
#include <cmath>
using namespace std;

// // Fibbonaci Series
// int main()
// {
//     int a = 0;
//     int b = 1;
//     int temp;
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         temp = b;
//         b = a + b;
//         a = temp;
//         cout << b << "\n";
//     }
// }

// // AP
// int main()
// {
//     cout << "Enter a: ";
//     int a, d, n, result;
//     cin >> a;
//     cout << "Enter d: ";
//     cin >> d;
//     cout << "Enter the number of terms: ";
//     cin >> n;
//     // int an = a + d * (n - 1);
//     // cout << an;
//     result = a;
//     for (int i = 1; i < n; i++)
//     {
//         cout << result << endl;
//         result += d;
//     }
//     cout << result;
// }

// // GP
// int main()
// {
//     cout << "Enter a: ";
//     int a, r, n, result;
//     cin >> a;
//     cout << "Enter r: ";
//     cin >> r;
//     cout << "Enter the number of terms: ";
//     cin >> n;
//     result = a;
//     for (int i = 1; i < n; i++)
//     {
//         cout << result << endl;
//         result *= 3;
//     }
//     cout << result;
//     // cout << a * (pow(r,n-1));
// }

// // HP
// int main()
// {
//     double a, d, n, result;
//     cout << "Enter a: ";
//     cin >> a;
//     cout << "Enter d: ";
//     cin >> d;
//     cout << "Enter the number of the terms: ";
//     cin >> n;
//     result = a;
//     for (int i = 1; i < n; i++)
//     {
//         cout << 1 / result << endl;
//         result += d;
//     }
//     cout << 1 / result;
// }

// // Factorial
// int main()
// {
//     int n, result;
//     cout << "Enter the number of the terms: ";
//     cin >> n;
//     result = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         result *= i;
//         cout << i << "! = "<< result << endl;
//     }
// }

// // Prime Number
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 2; i <= n; i++)
//     {
//         bool k = false;
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 k = true;
//                 // cout << "j " << j << endl;
//             }
//         }
//         if (k == true)
//         {
//             cout << i << endl;
//         }
//     }
// }

// sinx / cosx / e^x
int main()
{
    for (int i = 0; i <= 5; i++)
    {
        cout << i << endl;
    }
}