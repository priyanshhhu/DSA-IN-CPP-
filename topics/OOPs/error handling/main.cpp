#include <iostream>
using namespace std;

class Customer{
    string name;
    int balance, account_number;

    public:

    Customer(string name,int balance,int account_number){
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // deposit
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            cout<<amount<<"Rs is credited successfully\n";
        }else{
            throw runtime_error("Amount should be greater than 0");
        }
    }

    // withdraw
    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<amount<<"Rs is debited successfully";
        }else if(amount<0){
            throw runtime_error("Amount should be greater than 0");
        }else{
            throw runtime_error("Balance is low");
        }
    }

};

int main(){
    Customer C1("Rohot",5000,10);
    try{
    C1.deposit(100);
    C1.withdraw(60000);
    return 0;
    }catch(const runtime_error &e){
        cout<<"Exception Occured: "<<e.what()<<endl;
    }catch(const bad_alloc &e){
        cout<<"Exception occured: "<<e.what()<<endl;
    }catch(...){ // default
        cout<<"Exception occured: "<<endl;
    }
}