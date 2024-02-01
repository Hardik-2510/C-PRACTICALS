#include<iostream>
using namespace std;

int main(){

     // grades according marks
     
     int n ;
     cout << "Enter Student's Marks (Out of 30) :- " ;
     cin >> n ;

     if (n >= 12 && n <= 30)
     {
          char grade;
          if (n >= 26){
               grade = 'A';
          }
          else if(n >=  21){
               grade = 'B';
          }
          else if(n >=  13){
               grade = 'C';
          }
          else{
               grade = 'D';
          }
          cout << "Congratultion ! You Passed With " << grade << " Grades !" ;
     }
     else if(n < 12){
          cout << "Alert ! You Are Failed And You Have To Give Makeup Test To Clear Subject !";
     }
     else{
          cout << "Invalid Marks !!" ;
     }  
}
