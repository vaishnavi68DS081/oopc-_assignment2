//Count Digits
#include<iostream>
using namespace std;
class CountDigits
{
    private:      
        int num;
    public:
        void input()
        {            cout<<"Enter a number: ";
            cin>>num;
        }
        void count()
        {            int count=0;
            int temp=num;
            while(temp>0)   
            {
                temp=temp/10;
                count++;
            }
            cout<<"Number of digits in "<<num<<" is: "<<count<<endl;
        }
};
int main() 
{   CountDigits cd;
    cd.input();  
    cd.count();
    return 0;
}