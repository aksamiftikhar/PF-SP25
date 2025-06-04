#include <iostream>
#include <vector>
using namespace std;

void temp(auto x)
{
	cin >> x;
	cout << x;
}
int main()
{
	int arr[] = {1, 2, 5};
	//    for(int i=0;i<3;i++)
	//        arr[i] *= 2;
	//    for(int i=0;i<3;i++)
	//        cout<<arr[i]<<endl;

	int i = 0;
	for (int num : arr)
	{
		num *= 2;

		if (num % 2 == 0)
			cout << num;
		i++;
	}

	for (int num : arr)
		cout << num << endl;
	cout << endl;
	//    //int x = 20;
	double y = 3.15;
	////    char ch = 'A';
	//
	//    int x = 123;
	////    cout<<x;
	////    cin>>x;
	////    cout<<x;
	////    cout<<sizeof(x);
	//    temp(x);
	temp(y);

	return 0;
}
