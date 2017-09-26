#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string salsa_names[5] = {"mild", "medium", "sweet", "hot", "zesty"};
int salsa_sales[5];

int main(){
	int max = 0;
	int min = 0;

	string output;	
	string printval;

	for(int i = 0; i < 5; i++){
		salsa_sales[i] = 0;
		do{
			if(salsa_sales[i] < 0){
				cout << "Salsa sales must be greater than zero" << endl;
			}
			
			cout << "Enter number of " << salsa_names[i] << " jars sold: ";
                	cin >> printval;
                	istringstream s(printval);
                	s >> salsa_sales[i];
				
			if(salsa_sales[i] >= 0){
                		if(salsa_sales[i] > salsa_sales[max]){
                        		max = i;
                		}

                		if(salsa_sales[i] < salsa_sales[min]){
                        		min = i;
                		}

                		s >> printval;

                		output += salsa_names[i] + ": " + printval + "\n";
			}	
		}while(salsa_sales[i] < 0);	
	
	}

	cout << output;
	cout << "Highest selling salsa: " << salsa_names[max] << endl;
	cout << "Lowest selling salsa: " << salsa_names[min] << endl;

	return 0;
	
}
