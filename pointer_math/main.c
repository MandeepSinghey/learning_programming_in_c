#include <stdio.h>

int main()
{
    int numbers[10];
    int *pointer_n;
    //initalize the pointer
    pointer_n = numbers;
    // initialize the numbers
    for (int i = 0; i < 10; i++)
    {
        *pointer_n = i + 1;
        *pointer_n++;
    }
    // display the numbers
    for (int i = 0; i < 10; i++)
    {
        printf("numbers[%d] =%d, address is %p \n", i + 1, numbers[i], &numbers[i]);
    }

    return 0;
}
