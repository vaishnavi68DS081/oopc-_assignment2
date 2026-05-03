//Armstrong Number
#include<iostream>
using namespace std;
class Armstrong
{
    private:
        int num;
    public:
        void input()
        {   cout<<"Enter a number: ";
            cin>>num;
        }
        void checkArmstrong()
        {            int originalNum=num;
            int sum=0;
            while(num>0)
            {
                int digit=num%10;
                sum+=digit*digit*digit; 
                num=num/10;
            }
            if(sum==originalNum)
            {
                cout<<originalNum<<" is an Armstrong number."<<endl;
            }
            else
            {                cout<<originalNum<<" is not an Armstrong number."<<endl;
            }
        }
};
int main()
{   Armstrong a;
    a.input();  
    a.checkArmstrong();
    return 0;
}