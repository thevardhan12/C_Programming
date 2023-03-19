#include<stdio.h>
#include<stdlib.h>
struct student_record
{
    char name[50];
    int roll;
    float avg;
    char grade;
   
};
char opt;
int main()
{
    int sub,students;
    printf("Enter the number of the studeents\n");
    printf("read the number of the subjects\n");
    scanf("%d%d",&students,&sub);
    struct student_record s[students];
    char subjects[sub][10];
    int marks[sub];
    printf("Enter the subjects\n");
    for (int i = 0; i < sub; i++)
    {
        scanf("%s",subjects[i]);
        
    }
    printf("Enter the students details\n");
    for(int i=0;i<students;i++)
    {
        printf("Enter Roll No:\n");
        scanf("%d",&s[i].roll);
        printf("Enter the name:\n");
        scanf("%s",s[i].name);
        int sum=0;
        for(int i=0;i<sub;i++)
        {
             printf("Enter %s marks\n",subjects[i]);
             scanf("%d",&marks[i]);
             sum+=marks[i];

        }
        s[i].avg=(float)sum/sub;
        if(s[i].avg>90)
        {
            s[i].grade='A';
        }
        else
        {
            s[i].grade="B";
        }


    }

    printf("1.All students details.\n2.Particular student details.\n");
    char choice;
    scanf(" %c",&choice);
    switch(choice)
    {
        case '1':
            for(int i=0;i<students;i++)
            {
            printf(" ROll_no Name %s %s avg grade\n",subjects[i],subjects[i]);
            printf("%2d %s %2d %2d %f %c",s[i].roll,s[i].name,marks[i],marks[i],s[i].avg,s[i].grade);
            }
        break;
        case '2':
        
        printf("1. Name.\n2. Roll no.\n");
        printf("Enter you choice : \n");
        /*scanf(" %c",&opt);
        switch(opt)
        {
            case '1':
            char user[20];
            printf("Enter the name of the student : \n");
            scanf("%s",user);
            for(int i=0;i<students;i++)
            {
                if(user==s[i].name)
                {
                    printf("Roll No.%d\n  Name %s\n          Maths%d\n         Science%d\n       Average%f\n       Grade %c\n",s[i].roll,s[i].name,marks[0],marks[1],s[i].avg,s[i].grade);

                }
            }
            

        }*/

        
    }

    

    
    





}
