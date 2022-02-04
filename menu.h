#include <string>
#include "student.h"
#include "teacher.h"
using namespace std;

int Login();
bool verifyLogin(string, string);
void printMenu();
Teacher NewUser();
void SaveData(string, vector<Student>, vector<Teacher>);
void StartProgram();