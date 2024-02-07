#include<iostream>
using namespace std ;

int main(){

    // Maximum And Minimum Number From 1-D Array

    int n ;
    cout << "Enter A Size Of 1-D Array = ";
    cin >> n ;

     int a[n];

      cout << "Enter Array Elements : \n" ;
     for(int i = 0 ; i < n ; i++){
      cin >> a[i];
     }
    
     for(int i = 0; i < n ; i++){
        for(int j=i+1 ; j < n ; j++)
         { 
          if(a[i]<a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "Max = " << a[0] << " , Min = " << a[n-1] ;
}
