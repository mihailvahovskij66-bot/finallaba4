#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int a = 11, b = 3;
    int x = a / b;
    float y = a / b;
    double z = a / b;
    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("z = %f\n", z);
    return 0;

}