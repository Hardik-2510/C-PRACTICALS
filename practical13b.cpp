#include<iostream>
using namespace std;

int main(){

     // print pattern the odd number
     /*
     1
     3 5
     7 9 11
     */

     int n = 3;
         int number = 1; 
         for(int i = 1 ; i <= n ;i++){
             for(int j = 1 ; j <=i ; j++){
                 cout << number << " ";
                 number = number + 2;
             }
                 cout <<  "" << endl;
         }
}