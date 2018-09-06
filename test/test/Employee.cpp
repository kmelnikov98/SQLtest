#include "Employee.h"


Employee::Employee(string id, string name, string surname, string age)
{
	int newID = stoi(id);
	int newAge = stoi(age);
	
	Name = name;
	Surname = surname;
	ID = newID;
	Age = newAge;
}

void Employee::setName(string new_Name)
{
	Name = new_Name;
}

void Employee::setSurname(string new_Surname)
{
	Surname = new_Surname;

}

void Employee::setAge(int new_age)
{
	Age = new_age;
}

void Employee::setID(int new_id)
{
	ID = new_id;
}

int Employee::getAge()
{
	return Age;
}


int Employee::getID()
{
	return ID;
}

string Employee::getSurname()
{
	return Surname;
}

string Employee::getName()
{
	return Name;
}

Employee::Employee()
{
	//blank
}


void Employee::output()
{
	cout << ID <<  Name << ". " << Surname << ". " << Age << ". " <<  endl;
}

bool operator < (const Employee& object1, const Employee& object2) //uses the overloaded operator to compare two objects
{
	return (object1.ID < object2.ID);
}
//In this case, we made an object of size 10, BUT this operator treates each element in the object AS A seperate object!
//This way, when you use the sorting function, you're sorting by author each element in the object 'data1'


