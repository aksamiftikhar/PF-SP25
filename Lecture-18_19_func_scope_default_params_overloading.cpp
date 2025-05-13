#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int x;
const int PIE = 3.14;
void testFunc(int x, int y = 100, int z = 50);

void testFunc(int x, int y, int z)
{
	cout << x << " " << y << " " << z << endl;
}
double computeArea(int w, int h);
double computeArea(int r);

double computeArea(int w, int h)
{
	return h * w;
}
double computeArea(int r)
{
	return PIE * r * r;
}
void myFunc(int x)
{

	//
	cout << x;
	//    cout<<y;
}
int main()
{
	//    int x = 30; // Local x variable shadows global x variable
	//    cout<<x;
	//    myFunc(x);

	//    if(true)
	//    {
	////        cout<<x;
	//        int y = -30;
	//        cout<<y;
	//    }
	//    cout<<y;
	//    int y = 10;
	//    cout<<y;
	testFunc(0, 0, 0);
	testFunc(10, -10);
	testFunc(-1);

	cout << computeArea(10, 3);
	cout << computeArea(10);

	return 0;
}
