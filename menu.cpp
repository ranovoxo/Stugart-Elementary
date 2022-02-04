// file with functions for main to use
#include "menu.h"
#include <string>
#include <iostream>
#include <fstream>
#include "teacher.h"
#include "student.h"
using namespace std;

int PrintMenu()
{
    int ch = 0;
    cout << "1. Login" << endl;
    cout << "2. Add New User" << endl;
    cout << "3. Delete User" << endl;
    cin >> ch;
    cout << ch << endl;
    bool accept = false;
    if(ch != 1 || ch != 2 || ch != 3)
    {
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
    }  
    return ch;
}
/*
Teacher NewUser()
{
    string username, password, first, last, course;
    int numStudents = 0;
    vector<Student> kids;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    
    first = "New";
    last = "User";
    course = "Calculus";
    Teacher newUser = Teacher(first, last, course, numStudents,kids);

    return newUser;
}
*/
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
    // code block
        break;
        
        case 3:
        break;
    // code block
}
    cout << " Done" << endl;
}