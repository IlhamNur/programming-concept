#include <stdio.h>

int main() {
    int from, to;
    int loop;

    from = 0;
    to = 5;
    loop = from;

    printf("Number\tSquare\tCube\n");
    while (loop <= to) {
        printf("%d\t%d\t%d\n", loop, (loop * loop), (loop * loop * loop));
        loop++;
    }

    return 0;
}
