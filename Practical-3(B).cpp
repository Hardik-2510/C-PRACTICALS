#include<iostream>
using namespace std;

int main(){
     int n ;
     cout << "Enter a number :- " ;
     cin >> n ;

     if (n > 0 )
     {
          cout << n << " is Positive Number ." ;
     }
     else if(n < 0){
          cout << n << " is Negative Number ." ;
     }
     else{
          cout << "It's Zero , Nutral Number" ;
     }
     
}
