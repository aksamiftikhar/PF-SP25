#include <iostream>
using namespace std;

int main()
{
	int i;
	int num = 5;

	int start_num = 0;
	int end_num = 10;

	int sum = 0;
	int j = start_num;
	while (j <= end_num)
	{

		if (j % 2 == 0)
			sum = sum + j;
		j++; // j += 2;
	}
	cout << endl
		 << endl
		 << sum << endl;

	//    int x;
	//
	//    x=1;
	//    while(x<=100)
	//    {
	//        cout<<x<<endl;
	////        x = x+1;
	////        x++;
	//        ++x;
	//
	//    }
	//
	//    int n = 5;
	//    int i ;
	//    i = 1;
	//    while(i<=10)
	//    {
	//        // 5 * 1 = 5
	//        int y = n*i;
	//        cout<<n<<" * " << i << " = " << y<<endl;
	//        i++;
	//    }
	//
	//
	//    for(i = 1; i<=10; ++i)
	//    {
	//        // 5 * 1 = 5
	//        int y = n*i;
	//        cout<<n<<" * " << i << " = " << y<<endl;
	//
	//    }
	//
	//    int sum = 0;
	//    for(int j=0;j<=10;j++)
	//    {
	//        if(j%2==0)
	//        {
	//            sum = sum + j;
	//        }
	//
	//    }
	//    cout<<sum;
}
