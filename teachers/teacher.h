#ifndef TEACHER_H
#define TEACHER_H
#include "../employees/employee.h"
#include "teacher.h"
#include "../students/student.h"

class Teacher : public Employee {
    private:
        string course;
        int roomNumber;
        int classID;
        vector<Student> students;

    public: 
        Teacher();
        Teacher(string newCourse, int newRoom, vector<Student> newClass, string first, string last, string pos, string user_name, string pwd) 
        : Employee(first, last, pos, user_name, pwd) 
        {
            course = newCourse;
            roomNumber = newRoom;
            students = newClass;
        }
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