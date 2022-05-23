#include <iostream>
#include <conio.h>
using namespace std;

// *
// **
// ***
// ****
// *****

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// *****
// ****
// ***
// **
// *

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n - i + 1; j >= 1; j--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

//     *
//    **
//   ***
//  ****
// *****

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n - i; j >= 1; j--)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// *****
//  ****
//   ***
//    **
//     *

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i < n + 1; i++)
//     {
//         for (int k = 1; k < i; k++)
//         {
//             cout << " ";
//         }
//         for (int j = n - i + 1; j >= 1; j--)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }
// }

//      *****
//     *****
//    *****
//   *****
//  *****

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n; j >= i; j--)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= n; k++){
//             cout << "*";
//         }
//             cout << endl;
//     }
// }

// *****
// *****
// *****
// *****

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// *        *
// **      **
// ***    ***
// ****  ****
// **********

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         for (int k = 2 * (n - i); k >= 1; k--)
//         {
//             cout << " ";
//         }
//         for (int l = 1; l <= i; l++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// **********
// ****  ****
// ***    ***
// **      **
// *        *

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n; j >= i ; j--)
//         {
//             cout << "*";
//         }
//         for (int k = 2;k < 2*i; k++){
//             cout << " ";
//         }
//         for (int l = n;l >= i;l--){
//             cout << "*";
//         }

//         cout << endl;
//     }
// }

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n; j >= i; j--)
//         {
//             cout << "*";
//         }
//         for (int k = 2; k < 2 * i; k++)
//         {
//             cout << " ";
//         }
//         for (int l = n; l >= i; l--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         for (int k = 2*(n-i);k>=1;k--){
//             cout << " ";
//         }
//         for (int l = 1; l<=i; l++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// **********
//  ********
//   ******
//    ****
//     **
//     **
//    ****
//   ******
//  ********
// **********

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int k = 2; k <= i; k++)
//         {
//             cout << " ";
//         }
//         for (int j = 2 * (n - i + 1); j > 0; j--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n-1 ; j >= i; j--)
//         {
//             cout << " ";
//         }
//         for (int l = 2 * i; l >= 1; l--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// ABCDEEDCBA
// ABCD  DCBA
// ABC    CBA
// AB      BA
// A        A

// int main()
// {
//     int n;
//     cin >> n;
//     int alpha = 'A';
//     // cout << alpha << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n; j >= i; j--)
//         {
//             cout << char(alpha + n - j);
//         }
//         for (int k = 2; k < 2 * i; k++)
//         {
//             cout << " ";
//         }
//         for (int l = n; l >= i; l--)
//         {
//             cout << char(alpha + l - i );
//         }
//         cout << endl;
//     }
// }

// ABCDEDCBA
// ABCD DCBA
// ABC   CBA
// AB     BA
// A       A

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << char(64 + j);
//         }
//         for (int l = 2; l < 2 * i; l++)
//         {
//             cout << " ";
//         }
//         for (int k = n; k >= i; k--)
//         {
//             cout << char(65 + k - i);
//             // if (i != 1 && k != n)
//             // {
//             //     cout << char(65 + k - i);
//             // }
//         }
//         cout << endl;
//     }
// }
