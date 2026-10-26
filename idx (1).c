#include <stdio.h>

int main(void) {
    int index[] = {12, 45, 8, 61, 27};
    int i;

    printf("tracking.dat - Index lookup\n");
    for (i = 0; i < 5; i++)
        printf("Block %d -> Disk block %d\n", i, index[i]);
    printf("Indexed allocation completed\n");

    return 0;
}
