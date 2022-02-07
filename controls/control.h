#include <string>
#include "../students/student.h"
#include "../teachers/teacher.h"
using namespace std;

int Login();
bool verifyLogin(string, string);
void printMenu();
void NewUser();
void SaveData(string, vector<Student>, vector<Teacher>);
void StartProgram();

bool idAvailable(vector<Student>);
long FourDigitRandom();
long GenerateID();