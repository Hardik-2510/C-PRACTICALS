#include<iostream>
using namespace std;

void SumofFirstnNumbers(int n){
     int sum = 0 ;
     for(int i = 1 ; i <= n ; i++){
          sum = sum + i ;
     }
     cout << "The Sum Of First " << n << " Numbers = " << sum ;
}

int main(){

// Find The Sum Of First n Numbers using Function
  
     int n;
     cout << "Enter A Number : ";
     cin >> n ;

     SumofFirstnNumbers(n); 
}
