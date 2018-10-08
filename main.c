#include <stdio.h>

int has_correct_digits(int n) {
        int tmp;

        do {
                tmp = n % 10;
                if (tmp < 1 || tmp > 3) return 0;
                n /= 10;
        } while (n);

        return 1;
}

int main() {
        int amount = 0;

        for (int i = 10000008; i < 100000000; i += 18) {
                if (has_correct_digits(i)) amount++;
        }

        printf("%d", amount);
}
