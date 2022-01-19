// file with functions for main to use
#include "menu.h"
#include <string>
#include <iostream>
#include <fstream>
#include "teacher.h"
#include "student.h"
using namespace std;

Teacher NewUser()
{
    string username, password, first, last, course;
    int numStudents = 0;
    vector<Student> kids;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    
    first = "Randal";
    last = "Carr";
    course = "Calculus";
    Teacher RandalCarr = Teacher(first, last, course, numStudents,kids);

    return RandalCarr;
}
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