#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Division{
public:
	string name;
	int quaterSales[4];
	
	void write();
	void getSales();
	
	Division(string);
};

Division::Division(string _name){
	name = _name;
	getSales();
}

void Division::write(){
	ofstream file;
	file.open("output.txt", fstream::in | fstream::out | fstream::app);
	file << "------" << name << "------" << endl;
	file << "Quater Sales: " << endl;
	
	for(int i = 0; i < 4; i ++){
		file << quaterSales[i] << endl;
	}

	file << endl;

	file.close();
}

void Division::getSales(){
	cout << "Inputing quater sales for Division " << name << ":" << endl;
	for(int i = 0; i < 4; i++){
		do{
			if(quaterSales[i] == -1){
				cout << "Quater sales " << i + 1  << " must be greater than 0" << endl;
			}

			cout << "Quater " << i + 1 << " sales: ";
                	cin >> quaterSales[i];

			if(quaterSales[i] <= 0){
				quaterSales[i] = -1;
			}
		}while(quaterSales[i] == -1);
		
	}
}

int main(){
	Division west("West");
	west.write();
	cout << endl;

	Division east("East");
	east.write();
	cout << endl;

	Division north("North");
	north.write();
	cout << endl;

	Division south("South");
	south.write();
	return 0;
}
