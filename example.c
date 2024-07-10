#include <stdio.h>

#define _SS_IMPLEMENT
#include "ss.h"

int main(void) {

    StringStruct s1 = SS("  Software development is a lucrative business.  ");

    printf(SSFormat"\n", SSArg(s1));

    const char* cstr = "  Indeed it is.";

    StringStruct s2 = SSC(cstr);

    printf(SSFormat"\n", SSArg(s2));

    printf(SSFormat"\n", SSArg(ss_trim(s2)));

    StringStruct cuts1 = ss_cut_by_delim(&s1, 'l');

    printf("Cut part: "SSFormat"\n", SSArg(cuts1));
    printf("Rest: "SSFormat"\n", SSArg(s1));

    StringStruct cuts2 = ss_cut_n(&s2, 5);
    printf("Cut part: "SSFormat"\n", SSArg(cuts2));
    printf("Rest: "SSFormat"\n", SSArg(s2));

    printf(SSFormat"\n", SSArg(ss_append(cuts1, cuts2)));

    return 0;
}