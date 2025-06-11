#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	//    string str = "my string";
	//    cout<<str.size();
	//    cin>>str;
	//    cout<<str;
	//    string str2 = str + " another string";
	//    str2 = "different string";

	char str2[] = {'a', 'b', 'c', '\0'}; // C-style string
	char str3[15] = "xyz";
	cout << strcmp(str2, str3);
	char *pStr = str3;
	strcpy(pStr, str2);
	cout << pStr << endl;
	cout << str3 << endl;
	cout << strlen(pStr) << " " << strlen(str3) << endl;

	char *src = "Hello";
	strcat(str3, src);
	cout << str3;
	// string str_cpp = "paksitan";
	// cout<<strlen(str_cpp); //Error: cannot accept C++ strings
	//     str3 = "xyz"; // Error: use strcpy
	//    cout << str2>str3; // Logical error: use strcmp
	//    for(int i =0;i<3;i++)
	//        str3[i] = 'd';
	//    cout<<str3;
	//    // str3 = "def"; // error
	//
	//    int arr[] = {5, 6, 2};
	//    int *ptr = arr;
	//
	//    const char *ptr = "pakistan";
	//     ptr[1] = 'i'; // Error
	//    cout<<ptr[1]; // *(ptr + 1);
	//    cin>>ptr;
	//    cout<<ptr;
	//
	//    char *ptr = str3;
	//    cout<<ptr[1];
	//    cin>>ptr;
	//    cout<<ptr;
	//    cout<<str3;

	return 0;
}
