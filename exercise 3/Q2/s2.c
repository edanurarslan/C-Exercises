#include <stdio.h>

void count_digit(int number);

int main() {
    int number;
    scanf("%d", &number);
    count_digit(number);
    return 0;
}

void count_digit(int number) {
    int i, digit, count[10] = {0};
    while (number != 0) {
        digit = number % 10;
        count[digit]++;
        number /= 10;
    }
    for (i = 0; i < 10; i++) {
        printf("%d\t%d\t", i, count[i]);
        while (count[i] > 0) {
            printf("*");
            count[i]--;
        }
        printf("\n");
    }
}
