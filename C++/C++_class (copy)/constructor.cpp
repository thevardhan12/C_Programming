#include <iostream>
using namespace std;
class Account
{
    int account_no;
    string name;
    float balance;
    public:
    Account(int acc_no, string n, float bal);
    void print_details(void);
};
Account::Account(int acc_no, string n = "suresh", float bal = 1000.6)
{
    account_no = acc_no;
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
    Account ac1(1234, 100.5);
    Account ac2(2344);
    ac1.print_details();
    ac2.print_details();
}


