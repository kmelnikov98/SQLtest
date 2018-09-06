//root password
#define PASS "password"


//------------------------------------------------------------


#include"Employee.h"
#include<iostream>
#include<string>
#include<algorithm>
#include<Windows.h>
#include<mysql.h>

using namespace std;
int qstate;


int main()
{
	MYSQL*conn;
	MYSQL_ROW row;
	MYSQL_RES *res;
	int i = 0;

	conn = mysql_init(0);

	conn = mysql_real_connect(conn, "localhost", "root", PASS, "database", 3306, NULL, 0);

	if (conn)
	{
		cout << "Success" << endl;
	}

	else
	{
		cout << "Fail" << endl;
	}


	string query = "SELECT * FROM employees order by Age";
	const char* q = query.c_str();
	qstate = mysql_query(conn, q);

	Employee persons[10];

	if (!qstate)
	{	
		
		res = mysql_store_result(conn);
		while (row = mysql_fetch_row(res))
		{
			Employee person = Employee(row[0], row[1], row[2] ,row[3]);
			persons[i] = person;

			cout << "ID: " << persons[i].getID() << ", Name: " << persons[i].getName() << ", Surname: " << persons[i].getSurname() << ", Age: " << persons[i].getAge() << endl;
			i++;
		}
	}
	else
	{
		cout << "Query failed" << mysql_error(conn) << endl;
	}


	
	return 0;

}
