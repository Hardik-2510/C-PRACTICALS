#include<iostream>
using namespace std;

int main(){

     // search an element

     int  n;
     cout << "Enter Array Size : ";
     cin >> n;
     int array[n];
     cout << "Enter Array Element : ";
     for(int i = 0 ; i < n ; i++){
          cin >> array[i] ;
     }
     int x ; 
     cout << "Enter A Number To Find : ";
     cin >> x;

     for(int i = 0 ; i < n ; i++){
          if (array[i] == x)
          {
               cout << x << " Found At " << (i+1) << " Position. " << endl ;
          }
     }
}
