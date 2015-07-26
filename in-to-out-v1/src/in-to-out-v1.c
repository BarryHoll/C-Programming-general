/*************************************
* Program that copies its input to   *
* its output one character at a time.*
*************************************/

#include <stdio.h>

int main()
{
    int c;
    printf("Hello. I am an echo. Say something.\n");
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
