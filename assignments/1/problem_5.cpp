#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
     string path = "Numbers.txt";

     fstream outputFile;
     outputFile.open(path, fstream::in | fstream::out | fstream::trunc);
     if(outputFile){
          for(int i = 1; i <= 100; i++){
               outputFile << i << endl;
          }
          outputFile.close();
     }

     int total = 0;
     string in;
     ifstream inputFile (path);
     if(inputFile.is_open()){
          while ( getline (inputFile, in) ){
               total += stoi(in);
          }
          inputFile.close();
     }

     cout << total << endl;
     return 0;
}
