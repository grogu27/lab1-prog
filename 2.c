#include <stdio.h>

typedef struct
{
    char str[3];
    int num;
} NumberRept;

void format(NumberRept* number)
{
    sprintf(number->str, "%3d", number->num);
}

int main()
{
    NumberRept number = { .num = 1025};

    format(&number);

    printf("str: %s\n", number.str);
    printf("num: %d\n", number.num);

    return 0;
}
