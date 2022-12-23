#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BOLDGREEN "\033[1m\033[32m"
#define BOLDWHITE "\033[1m\033[37m"
#define BOLDBLUE    "\033[1m\033[34m"
#define ORANGE "\033[1m\033[93m"
#define Red "\033[1m\033[31m"
#define Yellow "\033[1m\033[33m"


// For Delay Read the code from txt

void delay()
{
    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < 100; j++)
        {
        }
    }
}

int main()
{
    const char *colors[] = {BOLDGREEN, ORANGE, Red, Yellow , BOLDBLUE };

    FILE *ptr1, *ptr2, *ptr3, *ptr4;

    char a, b, c,d;

    ptr1 = fopen("tree.txt", "r");
    ptr2 = fopen("treeroot.txt", "r");
    ptr3 = fopen("marry.txt", "r");
    ptr4 = fopen("chirstmus.txt", "r");

    a = fgetc(ptr1);
    b = fgetc(ptr2);
    c = fgetc(ptr3);
    // d = fgetc(ptr4);
   

    while (a != EOF)
    {
        delay();
        printf("%c%s", a, colors[0]);
        a = fgetc(ptr1);
    }

    while (b != EOF)
    {
        delay();
        printf("%c%s", b, colors[1]);
        b = fgetc(ptr2);
    }
    while (c != EOF)
    {
        delay();
        printf("%c%s", c, colors[2]);
        c = fgetc(ptr3);
    }
    while (d != EOF)
    {
        delay();
        printf("%c%s", d, colors[3]);
        d = fgetc(ptr4);
    }
   

    return 0;
}