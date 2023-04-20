#include<iostream>
using namespace std;
#define SUB 5
typedef struct store_stud_data
{
    string name;
    string Roll_Number;
    char*subjects[SUB];                                                    //Subjects Enrolled (Array of Strings)
    int marks[SUB];                                     //Marks in each subject (Array of Int)
    float CGPA;
}student;

int main()
{
    student s1;
    s1.CGPA=9.25;
    s1.name="Harsha";
    s1.Roll_Number="bee032";
    cout<<"Enter the subject name & marks scored in that subject\n";
    for (int  i = 0; i < SUB; i++)
    {
        cin>>s1.subjects[i];
        cin>>s1.marks[i];
    }
    cout<<"the subject name & marks scored in that subject\n";
    for (int  i = 0; i < SUB; i++)
    {
        cout<<s1.subjects[i];
        cout<<s1.marks[i];
    }
    
    
}