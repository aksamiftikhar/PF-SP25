#include <iostream>
using namespace std;

void addArrays(const int arr1[], const int arr2[], int arr3[], int sz)
{
	//    arr1[0] = 30;

	for (int i = 0; i < sz; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
	}

	//    return arr3;
}

// void addArrays(const int arr1[], const int arr2[], int arr3[], int sz)
//{
////    arr1[0] = 30;
//    for(int i=0;i<sz;i++)
//    {
//        arr3[i] = arr1[i] + arr2[i];
//    }
//
////    return arr3;
//
//}
void printArray(const int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
		cout << arr[i] << " ";

	cout << endl;
}
int main()
{

	//    int arr[5] = {2, 3, 1, 0 , 9};
	//    int arr2[5] = {6, 3, 2, 1, 0};
	//    int arr3[5];
	//
	//    addArrays(arr, arr2, arr3, 5);

	//    int searchKey = 4;
	//
	//    bool found = false;
	//    for(int i=0;i<5;i++)
	//    {
	//        if(searchKey==arr[i])
	//        {
	//            cout<<"Element found at position "<<i+1;
	//            found = true;
	//            break;
	//        }
	//    }
	//    if(!found)
	//        cout<<"Element not found!";

	//    if(i==5)
	//        cout<<"Element not found!";

	int arr1[10] = {2, 3, 4, 1, 2};
	int arr2[10] = {8, 6, 2, 1, 0};

	int arr3[10];

	addArrays(arr1, arr2, arr3, 5);

	cout << "The arrays are: ";
	printArray(arr1, 5);
	printArray(arr2, 5);

	cout << "The sume is: " << endl;
	printArray(arr3, 5);

	return 0;
}
