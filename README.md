# norsk
A must-have header-only library for C/C++

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

```C
#include <nynorsk.h>
#include <stdio.h>

heiltal main()
{
    heiltal n = 100;
    gjer{
        viss ((n % 2) == 0) {
            printf("%d -> partal\n", n);
        } ellers {
            printf("%d -> oddetal\n", n);
        }
        n--;
    }
    medan(n > 0);
    returner 0;
}
```