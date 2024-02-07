#include<iostream>
using namespace std ;

int main(){

     // sort an integer array

     int  n;
     cout << "Enter Array Size : ";
     cin >> n;
     int array[n];
     cout << "Enter Array Element : ";
     for(int i = 0 ; i < n ; i++){
          cin >> array[i] ;
     }

     cout << "Array Before Sorting : " ;
     for(int i = 0 ; i < n ; i++){
          cout << array[i] << " ";
     }

     for(int i = 0 ; i < n ; i++){
          for(int j = (i+1) ; j < n ; j++){
               int temp ;
               if (array[i] > array[j])
               {
                    temp = array[i] ;
                    array[i] = array[j];
                    array[j] = temp ;
               }
          }
     }
     cout << "\nArray After Sorting : " ;
     for(int i = 0 ; i < n ; i++){
          cout << array[i] << " ";
     }
}
