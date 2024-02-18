#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Typ int jest wielkości %lu bitów. Jego zakres to %d do %d.\n", sizeof(int) * 8, INT_MIN, INT_MAX);

    return 0;
}