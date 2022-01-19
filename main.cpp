#include "student.h"
#include "teacher.h"
#include "menu.h"
#include "helpers.h"
#include <iostream>
#include <map>
#include <string>
using namespace std;


int main() {

    string userName;
    string passWord;
    vector<Student> stu;
    vector<Teacher> tea;
    Teacher temp;
    int loginAttempt;
    int option;
    cout << "Press 1 for New User" << endl;
    cout << "Press 2 for Continuing User" << endl;
    cin >> option;

    if(option == 1)
    {
        tea.push_back(NewUser()); // create new user
        //tea.at(0).Print(); // add new teacher to teacher list
    }
    else if(option ==2)
    {
        cout <<"Please enter Username: ";
        cin >> userName;
        cout << "Please enter password: ";
        cin >> passWord;
        Login(userName, passWord); // returns 0 if fail and 1 if passes
    }


    Student Randal = Student("Randal", "Carr",GenerateID(), 28, 12);
    Student Tracey = Student("Tracy", "Lynn",GenerateID(), 24, 13);

    cout << Randal.GetID() << endl;
    cout << Tracey.GetID() << endl;

    map<string, int> grades;
    grades.insert(pair<string,int>("Math", 90));
    grades.insert(pair<string,int>("English", 85));
    grades.insert(pair<string,int>("History", 78));
    grades.insert(pair<string,int>("Science", 95));
    Randal.SetClasses(grades);

    map<string, int> grades2;
    grades.insert(pair<string,int>("Math", 91));
    grades.insert(pair<string,int>("English", 80));
    grades.insert(pair<string,int>("History", 78));
    grades.insert(pair<string,int>("Science", 75));

    Tracey.SetClasses(grades2);
    stu.push_back(Randal);
    stu.push_back(Tracey);

    Teacher y = Teacher("Cable", "Brown", "Math", 1, stu);
    
    y.AddStudent(Tracey);
    y.AddStudent(Randal);

   y.findStudent("Randal", "Carr");

}