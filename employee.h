#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "employee.h"
using namespace std;

class Employee {
    protected:
        string firstName;
        string lastName;
        string position;
        string loginUserName;
        string loginPwd;

    public:
        Employee();
        Employee(string first, string last, string pos, string user_name, string pwd)
        {
            firstName = first;
            lastName = last;
            position = pos;
            loginUserName = user_name;
            loginPwd = pwd;
        }
        void SetFirst(string);
        void SetLast(string);
        void SetPosition(string);
        void SetUserName(string);
};
#endif