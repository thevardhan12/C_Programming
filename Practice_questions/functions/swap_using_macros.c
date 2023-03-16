#include<stdio.h>
#include<stdlib.h>
#define SWAP(t,a,b)
{
    t temp=a;
    a=b;
    b=temp;
}
int main()
{
    int opt;
    printf("1.int\n2.char\n3.float\n4.double\n5.string\n6.short\n");
    scanf(" %d",&opt);
    switch(opt)
    {
        case 1:
        {int a,b;
        printf("Read the elements\n");
        scanf("%d%d",&a,&b);
        SWAP(int,a,b);
        printf("After swapping a=%d b=%d\n",a,b);}
        break;
        case 2:
        {char x,y;
        printf("Read the elements\n");
        scanf("%c%c",&x,&y);
        SWAP(char,x,y);
        printf("After swapping a=%c b=%c\n",x,y);}
        break;
        case 3:
        {float c,d;
        printf("Read the elements\n");
        scanf("%f%f",&c,&d);
        SWAP(float,c,d);
        printf("After swapping a=%f b=%f\n",c,d);}
        break;
        case 4:
        {double e,f;
        printf("Read the elements\n");
        scanf("%lf%lf",&e,&f);
        SWAP(double,e,f);
        printf("After swapping a=%lf b=%lf\n",e,f);}
        break;
        case 5:
        {char*str1=calloc(10,sizeof(char));
        scanf("%[^\n]",str1);
        char*str2=calloc(10,sizeof(char));
        scanf("%[^\n]",str2);
        SWAP(char*,str1,str2);
        printf("str1=%s",str1);
        printf("str2=%s",str2);}
        break;
        case 6:
        { short g,h;
        printf("Read the elements\n");
        scanf("%hd%hd",&g,&h);
        SWAP(short,g,h);
        printf("After swapping a=%hd b=%hd\n",g,h);}
        break;
        printf("ERROR\n");



    }
}