#include<iostream>
using namespace std;
int main()
{
    string str("hello"); // string str = "hello" , '=' overloaded
/*    cout << "length of string " << str.length() << endl;
    char arr[5];
    str.copy(arr, 5);
    for(int i = 0; i < 5; i++)
    {
	cout << arr[i] << endl;
    }
    for(int i = 0; i < str.length(); i++)
    {
	cout << str[i] << endl; // '[]' overloaded
	cout << str.at(i) << endl;
    }

    for(auto i = str.rbegin(); i != str.rend(); i++)
    {
	cout << *i << endl;
    }
    */
    string s = "helloworld";
    cout << str.compare(s) << endl;
    cout << s.substr(0,5) << endl;
    cout << s.substr(5,10) << endl;
}	











