#include<iostream>
using namespace std;

int main(){
     
     // design basic calculator using switch case

     float a , b ;
     int opt;

     cout << "Enter Number-1 :- ";
     cin >> a ;
     cout << "Enter Number-2 :- ";
     cin >> b ;

     cout << "1.Addition" << endl ;
     cout << "2.Subtraction" << endl ;
     cout << "3.Multiplication" << endl ;
     cout << "4.Division" << endl ;
     cout << "Choose Operation :- ";
     cin >> opt ;

     switch(opt){
          case 1:
               cout << a << " + " << b << " = " << (a+b) << endl; 
          break;
          case 2:
               cout << a << " - " << b << " = " << (a-b) << endl; 
          break;
          case 3:
               cout << a << " * " << b << " = " << (a*b) << endl; 
          break;
          case 4:
               cout << a << " / " << b << " = " << (a/b) << endl; 
          break;
          default:
               cout << "Choos Valid Option !";
          break;
     }
     
}