#include "student.h"
#include <iostream>
#include <iterator>
using namespace std;

// Constructor
Student::Student(){}

Student::Student(string newFirstName, string newLastName, long newID, int newFirstAge, int newFirstGradeLevel)
{
    first = newFirstName; last = newLastName; studentID = newID; age = newFirstAge; grade_level = newFirstGradeLevel;
}

// Setters
void Student::SetFirst(string firstName) { first = firstName; }
void Student::SetLast(string lastName) { last = lastName;}
void Student::SetAge(int newAge) { age = newAge; }
void Student::SetGradeLevel(int newGradeLevel) { grade_level = newGradeLevel;}
void Student::SetID(int newID) { studentID = newID; }
void Student::SetClasses(map<string, int> classes) { grades = classes; }
  
// Getters
string Student::GetFirst() { return first; }
string Student::GetLast() { return last; }
int Student::GetAge() {return age; }
int Student::GetGradelevel() { return grade_level; }
int Student::GetID() { return studentID; }

// Others
void Student::print()
{
    map<string,int>::iterator it;

    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ __  _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << "Name: " << first << " " << last <<  "   |    " << "Age: " << age <<  "   |    " <<  "Grade: " << grade_level << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;

    for(it = grades.begin(); it!= grades.end(); it++)
    {
        cout << "Class: " <<  it->first << "   Grade: " << it->second << endl;
    }
}