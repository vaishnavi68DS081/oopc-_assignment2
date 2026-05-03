//Find Maximum Element in Array
#include<iostream>
using namespace std;
class Array
{
    private:
        int arr[100];
        int size;
    public:
        void input()
        {
            cout<<"Enter the size of the array: ";
            cin>>size;
            cout<<"Enter "<<size<<" elements: ";
            for(int i=0; i<size; i++)
            {
                cin>>arr[i];
            }
        }
        void findMax()
        {            int max=arr[0];
            for(int i=1; i<size; i++)       
            {
                if(arr[i]>max)
                {
                    max=arr[i];
                }
            }
            cout<<"Maximum element in the array is: "<<max<<endl;
        }
};
int main()
{    Array a;
    a.input();
    a.findMax();
    return 0;
}   