#include<iostream>
using namespace std;
#define size 10
int replcae(int *arr);
int main()
{
    int *arr=new int (40);
    cout<<"enter the elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    for (int  i = 0; i < replcae(arr); i++)
    {
        cout<<arr[i];
    }
    


}
int replcae(int *arr)
{
    for (int  i = 0; i < size; i++)
    {
        for (int  j = i; j <size ; j++)
        {
            if(arr[i]==arr[j]&&i!=j)
            {
                arr[j]=arr[j+1];
            }
        }
        
    }
    return (sizeof(arr)/sizeof(int));
}