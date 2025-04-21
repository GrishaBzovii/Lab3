#include <stdio.h>

int main() {
    int episode;

    // Введення номера серії
    printf("Введіть номер серії (1–12): ");
    scanf("%d", &episode);

    // Використання конструкції switch для виводу інформації
    switch (episode) {
        case 1:
            printf("Серія 1: The Stolen Eagle — 28 серпня 2005\n");
            break;
        case 2:
            printf("Серія 2: How Titus Pullo Brought Down the Republic — 4 вересня 2005\n");
            break;
        case 3:
            printf("Серія 3: An Owl in a Thornbush — 11 вересня 2005\n");
            break;
        case 4:
            printf("Серія 4: Stealing from Saturn — 18 вересня 2005\n");
            break;
        case 5:
            printf("Серія 5: The Ram Has Touched the Wall — 25 вересня 2005\n");
            break;
        case 6:
            printf("Серія 6: Egeria — 2 жовтня 2005\n");
            break;
        case 7:
            printf("Серія 7: Pharsalus — 9 жовтня 2005\n");
            break;
        case 8:
            printf("Серія 8: Caesarion — 16 жовтня 2005\n");
            break;
        case 9:
            printf("Серія 9: Utica — 30 жовтня 2005\n");
            break;
        case 10:
            printf("Серія 10: Triumph — 6 листопада 2005\n");
            break;
        case 11:
            printf("Серія 11: The Spoils — 13 листопада 2005\n");
            break;
        case 12:
            printf("Серія 12: Kalends of February — 20 листопада 2005\n");
            break;
        default:
            printf("Помилка: серію з таким номером не знайдено!\n");
            break;
    }

    return 0;
}
