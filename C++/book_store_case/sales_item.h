#include<iostream>
class sales_item
{
private:
std::string Book_name;
public:
int Book_price;
int avialable_copies;
    sales_item(std::string &x,int price,int avial);
    void display();
};
struct sales_data
{
    std::string bookno;
    unsigned int units_sold;
    double revenue;
};
