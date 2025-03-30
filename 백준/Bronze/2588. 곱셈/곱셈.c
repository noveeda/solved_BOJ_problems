#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int div;

    div = b % 10;
    printf("%d\n", a * div);

    div = ((b % 100) - (b % 10)) / 10;
    printf("%d\n", a * div);

    div = b / 100;
    printf("%d\n", a * div);
    printf("%d", a * b);


    return 0;
}