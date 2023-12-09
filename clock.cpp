#include<stdio.h>
#include<conio.h>
int main(void)

{
    clrscr();
    int h = 0, m = 0, s = 0;
    printf("Digi_Clock \n");
    printf("Enter time (hh : mm : ss) \n");
    scanf(" %d %d %d", &h, &m, &s);

start:;

    for (h; h <= 24; h++) {
        for (m; m <= 60; m++) {
            for (s; s <= 60; s++) {
                clrscr();

                printf(" %d : %d : %d \n", h, m, s);

                for (double i = 0; i <= 6699000; i++) {
                    i++;
                    i--;
                }
            }
            s = 0;
        }
        m = 0;
    }

    goto start;
    getch();
