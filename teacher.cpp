#include "teacher.h"
#include "student.h"
#include <iostream>
using namespace std;

// Constructor

Teacher::Teacher(){}

Teacher::Teacher(string newFirstName, string newLastName, string newCourseName, int numOfStudents, vector<Student> newStudent)
{
    firstName = newFirstName; lastName = newLastName; course = newCourseName; numberOfStudents = numOfStudents; students = newStudent;
}

// Setters
//void Employee::SetFirst(string newFirst) { firstName = newFirst; }
//void Employee::SetLast(string newLast) { lastName = newLast; }
//void Employee::SetPosition(string newPosition) { position = newPosition; }
//void Employee::SetUserName(string newUser) { loginUserName = newUser; }
void Teacher::SetCourse(string newCourse) { course = newCourse; }
void Teacher::SetNumStudents(int numStudents) {numberOfStudents = numStudents; }

// Getters
string Teacher::GetFirst() { return firstName; }
string Teacher::GetLast() { return lastName; }
string Teacher::GetCourse() { return course; }
int Teacher::GetNumStudents() { return numberOfStudents; }

void Teacher::AddStudent(Student newStudent)
{
    students.push_back(newStudent);
}

// function to find a student by first and last name
Student Teacher::findStudent(string studentFirstName, string studentLastName)
{
    vector<Student>::iterator it;
    Student x;
    for(it = students.begin(); it!= students.end(); it++)
    {
       if(it->GetFirst() == studentFirstName && it->GetLast() == studentLastName)
       {
           x =  *it;
           cout << x.GetFirst() << " " << x.GetLast() << " " << endl;
           break;
       } 
    }
    return x;
}
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

void Teacher::Print()
{
    vector<Student>::iterator it;

    cout << "Teacher: " << firstName << " " << lastName << endl;
    cout << "Course: " << course << endl;
    cout << "Number of Students: " << numberOfStudents << endl;
    cout << "___Students___" << endl;

    for(it = students.begin(); it!= students.end(); it++)
    {
        cout << it->GetFirst() << " " << it->GetLast() << endl;
    }
}
