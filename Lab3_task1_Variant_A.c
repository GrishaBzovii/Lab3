#include <stdio.h>
#include <math.h>

int main() {
    int s, t;
    // Введення значень s і t
    printf("Введіть значення s: ");
    scanf("%d", &s);
    printf("Введіть значення t: ");
    scanf("%d", &t);
    // Обчислення w 
    if (s == -7)
        printf("Результат %.2f", 2.0 * s * t);
    if (s == 7)
        printf("результат %.2f", sqrt((double)s / t + 2 * s * t));
    if (s > 7)
        printf("Результат %.2f", s * s + 2.0 * t);
    if (s != -7 && s != 7 && s <= 7) // Якщо значення s не підходить під умови вище то результат відсутній
        printf("Без результату");

    return 0;
}
