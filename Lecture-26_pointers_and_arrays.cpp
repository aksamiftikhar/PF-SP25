#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr[3] = {3, 5, 1};
	int *ptr = arr;

	cout << *(ptr + 1) << endl;
	cout << *(arr + 1) << endl;
	cout << arr[1] << endl;
	cout << ptr[1] << endl;

	*ptr = 20;
	cout << arr[0] << endl;

	ptr = &arr[1];
	//    arr = &arr[1]; // error: array is a constant pointer
	cout << *(ptr + 1) << endl;
	//
	//    *arr = 10;
	//    *arr = *arr + 1;
	//    cout<<arr[0];
	////    cout<< *(arr+1)<<endl;
	////    cout<< *arr;
	//
	////    arr = &arr[1];//error
	//    cout<<arr<<endl;
	//    cout<<arr+1;
	return 0;
}
