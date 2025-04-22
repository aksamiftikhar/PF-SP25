#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream infile("data.txt");
	int number;

	if (!infile)
	{
		cout << "Could not open file!" << endl;
		return 1;
	}

	while (infile >> number) // this will return false, if end-of-file
	{
		cout << "Read number: " << number << endl;
	}

	cout << "End of file reached." << endl;
	infile.close();
	return 0;
}
