
// Encapsulation is the OOP principle of bundling data (variables) and the methods (functions) that operate on that data into a single unit—typically a class—while also restricting direct access to some of the object’s internal details



#include<iostream>

using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string acc_num,double bal){
            accountNumber=acc_num;
            balance=bal;
        }

        //getter
        double get_balance(){
            return balance;
        }

        void deposit(double amount){
            if(amount>=0){
                balance+=amount;
                cout<<"Amount Deposited "<<amount<<endl;
            }else{
                cout<<"Invalid deposit"<<endl;
            }
        }

        void withDraw(double amount){
            if(amount>0 && amount<balance){
                balance-=amount;    
            }else{
                cout<<"Invalid withdraw"<<endl;
            }
        }
};


int main(){

    BankAccount myAccount("A023210",100.00);
    cout<<"Your Balance is "<<myAccount.get_balance()<<endl;
    myAccount.deposit(10.0);
    myAccount.withDraw(5);
    cout<<"Your Balance is "<<myAccount.get_balance()<<endl;


    return 0;
}
