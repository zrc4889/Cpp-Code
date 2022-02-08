#include <stdio.h>

int main() {
    int a, b, c;
    int gap_1, gap_2;
    scanf("%d %d %d", &a, &b, &c);
    gap_1 = b - a - 1;
    gap_2 = c - b - 1;
    int t = gap_1 - gap_2;
    if (gap_1 == 0 && gap_2 == 0)
        printf("0\n0\n");

    else if (gap_1 == 1 || gap_2 == 1) {
        printf("1\n");
        if (t > 0)
            printf("%d", gap_1);
        else
            printf("%d", gap_1);
    }

    else {
        printf("2\n");
        if (t > 0)
            printf("%d", gap_1);
        else
            printf("%d", gap_2);
    }
    return 0;
}
