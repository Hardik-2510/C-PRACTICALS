#include<iostream>
#include<cstring>
using namespace std;

int main(){
     char str1[50] = "HARDIK ";
     char str2[50] = "Hardik ";
     char str3[50] = " PATEL ";

     cout << "String - 1 : " << str1 << endl << "String - 2 : " << str2 << endl << "String - 3 : " << str3 << endl ;   

     cout << "String - 1 Before Copy : " << str1 << endl << "String - 1 Aftre Copy : "; 
     strcpy(str1 , str3);
     cout << str1 << endl;

     cout << "Concat String - 2 & String - 3 : ";
     strcat(str2 , str3);
     cout << str2 << endl;

     cout << "Comparison String - 1 & String - 2 :";
     int n = strcmp(str1 , str2);
     cout << n << endl;

     cout << "Length Of String - 1 : ";
     int x = strlen(str1);
     cout << x << endl;
}
