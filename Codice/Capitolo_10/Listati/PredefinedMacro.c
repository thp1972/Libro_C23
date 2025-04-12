#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // alcune macro obbligatorie
    printf("__DATE__ = %s\n", __DATE__);
    printf("__STDC_HOSTED__ = %d\n", __STDC_HOSTED__);
    printf("__TIME__ = %s\n", __TIME__);

    // macro di ambiente
#if defined (__STDC_ISO_10646__) && (__STDC_ISO_10646__ > 0L)
    printf("__STDC_ISO_10646__ = %ld\n", __STDC_ISO_10646__);
#else
    printf("__STDC_ISO_10646__ = %s\n", "not defined!");
#endif

    // macro per caratteristiche opzionali
#if defined (__STDC_NO_ATOMICS__) && (__STDC_NO_ATOMICS__ == 1)
    printf("__STDC_NO_ATOMICS__ = %d\n", __STDC_NO_ATOMICS__);
#else
    printf("__STDC_NO_ATOMICS__ = %s\n", "not defined!");
#endif

    return (EXIT_SUCCESS);
}