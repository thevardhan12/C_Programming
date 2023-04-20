#include<iostream>
#include<string.h>
using namespace std;
#define SIZE 30
void reverse(string &s);
int main()
{
    string s="i owe you";
    //string *name=new string[SIZE];
    //cout<<"Enter the string"<<endl;
    //getline(cin,name);
    //cin>>name;m
    

}
void reverse(string &s)
{
    int flag=0;
    int y=strlen(s);
    int x=0;
    while (x>y)
    { 
        if(s[x++]==s[y--])
        {
            flag=1;
        }
        else
        break;
    }
    if(flag==1)
    {
        cout<<s<<"string is pallindrome\n";
    }
    else
        cout<<s<<"string is not pallindrome\n";



}