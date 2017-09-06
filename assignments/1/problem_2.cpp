#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


/*When incrementing the time by one this program will output random
 numbers independent of how fast it is computed or when it is computed.*/

int i = 0;
int roll(){
     srand(time(0) + i);
     i++;
     return (rand() % 6) + 1;
}

int main(){
     cout << roll() << endl;
     return 0;
}
