// file with functions for main to use
#include "control.h"
#include <string>
#include <iostream>
#include <fstream>
#include "../teachers/teacher.h"
#include "../students/student.h"
using namespace std;

long FourDigitRandom()
{
   return (long) rand() % (9999 + 1); 
}
long GenerateID()
{
    long l = FourDigitRandom() + (FourDigitRandom() * 10000);
    
    return l;
}

int PrintMenu()
{
    int ch = 0;
    cout << "1. Login" << endl;
    cout << "2. Add New User" << endl;
    cout << "3. Delete User" << endl;
    cin >> ch;
    cout << ch << endl;
    bool accept = false;

    if(ch == 1 || ch == 2 || ch == 3)
    {
        accept = true; // if choice correct, skip loop
    }
    while(accept == false)
    {
        cout << "Wrong selection, Try again." << endl;
        cout << "1. Login" << endl;
        cout << "2. Add New User" << endl;
        cout << "3. Delete User" << endl;
        cin >> ch;
        if(ch == 1 || ch == 2 || ch == 3)
        {
                accept = true; // break loop if good selection
        }
    }
     
    return ch;
}

bool verifyLogin(string, string)
{

    return false;
}
int Login()
{
    int success = 0; // 1 for success, 0 for fail
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
   
    return success;
}
void NewUser()
{
     string username, password;
     cout << "create username: ";
     //cin >> username;
     cout << "create password: ";
     //cin >> password;
     //cout <<
}
void TeacherMenu()
{
    cout << "1. Add New Student" << endl;
    cout << "2. Update Grades" << endl;
    cout << "3. Edit Student Info" << endl;
    cout << "4. Remove Student" << endl;
}
void SaveData(string fileName, vector<Student> students, vector<Teacher> teachers)
{
    ofstream myfile;
    string student = "Student";
    string teacher = "Teacher";

    if(student == fileName)
    {
         myfile.open("StudentData.txt");
    }
    else if(teacher == fileName)
    {
        myfile.open("TeacherData.txt");
    }
}

void StartProgram()
{
    int choice = 0;
    choice = PrintMenu();

    switch(choice) {
        case 1:
        Login();
        break;
        case 2:
        NewUser();
    // code block
        break;
        
        case 3:
        break;
    // code block
    }
    cout << " Done" << endl;
}

