#include "emertxe.h"

// Please compile along with emertxe.cpp

int main()
{
   // EmertxeMember *m1 = new EmertxeMember(100, "Ringu", "Mangalore");
    Mentor *m2 = new Mentor(108, "Tingu", "Mysore", "Linux Systems", "Senior");
    Candidate *c1 = new Candidate(120, "Pingu", "Bangalore", "ECEP", 2019);

//    cout << "m1:-->\n"; m1->display_profile();
    cout << "m2:-->\n"; m2->display_profile();
    cout << "c1:-->\n"; c1->display_profile();

    return 0;
}
