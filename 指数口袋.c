/*
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int L, sum = 0, count = 0;
    scanf_s("%d", &L);

    for (int num = 2; sum + num <= L; num++) {
        if (is_prime(num)) {
            printf("%d\n", num);
            sum += num;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
*/