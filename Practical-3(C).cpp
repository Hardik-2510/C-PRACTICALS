#include<iostream>
using namespace std;

int main(){

     // grades according marks
     
     int s1 , s2 , s3 , s4 , s5  ;
     cout << "Enter Student's Marks (Out of 30) :- " ;
     cin >> s1 >> s2 >> s3 >> s4 >> s5 ;

     float avg = (s1 + s2 + s3 + s4 + s5)/5 ;

     if(s1 <= 30 && s2 <= 30 && s3 <= 30 && s4 <= 30 && s5 <= 30 ){
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
