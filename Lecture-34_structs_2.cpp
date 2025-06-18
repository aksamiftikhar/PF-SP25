#include <iostream>
#include <cstring>
using namespace std;

struct student
{
    int roll_no; // data member OR field
    string name;
    double marks;
};

struct book
{
    int isbn; // field OR data member
    string title;
    float price;
};

void displayMessage(string s)
{
    cout << s << endl;
}
// void displayBook(book b1)
//{
//     cout<<b1.isbn<<endl; // component selection operator
//
//     cout<<b1.title<<b1.title.size()<<endl;
// }
void readStudentData(student &s1)
{
    cin >> s1.roll_no >> s1.name >> s1.marks;
}

student readStudentData()
{
    student s1;
    cin >> s1.roll_no >> s1.name >> s1.marks;

    return s1;
}
void displayStudent(student s1)
{
    cout << "The student with roll number " << s1.roll_no << " has the following data:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;
}

int main()
{

    book b1 = {1001, "Easy C++"};
    //    cout<<b1; // Error: no input/output for struct variables
    //    cin>>b1; // Error
    book b2 = b1;
    //    b2 = b2 + b1; Error: no arithmetic op for struct variables

    //    student s1 = b1; // Error

    //    cout<<b1.isbn<<endl; // component selection operator
    //
    //    cout<<"Enter book title: ";
    //    cin>>b1.title;
    //    cout<<b1.title<<b1.title.size()<<endl;

    //    displayMessage(b1.title);

    //    displayBook(b1);

    student std1 = {1, "ali hussan", 95};

    //    readStudentData(std1);
    std1 = readStudentData();
    displayStudent(std1);
    return 0;
}
