#include<iostream>
using namespace std ;

int main(){

     // addition of 3*3 matrices

     int m1[3][3];
     int m2[3][3];
     int m3[3][3];

     cout << "Enter Matrix - 1 : " << endl;
     for(int i = 0 ; i < 3 ; i++){
          for(int j = 0 ; j < 3 ; j++){
               cin >> m1[i][j];
          }
     }

     cout << "Enter Matrix - 2 : " << endl;
     for(int i = 0 ; i < 3 ; i++){
          for(int j = 0 ; j < 3 ; j++){
               cin >> m2[i][j];
          }
     }


     cout << "Addtion Of Two Matrices" << endl ;
     for(int i = 0 ; i < 3 ; i++){
          for(int j = 0 ; j < 3 ; j++){
               cout << m1[i][j] + m2[i][j] << " " ;
          }
          cout << " " << endl ;
     }

     }
