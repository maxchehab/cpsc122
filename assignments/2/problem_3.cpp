#include <iostream>
#include <string>

using namespace std;

class Employee{
private:
	string name;
	int idNumber;
	string department;
	string position;

public:
	Employee(string, int, string, string);
	Employee(string, int);
	Employee();

	string getName();
	void setName(string);

	int getIdNumber();
	void setIdNumber(int);

	string getDepartment();
	void setDepartment(string);

	string getPosition();
	void setPosition(string);

	void print();
};

Employee::Employee(string _name, int _idNumber, string _department, string _position){
	name = _name;
	idNumber = _idNumber;
	department = _department;
	position = _position;
}

Employee::Employee(string _name, int _idNumber){
	name = _name;
	idNumber = _idNumber;
	department = "";
	position = "";
}

Employee::Employee(){
	name = "";
	idNumber = 0;
	department = "";
	position = "";
}

string Employee::getName(){
	return name;
}

void Employee::setName(string _name){
	name = _name;
}

int Employee::getIdNumber(){
	return idNumber;
}

void Employee::setIdNumber(int _idNumber){
	idNumber = _idNumber;
}

string Employee::getDepartment(){
	return department;
}

void Employee::setDepartment(string _department){
	department = _department;
}

string Employee::getPosition(){
	return position;
}

void Employee::setPosition(string _position){
	position = _position;
}

void Employee::print(){
	cout << "Name: " << name << endl;
	cout << "idNumber: " << idNumber << endl;
	cout << "department: " << department << endl;
	cout << "position: " << position << endl;

}

int main(){
	Employee e1("Max Chehab",2, "Engineering", "CTO");
	e1.print();
	cout << endl;

	Employee e2("Susan", 1);
	e2.print();
	cout << endl;

	Employee e3;
	e3.print();
	return 0;
}
