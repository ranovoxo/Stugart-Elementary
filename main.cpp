#include "student.h"
#include "teacher.h"
#include "menu.h"
#include "helpers.h"
#include <iostream>
#include <map>
#include <string>
using namespace std;

// C++ pgroram for connecting to database (and error handling)
#include<stdio.h>
#include <sqlite3.h>

int main(int argc, char** argv)
{
	sqlite3* DB;
    int exit = 0;
    exit = sqlite3_open("example.db", &DB);
  
    if (exit) {
        std::cerr << "Error open DB " << sqlite3_errmsg(DB) << std::endl;
        return (-1);
    }
    else
        std::cout << "Opened Database Successfully!" << std::endl;
    sqlite3_close(DB);
    return (0);
}

