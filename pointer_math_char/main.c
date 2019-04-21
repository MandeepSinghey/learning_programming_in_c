#include <stdio.h>

int main()
{
    char letters[26];
    char *pointer_c;
    //initalize the pointer
    pointer_c = letters;
    // initialize the numbers
    for (int i = 0; i < 26; i++)
    {
        *pointer_c = i + 'A';
        *pointer_c++;
    }
    // display the numbers
    for (int i = 0; i < 26; i++)
    {
        printf("numbers[%d] =%c, address is %p \n", i + 1, letters[i], &letters[i]);
    }

    return 0;
}
