#include <stdio.h>

int main(void) {
    int start = 30, length = 5, i;

    printf("ocean_data.dat Start=%d Length=%d\n", start, length);
    for (i = 0; i < length; i++)
        printf("Block %d -> Disk block %d\n", i, start + i);
    printf("Sequential allocation completed\n");

    return 0;
}
