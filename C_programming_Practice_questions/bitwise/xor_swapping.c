int main()
{
    int a,b;
    printf("Enter the two variables\n");
    scanf("%d%d",&a,&b);
    printf("before swapping a=%d b=%d \n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swapping a=%d b=%d\n",a,b);


}