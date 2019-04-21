#include <stdio.h>
int main()
{
    char *sample = "From whence cometh my help ?\n";
    char *print_string = sample;

    while (putchar(*sample++))
        ;
    sample = print_string;
    puts(sample);
    return (0);
}