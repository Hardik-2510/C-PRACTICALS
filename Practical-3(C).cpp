#include<iostream>
using namespace std;

int main(){

     // grades according marks
     
     int s1 , s2 , s3 , s4 , s5  ;
     cout << "Enter Student's Marks (Out of 30) :- " ;
     cin >> s1 >> s2 >> s3 >> s4 >> s5 ;

     float avg = (s1 + s2 + s3 + s4 + s5)/5 ;

     if(s1 > 12 || s2 > 12 || s3 > 12 || s4 > 12 || s5 > 12 ){
          if (avg >= 26)
          {
               cout << "Congratulations ! You Have Passed With A Grades !" ;
          }
          else if(avg >= 21){
               cout << "Congratulations ! You Have Passed With B Grades !" ;
          }
          else if(avg >= 13){
               cout << "Congratulations ! You Have Passed With C Grades !" ;
          }
          else if(avg >= 12){
               cout << "Congratulations ! You Have Passed With D Grades !" ;
          }
     }
     else if(avg < 12){
          cout << "Alert ! You Are Failed And You Have To Give Makeup Test To Clear Subject !";
     }
     else{
          cout << "Invalid Marks !!" ;
     }  
}
