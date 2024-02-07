#include<iostream>
#include<cstdio>
using namespace std;

int main(){

     // Accept String Using Gets And GetChar Function

     char str[100];
     char c;

     cout << "Enter A String :";
     gets(str);

     cout << str << endl << "This is Line is Taken By gets Function." << endl ;

     
     cout << "Enter A Char :";
     c = getchar();

     cout << c << endl << "This is Line is Taken By getchar Function." << endl ;
}
