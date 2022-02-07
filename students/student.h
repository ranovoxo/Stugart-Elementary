#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <map>
#include <vector>
using namespace std;

class Student {
    private:
        string first;
        string last;
        long studentID;
        int age;
        int grade_level;
        map<string, int> grades;
        
    public:
        Student();
        Student(string, string, long, int, int);
        void SetFirst(string);
        void SetLast(string);
        void SetID(int);
        void SetAge(int);
        void SetGradeLevel(int);
        void SetClasses(map<string,int>);
        string GetFirst();
        string GetLast();
        int GetAge();
        int GetGradelevel();
        int GetID();
        void print();
        
};
#endif