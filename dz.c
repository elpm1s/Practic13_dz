#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h> 

int znakP(char c) {
    // Проверка, является ли символ знаком препинания
    return (c == '.' || c == ',' || c == ';' || c == ':' || c == '?' || c == '!' || c == '-' || c == '(' || c == ')');
}

int main() {
    setlocale(LC_ALL, "RUS");

    char str[100]; 
    printf("Введите строку:\n ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);


    // Разделяем строку на две половины
    int polovina = len / 2;
    int count = 0;

    // Подсчитываем знаки препинания во второй половине строки
    for (int i = polovina; i < len; i++) {
        if (znakP(str[i])) {
            count++;
        }
    }

    printf("Количество знаков препинания во второй половине строки равно: %d\n", count);

    return 0;
}
