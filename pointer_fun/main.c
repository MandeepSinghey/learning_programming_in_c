#include <stdio.h>

int main()
{
    char a, b, c;
    char *p;
    a = 'A';
    b = 'B';
    c = 'C';

    printf("Know Your grade\n");
    p = &a;
    printf("\nGrade is %c", *p);
    p = &b;
    printf("\nGrade is %c", *p);
    p = &c;
    printf("\nGrade is %c\n", *p);
    return 0;
}
