#include<iostream>
using namespace std;
#define SIZE 5
int main()
{
    int sum=0;
    double avg=0;
    int *arr=new int (40);
    for (int  i = 0; i < SIZE; i++)
    {
        cin>>arr[i];
    }
    for (int  i = 0; i < SIZE; i++)
    {

        sum+=arr[i];
        avg+=sum;
    }
    cout<<"the average is "<<avg/SIZE<<endl;
    
}