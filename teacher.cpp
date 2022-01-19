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
void Teacher::SetFirst(string newFirst) { firstName = newFirst; }
void Teacher::SetLast(string newLast) { lastName = newLast; }
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
