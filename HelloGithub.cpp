// Frederick Wittman
// Robin K. Hill
// COSC 2030-01
// 04 February 2019

#include "stdafx.h" // includes common files
#include <iostream> // provides basic input/output services
#include <fstream> // input/output class for file operations
#include <string> // the string class
using namespace std; // allows the compiler to differentiate between "code objects" of the same name

int main() 
{ 
    string line, response;                         // Declare two string objects
	cout << "Hello Github!" << endl;           // Print the text to the console
    ifstream file_squestns;                        // Declare input file
    file_squestns.open("StudentQuestions.txt");    // Open input file
    ofstream file_sanswers;                        // Declare output file
    file_sanswers.open("StudentAnswers.txt");      // Open output file
    while (getline(file_squestns, line))           // While there are lines in the input file, do the following:
    { 
        cout << line << " ";                       // Print each line
        cin >> response;                           // Prompt the user for input (the user response to the questions)
		file_sanswers << response << endl; // Write the user input to the output file
    }
    cout << "Goodbye Github!" <<endl;              // Print the text to the console window
    return 0;                                      // End the program
} 
