#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;
    printf("c = %c\n", c);
    printf("i = %d\n", i);
    printf("f = %f\n", f);
    printf("d = %g\n", d);
    printf("Введите символ: ");
    scanf(" %c", &c);
    printf("Введите целое число: ");
    scanf("%d", &i);
    printf("Введите вещественное число: ");
    scanf("%f", &f);
    printf("Введите число double: ");
    scanf("%lf", &d);
    // 1а. Целая и дробная части числа f
    int whole = (int)f;
    float fraction = f - whole;
    printf("Целая часть: %d\n", whole);
    printf("Дробная часть: %f\n", fraction);
    // 1б. Код символа
    printf("Десятичный код: %u\n", (unsigned int)(unsigned char)c);
    printf("Шестнадцатеричный код: %X\n", (unsigned int)(unsigned char)c);
    // 1в. Значение 1/i
    if (i != 0) {
        printf("1/i = %f\n", 1.0 / i);
    }
    else {
        printf("На ноль делить нельзя\n");
    }
    return 0;
}