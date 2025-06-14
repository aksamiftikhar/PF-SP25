#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string str[] = {"pakistan", "kashmir", "yaman", "india"};
	char manyCStrings[3][10] = {"pakistan", "kashmir", "yaman"};

	for (int j = 0; j < 3; ++j)
	{
		if (str[j] > str[j + 1])
		{
			string temp = str[j];
			str[j] = str[j + 1];
			str[j + 1] = temp;
		}
	}

	for (int i = 0; i < 4; i++)
		cout << str[i] << " ";

	//    string str = "my string";
	//    cout<<str.size();
	//    cin>>str;
	//    cout<<str;
	//    string str2 = str + " another string";
	//    str2 = "different string";

	//    char str2[] = {'a', 'b', 'c', '\0'}; // C-style string
	//    char str3[15] = "xyz def ";
	//    cout<<strcmp(str2, str3);
	//    if(strcmp(str2, str3)<0)
	//        cout<<"first string is smaller";
	//
	//    char *pStr = str3;
	//    cout<<pStr;
	////    str2 = str3; // Error
	////    strcpy(str2, str3);
	////    cout<<str2<<endl;
	////    cout<<str3<<endl;
	////    cout<<pStr<<endl;
	////    cout<<str3<<endl;
	//    cout<<strlen(pStr)<<" "<<strlen(str3)<<endl;
	//    string s1 = "my ", s2 = "house";
	//    cout<< s1 + s2;
	//
	//    char *src = "Hello";
	//    strcat(str3, str2); // str3 = str3 + str2;
	////    strcat(str3, src);
	//    cout<<endl<<str3;
	//    // string str_cpp = "paksitan";
	//    // cout<<strlen(str_cpp); //Error: cannot accept C++ strings
	////     str3 = "xyz"; // Error: use strcpy
	////    cout << str2>str3; // Logical error: use strcmp
	////    for(int i =0;i<3;i++)
	////        str3[i] = 'd';
	////    cout<<str3;
	////    // str3 = "def"; // error
	////
	////    int arr[] = {5, 6, 2};
	////    int *ptr = arr;
	////
	////    const char *ptr = "pakistan";
	////     ptr[1] = 'i'; // Error
	////    cout<<ptr[1]; // *(ptr + 1);
	////    cin>>ptr;
	////    cout<<ptr;
	////
	////    char *ptr = str3;
	////    cout<<ptr[1];
	////    cin>>ptr;
	////    cout<<ptr;
	////    cout<<str3;

	return 0;
}
