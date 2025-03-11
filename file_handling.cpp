#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // Declare variables
    char character;
    int integer;
    float floating_point;

    // Create and open an output file stream
    ofstream outFile("data.txt", ios::app);
    //    ofstream outFile;
    //    outFile.open("data.txt");

    cout << "Enter a character: ";
    cin >> character;
    cout << "Enter an integer: ";
    cin >> integer;
    cout << "Enter a floating point number: ";
    cin >> floating_point;

    // Write data to the file
    outFile << endl
            << character << " " << integer
            << " " << floating_point << endl;
    outFile.close(); // Close the file after writing

    cout << "\nData written to file successfully!\n";
    //
    // Create and open an input file stream
    // ifstream inFile("data.txt");
    ifstream inFile;
    inFile.open("data.txt");

    // Read data from the file
    inFile >> character >> integer >> floating_point;

    cout << "Reading \"data\" from file \\n";
    cout << "Character: " << character << "\n";
    cout << "Integer: " << integer << "\n";
    cout << "Float: " << floating_point << "\n";

    inFile.close(); // Close the file after reading

    return 0;
}
