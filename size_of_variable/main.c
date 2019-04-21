#include <stdio.h>

int main(void)
{
    int i = 5;
    char c = 'c';
    char car[] = "chrysler";
    double price = 21000.55;
    float tax = 100.55;
    struct robot
    {
        int alive;
        char name[9];
        int xpos;
        int ypos;
        int strngth;
    };
    struct robot raunak;
    printf("The size of int is %ld:\n", sizeof(i));
    printf("The size of char is %ld:\n", sizeof(c));
    printf("The size of double is %ld:\n", sizeof(price));
    printf("The size of float is %ld:\n", sizeof(tax));
    printf("The size of string is %ld:\n", sizeof(car));
    printf("The size of struct is %ld:\n", sizeof(struct robot));
    printf("#######################\n");
    printf("The Address of int is %p:\n", &i);
    printf("The Address of char is %p:\n", &c);
    printf("The Address of price is %p:\n", &price);
    printf("The Address of tax is %p:\n", &tax);
    printf("The Address of car is %p:\n", &car);
    printf("The Address of struct is %p:\n", &raunak);

    return 0;
}
