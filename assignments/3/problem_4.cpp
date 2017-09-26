#include <iostream>

using namespace std;

int numbers[10] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
int winningTicket;

int main(){
	cout << "Please enter the winning lottery ticket: ";
	cin >> winningTicket;

	for(int i = 0; i < 10; i++){
		if(winningTicket == numbers[i]){
			cout << "Hey it's me... your long lost brother.\nThat's a nice lottery ticket you got there ;)" << endl;
			return 0;
		}
	}

	cout << "Try again next time :(" << endl;
	return 0;
}
