#ifndef TEACHER_H
#define TEACHER_H
#include <string>
#include "student.h"
using namespace std;


class Teacher {
    private:
        string firstName;
        string lastName;
        string position;
        string loginUserName;
        string course;
        int roomNumber;
        int numberOfStudents;
        vector<Student> students;

    public: 
        Teacher();
        Teacher(string, string, string, int, vector<Student>);
        void SetCourse(string);
        void SetNumStudents(int);
        void AddStudent(Student); 
        string GetFirst();
        string GetLast();
        string GetCourse();
        int GetNumStudents();
        vector<Student> GetStudents();
        Student findStudent(string, string);
        void Print();
};
#endif