#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double posRoot(int a, int b, int c) // formal parameter
{
    // int a, b, c;
    // cout << "Enter a, b and c: ";
    // cin >> a >> b >> c;

    cout << "Entered posRoot\n";

    double disc = b * b - 4 * a * c;
    double num = -b + sqrt(disc);
    double den = 2 * a;
    double result = num / den;
    cout << "Exiting posRoot\n";

    return result; // -1
    cout << "After return in posRoot\n";
}
int main()
{
    int a = 1, b = 2, c = 1;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    //    double res = posRoot(x, 2, 1); // actual arguments
    cout << "Calling posRoot\n";
    double res = posRoot(a, b, c); // actual arguments
                                   //    cout<<posRoot(1, 2, 1);

    cout << "Back from posRoot into main\n";
    //    double res = posRoot(1.5, 2, 'A'); // actual arguments
    cout << res;
    //    int a = 10;
}
