#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int day, x;

    printf("С какого дня начинать нумерацию? (1 - Понедельник, 2 - Воскресенье): ");
    scanf("%d", &x);

    printf("Введите номер дня недели: ");
    scanf("%d", &day);

    if (x == 1) {
        switch (day) {
        case 1: printf("Понедельник\n");
            break;
        case 2: printf("Вторник\n");
            break;
        case 3: printf("Среда\n")
            ; break;
        case 4: printf("Четверг\n");
            break;
        case 5: printf("Пятница\n");
            break;
        case 6: printf("Суббота\n");
            break;
        case 7: printf("Воскресенье\n");
            break;
        default: printf("Неверный номер дня\n");
        }
    }
    if (x==2) {
        switch (day) {
        case 1: printf("Воскресенье\n");
            break;
        case 2: printf("Понедельник\n");
            break;
        case 3: printf("Вторник\n");
            break;
        case 4: printf("Среда\n");
            break;
        case 5: printf("Четверг\n");
            break;
        case 6: printf("Пятница\n");
            break;
        case 7: printf("Суббота\n");
            break;
        default: printf("Неверный номер дня\n");
        }
    }

    return 0;
}