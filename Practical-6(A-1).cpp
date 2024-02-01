#include<iostream>
using namespace std;

int main(){

     // print the pattern like this
     /*
     *
     ***
     *****
     */

     for(int i = 0 ; i <= 5 ; i++){
          for (int j = 0; j < i ; j++)
          {
               if(i%2 == 1){
               cout << "*";
               }
          }
          cout << "\n" ;
     }
}
