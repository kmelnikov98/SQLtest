#pragma once

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Employee
{

public:
	Employee();
	Employee(string id, string name, string surname, string age);
	int getID();
	int getAge();
	string getSurname();
	string getName();
	friend bool operator < (const Employee& object1, const Employee& object2);
	void setName(string new_Name);
	void setSurname(string new_Surname);
	void setID(int new_id);
	void setAge(int new_age);
	void output();

private:
	string Name;
	string Surname;
	int ID;
	int Age;
};


