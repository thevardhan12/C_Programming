#include<iostream>
#include<string>
#include<algorithm>
std::string word_reverse(std::string s)
{
    /*int i;
    int len=s.length();
    char temp;
    for (i = 0;i=len/2 ; i++)
    {
        temp=s[i];
        s[i]=s[len-i-1];
        s[i-i-1]=temp;
        
    }
    */
   std::reverse(s.begin(),s.end());
    s.insert(s.end(), ' ');
   int len=s.length();
   int j=0;
   for(int i=0;i<len;i++)
   {
    if(s[i]==' ')
    {
        std::reverse(s.begin()+j,s.begin()+i);
    }
    j=i+1;
   }
   s.pop_back();
   return s;


    
    

}
int main()
{
    std::string s;
    std::getline(std::cin,s);
    std::cout<<"before reverse \n"<<s<<std::endl;
    std::string rev=word_reverse(s);
    std::cout<<"After reverse \n"<<rev<<std::endl;

}