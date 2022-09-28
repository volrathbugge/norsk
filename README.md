# norsk
A most-have header-only library for c/c++

Example:
```C
#include <bokmaal.h>
#include <stdio.h>

heltall main()
{
    heltall n = 100;
    foreta{
        hvis ((n % 2) == 0) {
            printf("%d -> partall\n", n);
        } ellers {
            printf("%d -> oddetall\n", n);
        }
        n--;
    }
    mens(n > 0);
    retuner 0;
}
```