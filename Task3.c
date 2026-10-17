#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int N;
int x;
int y;
int z;
int X;
int main()
{
    setlocale(LC_ALL, "");
    printf("Введите целое число\n");
    scanf("%d", &N);
    x = N / 100;
    y = (N % 100) / 10;
    z = N % 10;
    printf("Последняя цифра числа N = %d,Первая цифрв числа N = %d , Сумма чисел равна = %d\n", z, x, (x + y + z));
    X = z * 100 + y * 10 + x;
    printf("Запись числа наоборот будет равна %d\n", X);
}
