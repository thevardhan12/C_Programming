#include<iostream>
#include"sales_item.h"
//using namespace std;
sales_item::sales_item(std::string &x,int price,int avail)
{
    Book_name=x;
    Book_price=price;
    avialable_copies=avail;
}
void sales_item::display(void)
{
    std::cout<<"Book name is "<<Book_name<<std::endl;
    std::cout<<"Book price is "<<Book_price<<std::endl;
    std::cout<<"Available copies are "<<avialable_copies<<std::endl;
}
int main()
{
    std::string b_name;
    std::getline(std::cin,b_name);
    sales_item book(b_name,500,3);
    book.display();
    return 0;
}