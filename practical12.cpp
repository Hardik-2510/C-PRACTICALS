#include<iostream>
using namespace std;

int main(){

          // check the given number is prime or not 

          int n ;
          cout << "Enter A Number :- ";
          cin >> n ;
     
          int count = 0;

          for(int i = 1 ; i <= n ; i++){
               if (n%i==0) {
                    count++;
               }
          }

          if (count == 2) {
               cout << "Prime";
          }
          else{
               cout << "Not Prime";
          }
}