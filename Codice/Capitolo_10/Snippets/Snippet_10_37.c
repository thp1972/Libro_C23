#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("%d\n", __has_c_attribute(deprecated));   // 202311
    printf("%d\n", __has_c_attribute(fallthrough));  // 202311
    printf("%d\n", __has_c_attribute(maybe_unused)); // 202311
    printf("%d\n", __has_c_attribute(nodiscard));    // 202311
    printf("%d\n", __has_c_attribute(noreturn));     // 202311
    printf("%d\n", __has_c_attribute(unsequenced));  // 202311
    printf("%d\n", __has_c_attribute(reproducible)); // 202311
    printf("%d\n", __has_c_attribute(gnu::nonnull)); // 1

    return EXIT_SUCCESS;
}
