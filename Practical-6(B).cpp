#include<iostream>
using namespace std ;

int main(){

     // factorial of given numbers

     int n;
     cout << "Enter A Number :- ";
     cin >> n ;

     int fact = 1;

     for(int i  = 1; i <= n ; i++){
          fact = fact * i ;
     }
     cout << "Factorial of " << n << " = " << fact << endl; 
}
