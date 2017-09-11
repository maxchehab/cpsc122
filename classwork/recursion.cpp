#include <iostream>
using namespace std;

int factorial(int n){

     if(n == 0){
          return 1;
     }
     if( n > 0){
          return n * factorial(n - 1);
     }
     return 0;
}

void reverse(string str){
     if(str.length() == 1){
          cout << str[0];
     }else{
          cout << reverse(str.substr(1 - str.length()));
     }
}


int main(){

     /*cout << "1! = " << factorial(1) << endl;
     cout << "2! = " << factorial(2) << endl;
     cout << "3! = " << factorial(3) << endl;
     cout << "4! = " << factorial(4) << endl;*/

     return 0;
}
