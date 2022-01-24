// file with functions for main to use
#include "menu.h"
#include <string>
#include <iostream>
#include <fstream>
#include "teacher.h"
#include "student.h"
using namespace std;

void PrintMenu()
{
    cout << "1. Login" << endl;
    cout << "2. Add New User" << endl;
    cout << "3. Delete User" << endl;
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
int Login(string userName, string password)
{
    int success = 0; // 1 for success, 0 for fail
    // function to check if the userName and password are correct;
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
    PrintMenu();
}