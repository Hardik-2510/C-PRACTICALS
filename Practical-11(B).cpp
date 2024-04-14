#include<iostream>
#include<string>
using namespace std;

class Bank{
     public:
     string name , account_type ;
     int account_number;
     int balance;
     void initialize();
     void deposit();
     void check();
     void display();
};

void Bank::initialize(){
     system("cls");
     cout << "\t\t** Tarsadi Bank of Bardoli **\n\n" ;
     cout << "Enter A Account Holder's Name : ";
     getline(cin , name);
     cout << ("Enter a Account Type : ");
     getline(cin , account_type);
     cout << "Enter account number : ";
     cin  >> account_number;
     cout << "Enter a Balance To Deposit : ";
     cin  >> balance ;
}

void Bank::deposit(){
     system("cls");
     cout << "\t\t** Tarsadi Bank of Bardoli **\n\n" ;
     int bal ;
     cout << "\nEnter The Amount to Deposit : ";
     cin  >> bal ;
     balance += bal ;
     cout << "\nAmount Deposited Successfully \n Your New Balance  : " << balance ;
}

void Bank::check(){
     system("cls");
     cout << "\t\t** Tarsadi Bank of Bardoli **\n\n" ;
     int wamt ;
     cout << "\nYour Balance : " << balance << "\nEnter Amount To Withdraw : ";
     cin  >> wamt ; 

     if(wamt > balance){
          system("cls");
          cout << "\nUnsufficient Balance !!" ;
     }
     else{
          balance -= wamt ;
          system("cls");
          cout << "\n Remaining Balance : " << balance ;
     }
}

void Bank::display(){
     system("cls");
     cout << "\t\t** Tarsadi Bank of Bardoli **\n\n" ;
     cout << "\nName : " << name ;
     cout << "\nBalance : " << balance ;
}

int main(){
     int i ;
     Bank bk;
     bk.initialize();
     
     do {
        cout << "\n1. Your Information\n2. Deposit\n3. Withdraw\n4. Exit\nEnter Your Choice : ";
        cin >> i;

        switch (i) {
        case 1:
            bk.display();
            break;

        case 2:
            bk.deposit();
            break;

        case 3:
            bk.check();
            break;

        case 4:
            cout << "Exiting program...";
            break;

        default:
            cout << "Invalid option! Please try again.";
            break;
        }

    } while (i != 4);


     return 0;
}
