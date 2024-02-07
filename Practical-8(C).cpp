#include<iostream>
#include<string.h>
using namespace std;

int main(){
     
     string line;

     getline(cin , line);
     cout << "Entered String : " << line << endl ; 

     int n = line.length();

      cout << "Reversed String  :" ;
      for(int i = n ; i > 0 ; i--){
          cout << line[i-1] ;
      }
}
