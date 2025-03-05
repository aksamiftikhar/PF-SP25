#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 20, z = 30, p = 40;

    cin >> x;
    cin.ignore(100, '\n');
    cin >> y;
    //    cin.clear();
    //    cin.ignore(100, '\n');
    cin >> z;
    cin >> p;

    cout << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << p << endl;

    string s = "old";
    cout << "Enter a string: ";
    //    cin >> s;
    getline(cin, s);
    cout << s;

    //    char ch;
    ////    cin>>ch;
    //    cin.get(ch);
    //    cout<<"some"<<static_cast<int>(ch)<<"string";
    return 0;
}
