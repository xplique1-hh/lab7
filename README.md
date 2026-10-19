# Домашнее задание к работе 2

## Условие задачи
Написать программу, которая в зависимости от порядкового номера дня недели выводит на экран его название. Предусмотреть возможность нумерации как с понедельника, так и с воскресенья.

## 1. Алгоритм

### Алгоритм
1. **Начало**
2. Ввести `x` — с какого дня начинать нумерацию (1 — Понедельник, 2 — Воскресенье).
3. Ввести `day` — номер дня недели.
4. Если `x == 1`:
   - Вывести название дня в соответствии с нумерацией с понедельника.
5. Если `x == 2`:
   - Вывести название дня в соответствии с нумерацией с воскресенья.
6. Если введен неверный номер дня — вывести сообщение об ошибке.
7. **Конец**
8. 
### Блок-схема

<img width="1632" height="912" alt="image" src="https://github.com/user-attachments/assets/99aede5d-4898-41d2-9730-899ccde3aa57" />

## 2. Реализация программы

```c
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
            case 3: printf("Среда\n");
            break;
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
    if (x == 2) {
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
```

## 3. Результаты работы программы


<img width="585" height="62" alt="image" src="https://github.com/user-attachments/assets/b37c17f5-644b-4eaf-b53f-ca4734e71042" />

## 4. Информация о разработчике

**Сергеенков Дмитрий**
**Группа: бИЦТ-261**



