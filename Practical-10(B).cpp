#include<iostream>
using namespace std;

     void FactofFirstnNumbers(int n){
     int fact = 1 ;
     for(int i = 1 ; i <= n ; i++){
          fact = fact * i ;
          }
     cout << "The factorial Of " << n << " = " << fact ;
     }

int main(){
  
// Find The Factorial Of First n Numbers using Function

     int n;
     cout << "Enter A Number : ";
     cin >> n ;

     FactofFirstnNumbers(n); 
}
