#include<iostream>
#include<iomanip>
using namespace std;
//simple ATM program to 1.withdraw 2. deposit and check balance
class bankacc
{
    private:
        float bal;
    public:
    bankacc(float b)
    {
        bal=b;
    }
    void withdraw()
    {
        float wd;
        cout<<"Enter withdraw amount:";
        cin>>wd;
        if(bal >= wd)
        {
            bal = bal - wd;
            cout<<"Withdraw successful."<<endl;
            cout<<"CURRENT BALANCE: Rs."<<fixed<<setprecision(2)<<bal<<endl;
        }
        else
        {
            cout<<"Insufficient balance."<<endl;
        }
    }
    void deposit()
    {
        float dep;
        cout<<"Enter amount for deposit: Rs.";
        cin>>dep;
        bal=bal+dep;
        cout<<"Deposit is successful.\nCURRENT BALANCE: Rs."<<fixed<<setprecision(2)<<bal<<endl;
    }
    void checkBalance()
    {
        cout<<"CURRENT BALANCE: Rs."<<fixed<<setprecision(2)<<bal<<endl;
    }
    
};
int main()
{
    float balance;
    cout<<"Enter your account balance: Rs.";
    cin>>balance;
    bankacc b(balance);
    int c;
    cout<<"Enter your choice: 1. withdraw \n2. deposit\n3. check balance\n";
    cin>>c;
    if(c==1)
    {
        b.withdraw();
    }
    else if(c==2)
       b.deposit();
    else if(c==3)
       b.checkBalance();
    else
        cout<<"Invalid choice. Enter appropriate choice."<<endl;
    return 0;
}