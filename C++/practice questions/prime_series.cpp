//C/C++ Program to find Prime Numbers between given range
#include<iostream>
#include<math.h>
using namespace std;
void prime(int ,int);
int main()
{
    int first,last;
    cout<<"enter the initial and final range\n";
    cin>>first>>last;
    prime(first,last);

}
void prime(int f,int l)
{
    for (int  i = f; i < l; i++)
    {
        if(f==1)
        continue;
        for (int  j = 2; j <= sqrt(i); j++)
        {
            if((i%j)!=0)
            {
                cout<<i<<endl;
            }
            
        }
        
    }
    
}