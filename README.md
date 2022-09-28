# norsk
A most-have header-only library for c/c++

Example:
```C
#include <norsk.h>
#include <stdio.h>

helltall main()
{
    heltall n = 100;
    gjør{
        hvis ((n % 2) == 0) {
            pritnf("%d -> partall\n", n)
        } ellers {
            pritnf("%d -> oddetall\n", n)
        }
        n--;
    }
    mens(n > 0)
    retuner 0;
}
```