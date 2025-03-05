#include <iostream>
using namespace std;

int main()
{
    string s1 = "Hello, World!";
    string s2 = "Bye world!";
    int x = 20;
    double y = static_cast<double>(x);

    cout << s1 + s2;

    const int W = 20;

    cout << W;

    int x1, x2;
    cout << endl
         << endl
         << "Enter x1 and x2 (integers): ";
    cin >> x1;
    cin >> x2;
    cout << x1 << "   " << x2;
    return 0;
}
