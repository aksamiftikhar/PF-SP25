#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
	char chArr[] = "ab\0c";
	for (char ch : chArr)
	{
		cout << ch;
	}
	cout << chArr << endl;

	char chArr2[5];
	//    chArr2 = chArr;
	cout << strlen(chArr);
	cout << chArr << endl;
	//    for(char ch: chArr)
	//        cout<<ch;
	cin >> chArr;
	cout << chArr;

	return 0;
}
