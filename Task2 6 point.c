#include <stdio.h>

int main(void)
{
    int a = 11, b = 3;
    printf("float:  %f\n", (float)a / b);
    printf("double: %f\n", (double)a / b);
    // Проверяем, как влияют скобки
    printf("Before division: %f\n", (double)a / b);
    printf("After division:  %f\n", (double)(a / b));
    return 0;
}