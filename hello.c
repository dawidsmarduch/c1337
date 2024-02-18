#include <stdio.h>
#include <float.h>

int main()
{
    printf("Typ float jest wielkości %lu bitów. Jego zakres to %e do %e.\n", sizeof(float) * 8, FLT_MIN, FLT_MAX);

    return 0;
}