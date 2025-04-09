#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x = 0;

	char grade;
	cout << "Enter grade: ";
	cin >> grade;
	while (grade != 'Q')
	{
		if (grade == 'W')
			cout << "Best";
		else if (grade == 'X')
			cout << "Average";
		else if (grade == 'Y')
			cout << "Worst";

		cout << "Enter grade: ";
		cin >> grade;
	}

	do
	{
		cout << "Enter grade: ";
		cin >> grade;
		if (grade == 'W')
			cout << "Best";
		else if (grade == 'X')
			cout << "Average";
		else if (grade == 'Y')
			cout << "Worst";
	} while (grade != 'Q');

	int score = 0, sum = 0;
	const int SENTINEL = -99;
	do
	{
		sum += score; // sum = sum+score;
		cout << "Enter score: ";
		cin >> score;
	} while (score != SENTINEL)
}
