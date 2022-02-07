#include "teacher.h"
#include "../employees/employee.h"
#include "../students/student.h"
#include <iostream>
using namespace std;

Teacher::Teacher(){}

void Teacher::SetCourse(string newCourse) { course = newCourse; }

// Getters
string Teacher::GetFirst() { return firstName; }
string Teacher::GetLast() { return lastName; }
string Teacher::GetCourse() { return course; }
int Teacher::GetNumStudents() { return students.size(); }

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
    cout << "Number of Students: " << students.size() << endl;
    cout << "___Students___" << endl;

    for(it = students.begin(); it!= students.end(); it++)
    {
        cout << it->GetFirst() << " " << it->GetLast() << endl;
    }
}