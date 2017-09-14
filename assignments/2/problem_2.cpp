#include <iostream>
#include <string>

using namespace std;

class Date{
private:
	string months[12] = {
                        "January",
                        "February",
                        "March",
                        "April",
                        "May",
                        "June",
                        "July",
                        "August",
                        "September",
                        "October",
                        "November",
                        "December"};
	int month, day, year;
public:

	void printDateA();
	void printDateB();
	void printDateC();
	void readDate();
};


void Date::printDateA(){
	cout << month << "/" << day << "/" << year << endl;
}

void Date::printDateB(){
	cout << months[month - 1] << " " << day << ", " << year << endl;
}

void Date::printDateC(){
	cout << day << " " << months[month - 1] << " " << year << endl;
}

void Date::readDate(){

	do{
		if(month == -1){
			cout << "Invalid response" << endl;
		}
		cout << "Month: ";
		cin >> month;
		if(month > 12 || month < 1){
			month = -1;
		}
	}while(month == -1);

	do{
        	if(day == -1){
        		cout << "Invalid response" << endl;
                }
                cout << "Day: ";
                cin >> day;
                if(day > 31 || day < 1){
                        day = -1;
                }
        }while(day == -1);

	cout << "Year: ";
	cin >> year;
}

int main(){
	Date date;
	date.readDate();
	date.printDateA();
	date.printDateB();
	date.printDateC();

	return 0;
}
