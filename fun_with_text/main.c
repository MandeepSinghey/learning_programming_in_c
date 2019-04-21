#include <stdio.h>
#include <ctype.h>

int main()
{
    char phrase[] = "When in the Course of human events, \
                    it becomes necessary for one people to dissolve \
                    the political bands which have connected them \
                    with another, and to assume among the powers of \
                    the earth, the separate and equal station to \
                    which the Laws of Nature and of Nature’s God \
                    entitle them, a decent respect to the opinions of \
                    mankind requires that they should declare the \
                    causes which impel them to the separation.";
    int i = 0;
    int alpha = 0;     //count lowercase and uppercase alpahbet letters
    int blank = 0;     //clount blank spaces in text
    int punct = 0;     //count punctuations in text
    int lowercase = 0; //lowercase char count
    int uppercase = 0; //count upper case char
    while (phrase[i])
    {
        if (isalpha(phrase[i]))
        {
            alpha++;
        };
        if (isblank(phrase[i]))
        {
            blank++;
        };
        if (ispunct(phrase[i]))
        {
            punct++;
        };
        if (islower(phrase[i]))
        {
            lowercase++;
        };
        if (isupper(phrase[i]))
        {
            uppercase++;
        };
        i++;
    }
    printf("No of alphabet characters are %d\n", alpha);
    printf("No of blanks are %d\n", blank);
    printf("No of punctuations characters are %d\n", punct);
    printf("No of lowercase characters are %d\n", lowercase);
    printf("No of uppercase characters are %d\n", uppercase);
    printf("Length of string is %d\n", i);
    return 0;
}