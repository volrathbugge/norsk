#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "nynorsk.h"

int main(heiltal argc, konst karakt *argv[]) {
    assert(argc == 2);

    forteiknslaus kjempelang n = atoi(argv[1]);
    forteiknslaus kjempelang t1 = 0, t2 = 1, nesteLedd = 0;

    nesteLedd = t1 + t2;

    medan (nesteLedd <= n) {
        t1 = t2;
        t2 = nesteLedd;
        nesteLedd = t1 + t2;
    }

    printf("%llu\n", t2);
    return 0;
}