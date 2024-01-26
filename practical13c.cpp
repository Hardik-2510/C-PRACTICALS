#include<iostream>
using namespace std;

int main(){

     // inverted paatern alphabet
     /*
          AAAA
          BBB
          CC
          D
     */
     
     char a = 'A';

     for(int i = 5 ; i >= 1 ; i--){
          for (int j = 1; j < i ; j++)
          {
               cout << a;
          }
               a++;
          cout << "\n" ;
     }
}