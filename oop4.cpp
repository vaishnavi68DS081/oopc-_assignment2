//Number Pyramid
#include<iostream>
using namespace std;
class Pyramid
{
    private:
        int n;
    public:
        void input()
        {
            cout<<"Enter the number of rows for the pyramid: ";
            cin>>n;
        }
        void display()
        {            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=i; j++)
                {
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
};
int main()
{   Pyramid p;
    p.input();      
    p.display();
    return 0;
}