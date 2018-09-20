#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <sqlite3.h> 
#include <vector>
#include <string>

using namespace std;

class Company
{
   
      
   public:
      int id;
      string name;
      int age;
      string address;
      double salary;
      Company(int id, const string& name, int age, const string& address, double salary);      
};

Company::Company(int id, const string& name, int age, const string& address, double salary){
   this->id = id;
   this->name = name;
   this->age = age;
   this->address = address;
   this->salary = salary;
}


static int callback(void *NotUsed, int argc, char **argv, char **azColName){
   int i;
   for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}


int main(int argc, char* argv[])
{

   vector<Company*> companies;

   sqlite3 *db;
   char *zErrMsg = 0;
   int  resultCode;
   const char* data = "Callback function called";

   /* Open database */
   resultCode = sqlite3_open("record->db", &db);
   if( resultCode ){
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      exit(0);
   }else{
      fprintf(stdout, "Opened database successfully\n");
   }

   /* Create SQL statement */
   const char* create_statment = "create table if not exists COMPANY("  \
                     "ID INT PRIMARY KEY     NOT NULL," \
                     "NAME           varchar(50)    NOT NULL," \
                     "AGE            INT     NOT NULL," \
                     "ADDRESS        varchar(50)," \
                     "SALARY         REAL );";

   /* Execute SQL statement */
   resultCode = sqlite3_exec(db, create_statment, callback, 0, &zErrMsg);
   if( resultCode != SQLITE_OK ){
   fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   }else{
      fprintf(stdout, "Table created successfully\n");
   }

   /* Create SQL statement */
   const char* insert_statment = "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) "  \
         "VALUES (1, 'Paul', 32, 'California', 20000.00 ); " \
         "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) "  \
         "VALUES (2, 'Allen', 25, 'Texas', 15000.00 ); "     \
         "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY)" \
         "VALUES (3, 'Teddy', 23, 'Norway', 20000.00 );" \
         "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY)" \
         "VALUES (4, 'Mark', 25, 'Rich-Mond ', 65000.00 );";

   /* Execute SQL statement */
   resultCode = sqlite3_exec(db, insert_statment, callback, 0, &zErrMsg);
   if( resultCode != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   }else{
      fprintf(stdout, "Records created successfully\n");
   }

   // /* Create SQL statement */
   sqlite3_stmt *stmt;
   resultCode = sqlite3_prepare_v2(db, "SELECT id, name, age, address, salary from COMPANY", -1, &stmt, NULL);

   if (resultCode != SQLITE_OK){
      cout << "SELECT faild:" << sqlite3_errmsg(db) << endl;
   }
   while (sqlite3_step(stmt) == SQLITE_ROW) {

      int id = sqlite3_column_int(stmt, 0);
      const char* name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
      int age = sqlite3_column_int(stmt, 2);
      const char* address = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));
      double salary = sqlite3_column_double(stmt, 4);

      companies.push_back(new Company(id, name, age, address, salary));

   }

   for (int i = 0; i < companies.size(); i++ ){

      cout << "Company: " << companies[i]->id << "\n"
           << "Name: " << companies[i]->name << "\n"
           << "Age: " << companies[i]->age << "\n"
           << "Address: " << companies[i]->address << "\n"
           << "Salary: " << companies[i]->salary << endl;
   }
   
   sqlite3_close(db);
   return 0;
}