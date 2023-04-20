#include <stdio.h>

union little_big_union
{
    int x=0x1eee;
    char y:8;
};
int main()
{
    union little_big_union u;
    printf("%x\n",u.y);
    //std::cout<<u.y<<std::endl;

}
