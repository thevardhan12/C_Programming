#include<iostream>
using namespace std;
int max(int *arr);
int mini(int *arr);

int main()
{
    int *arr1=new int(24);
    for (int i = 0; i < 5; i++)
    {
        cin>>arr1[i];
    }
    cout<<"the max number is"<<  max(arr1)<<endl;
    cout<<"The minimum number is"<<    mini(arr1)<<endl;
    
}
int max(int *arr)
{
    int max=arr[0];
    for (int  i = 0; i < 5; i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int mini(int *arr)
{
    int mini=arr[0];
    for (int  i = 0; i < 5; i++)
    {
        if(arr[i]<mini)
        mini=arr[i];
    }
    return mini;
}