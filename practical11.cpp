#include<iostream>
using namespace std;

int main(){

     // a program to find sum of all integers greater than 100 & less than 200 and are divisible by 5.

     int sum = 0;
     for (int i = 101; i < 200; i++)
     {
          if (i % 5 == 0){
               sum = sum + i ;
          }
     }
     cout << sum << endl;
     
}