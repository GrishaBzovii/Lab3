#include <stdio.h>

int main() {
    int num;
    int maxDigit, pos;

    printf("Введіть чотиризначне число: ");
    scanf("%d", &num);
    
    if (num < 1000 || num > 9999) {
        printf("Це не чотиризначне число!\n");
        return 1;
    }
    // Розбиваємо число на окремі цифри
    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10;
    int d4 = num % 10;

    maxDigit = d1;
    pos = 1;

    if (d2 > maxDigit) { maxDigit = d2; pos = 2; }
    if (d3 > maxDigit) { maxDigit = d3; pos = 3; }
    if (d4 > maxDigit) { maxDigit = d4; pos = 4; }

    printf("Найбільша цифра: %d на позиції %d\n", maxDigit, pos);

    return 0;
}
