#include <iostream>
using namespace std;
class Account
{
    int account_no;
    string name;
    float balance;
    public:
    Account(int acc, string n, float bal);
    void print_details(void);
};
Account::Account(int acc, string n, float bal = 1110.5)
{
    account_no = acc;
    name = n;
    balance = bal;
}
void Account::print_details(void)
{
    cout << "account_no = " << account_no << endl;
    cout << "account name = " << name << endl;
    cout << "account balance = " << balance << endl;
}
int main()
{
    Account ac1(1000, "ramesh", 500);
    ac1.print_details();
}


