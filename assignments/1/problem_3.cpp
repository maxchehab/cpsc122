#include <iostream>

using namespace std;

int main(){
     int num1 = 0, num2 = 10, result;
     num1++;
     result = ++(num1 + num2); //The problem lies here. You cannot increment two variables at the same time.
     cout << num1 << " " << num2 << " " << result;
     return 0;
}
