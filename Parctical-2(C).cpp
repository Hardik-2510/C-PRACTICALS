#include<iostream>
using namespace std;

int main(){

     // swap two number using third variable

     int a , b , temp ;
     cout << "Enter Number-1 :- ";
     cin >> a ;
     cout << "Enter Number-2 :- ";
     cin >> b ;

     temp = a ;
     a = b ; 
     b = temp ;

     cout << "Number-1 = " << a << " , Number-2 = " << b ;

}
