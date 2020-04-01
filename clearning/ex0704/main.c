#include <stdio.h>

int main()
{

    char a, b, c;

    printf("I am waiting for 3 characters: \n");
    a = getc(stdin);
    b = getc(stdin);
    c = getc(stdin);

    printf("The three chars are: %c, %c and %c\n", a, b, c);

    return(0);

}
