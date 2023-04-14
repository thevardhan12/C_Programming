#include "emertxe.h"

Candidate::Candidate(int id, string n, string a, string course, int year)
	  :EmertxeMember(id, n, a)
{
	this->course = course;
	this->year = year;
}

Mentor::Mentor(int id, string n, string a, string sub_taught, string rank)
       :EmertxeMember(id, n, a)
{
	this->sub_taught = sub_taught;
	this->rank = rank;
}

/*void EmertxeMember::display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
}
*/
void Mentor::display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Subject Taught: " << sub_taught << endl;
    cout << "Rank: " << rank << endl;
}

void Candidate::display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Course:" << course << endl;
    cout << "Year: " << year << endl;
}
