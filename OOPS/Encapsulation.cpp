#include<iostream>
using namespace std;

class Account{
  private:
    int balance;

    public:
     Account(int balance){
        this->balance=balance;
      }
    
    int getBalance(){
      cout<< balance;
    }

    void windraw(int windraw){
        if(windraw>balance){
            cout<<"Isufficient balance in your account";
        }
        else {
            // printf("Ammount %d deducted from your account\n ",windraw);
            this->balance = balance-windraw;
        }
    }

    void deposit(int deposit){
        //   printf("Ammount %d  creadited in your account\n",deposit);
          this->balance = balance + deposit;
        //   printf("Now your bank balanced is %d\n",balance);

    }



};



int main(){

 Account ac(2000);
// cout<<ac.balance();
cout<<ac.getBalance()<<endl;
ac.windraw(1000);
cout<<ac.getBalance();
ac.deposit(5000);
cout<<ac.getBalance();




}