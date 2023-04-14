#include "emertxe.h"


int main()
{
    EmertxeMember *m2 = new Candidate(300, "Pingu", "Bangalore", "ECEP", 2019);

    cout << "m2:-->\n"; m2->display_profile();

    return 0;
}
