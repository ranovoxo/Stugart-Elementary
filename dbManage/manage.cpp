#include <sqlite3.h>
#include <stdio.h>
#include <iostream>
using namespace std;

sqlite3* DB; // Global Variable

static int CallBack(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;
   for(i = 0; i<argc; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

void Insert()
{
    char *sql;
    char *zErrMsg = 0;
    int rc;

    sql = (char*)"INSERT INTO COMPANY (ID,FIRST, LAST, POSITION, USERNAME, PWD, CLASSID, SALARY) "  \
         "VALUES (1, 'Randy', 32, 'California', 20000.00 );";

   /* Execute SQL statement */
   rc = sqlite3_exec(DB, sql, CallBack, 0, &zErrMsg);
   
   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Records created successfully\n");
   }
}


void CreateTable()
{
    char *sql;
    int rc;
    char *zErrMsg = 0;
     /* Create SQL statement */
    sql =(char*) "CREATE TABLE COMPANY("  \
      "ID           INT PRIMARY KEY  NOT NULL," \
      "FIRST        TEXT    NOT NULL," \
      "LAST         TEXT    NOT NULL," \
      "POSITION     TEXT    NOT NULL," \
      "USERNAME     TEXT    NOT NULL," \
      "PWD          TEXT    NOT NULL," \
      "CLASSID      INT     NOT NULL," \
      "SALARY       REAL );";

   /* Execute SQL statement */
   rc = sqlite3_exec(DB, sql, CallBack, 0, &zErrMsg);
   
   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Table created successfully\n");
   }
} 

int Connect()
{
    int exit = 0;
    exit = sqlite3_open("example.db", &DB);
  
    if (exit) {
        cerr << "Error open DB " << sqlite3_errmsg(DB) << std::endl;
        return (-1);
    }
    else
	{
        CreateTable();
	}
    //sqlite3_close(DB);
    return 0;
}
void addEmployee(string first, string last)
{

}