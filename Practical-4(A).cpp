#include<iostream>
using namespace std;

int main(){
     int a , b , c ;
     cout << "Enter Number-1 :- ";
     cin >> a;
     cout << "Enter Number-2 :- ";
     cin >> b; 
     cout << "Enter Number-3 :- ";
     cin >> c;

     if(a > b && a > c){
          cout << a << " is Largest Number .";
     }
     else if(b > a && b > c){
          cout << b << " is Largest Number .";
     }
     else{
          cout << c << " is Largest Number .";
     }
}
