#include "teacher.h"
#include "student.h"
#include <iostream>
using namespace std;

// Constructor
Employee::Employee(){}

// Setters
void Employee::SetFirst(string newFirst) { firstName = newFirst; }
void Employee::SetLast(string newLast) { lastName = newLast; }
void Employee::SetPosition(string newPosition) { position = newPosition; }
void Employee::SetUserName(string newUser) { loginUserName = newUser; }

/*
void Employee::GenerateNewEmployee()
{
    string first, last, userName, position; 
    int choice;

    cout << "New Employee Form" << endl;
    cout << "Enter first name: ";
    cin >> first;
    cout << "Enter last name: ";
    cin >> last;
    cout << "Create username: ";
    cin >> userName;

    cout << "What position?" << endl;
    cout << "1: Principal\n";
    cout << "2: Vice Principal\n";
    cout << "3: Counselor\n";
    cout << "4: Teacher\n";
    cin >> choice;

    while(choice != 1 || choice != 2 || choice != 3 || choice != 4)
    {
        cout << "The number you entered is not correct, try again." << endl;
        cout << "1: Principal\n";
        cout << "2: Vice Principal\n";
        cout << "3: Counselor\n";
        cout << "4: Teacher\n";
        cin >> choice;
    }
    if(choice == 1)
    {
        //create principal
    }
    else if(choice == 2)
    {
        //create vice principal
    }
    else if(choice == 3)
    {
        //create counselor
    }
    else
    {
         //create teacher
    }
}
*/

