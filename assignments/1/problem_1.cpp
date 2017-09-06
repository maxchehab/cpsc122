#include <iostream>

int setprecision(int i){
     return i;
}
int choice = 0;
int fixed = 0;
int showpoint = 0;

int main(){
     switch(choice) {
          case 1 :
               std::cout << fixed << showpoint << setprecision(2) << std::endl;
               break;
          case 2 :
          case 3 :
               std::cout << fixed << showpoint << setprecision(4) << std::endl;
               break;
          case 4 :
               std::cout << fixed << showpoint << setprecision(6) << std::endl;
               break;
          default :
               std::cout << fixed << showpoint << setprecision(8) << std::endl;
     }
}
