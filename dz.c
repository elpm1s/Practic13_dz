#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h> 

int znakP(char c) {
    // ��������, �������� �� ������ ������ ����������
    return (c == '.' || c == ',' || c == ';' || c == ':' || c == '?' || c == '!' || c == '-' || c == '(' || c == ')');
}

int main() {
    setlocale(LC_ALL, "RUS");

    char str[100]; 
    printf("������� ������:\n ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);


    // ��������� ������ �� ��� ��������
    int polovina = len / 2;
    int count = 0;

    // ������������ ����� ���������� �� ������ �������� ������
    for (int i = polovina; i < len; i++) {
        if (znakP(str[i])) {
            count++;
        }
    }

    printf("���������� ������ ���������� �� ������ �������� ������ �����: %d\n", count);

    return 0;
}
