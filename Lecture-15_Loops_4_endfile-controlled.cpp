#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream infile("data.txt");
	int number;

	if (!infile)
	{
		cerr << "Could not open file!" << endl;
		return 1;
	}

	infile >> number;
	while (!infile.eof())
	{
		cout << "Read number: " << number << endl;
		infile >> number;
	}

	cout << "End of file reached." << endl;
	infile.close();
	return 0;
}
