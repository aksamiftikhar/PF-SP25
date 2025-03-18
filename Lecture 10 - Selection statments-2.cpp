#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int age = 20;

	//    if (age > 18)
	//    {
	//        cout << "Eligible to vote." << endl;
	//        cout << "No longer a minor." << endl;
	//    }
	//    else
	//    {
	//        cout << "Not eligible to vote." << endl;
	//        cout << "Still a minor." << endl;
	//    }

	int score = 5;

	//    if(score>=90)
	//    {
	//        cout<<"A";
	//    }
	//    else if(score>=80)
	//    {
	//        cout<<"B";
	//    }
	//    else if(score>=70)
	//        cout<<"C";
	//    else if(score>=60)
	//        cout<<"D";

	(score >= 90) ? cout << "A" : cout << "F";

	//        char grade = 'C';
	//    if(grade=='A')
	//        cout<<"Excellent";
	//    else if(grade=='B')
	//        cout<<"Very good";
	//    else if(grade=='C')
	//        cout<<"Satisfactory";
	//    else
	//        cout<<"Try again!";

	//    if(score>=90)
	//        cout<<"A";
	//    if(score>=80)
	//        cout<<"B";
	//    if(score>=70)
	//        cout<<"C";
	//    if(score>=60)
	//        cout<<"D";
	//
	//
	//    if(score>=90 && score<=100 )
	//        cout<<"A";
	//    if(score>=80 && score<90)
	//        cout<<"B";
	//    if(score>=70 && score<80)
	//        cout<<"C";
	//    if(score>=60 && score<70)
	//        cout<<"D";

	if (score >= 50)
		cout << "Pass";
	else
		cout << "Fail";

	(score >= 50) ? cout << "Pass" : cout << "Fail";

	int num1 = 0, num2 = 10;
	int max_num;

	if (num1 > num2)
		max_num = num1;
	else
		max_num = num2;

	(num1 > num2) ? max_num = num1 : max_num = num2;

	//    cout << ((num1>num2)? num1 : num2);
	//    max_num = ((num1>num2)? num1 : num2);
	//
	//    cout<<max_num;

	return 0;
}
