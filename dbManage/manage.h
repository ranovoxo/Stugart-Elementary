#include <sqlite3.h>

void CreateTable();
int Connect();
static int CallBack(void*, int, char**, char**);
void Insert();