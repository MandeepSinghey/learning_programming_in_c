#include <stdio.h>
int main()
{
    float temps[5] = {58.7, 62.8, 65.0, 63.3, 63.2};

    printf("The temperature on Tuesday will be %.1f\n", temps[1]);
    printf("The temperature on Friday will be % .1f\n", temps[4]);
    //using pointer notation
    printf("The temperature on Tuesday will be %.1f\n", *(temps + 1));
    printf("The temperature on Friday will be % .1f\n", *(temps + 4));

    char sample[] = "From whence cometh my help ?\n";
    int i = 0;

    while (sample[i])
    {
        putchar(*(sample + i));
        printf(" = Address of pointer character in array =  %p\n", (&sample + i));
        i++;
    }

    return 0;
}