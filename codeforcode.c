#include <stdio.h>
#include <math.h>

// I confess to having never really coded in C before. As such, this program is
// probably hideous, clumsy and definitely not reusable. Oh well. Security
// through obscurity, perhaps? I did intend to have the program divide the
// input by the hour of day, but found it well above my skills in C. I didn't
// want to copy and paste someone else's code either. Hence the next line is a
// relic (monument!) to the idea.
// #include "time.h"

int main(void)
{
    int a;

    printf("Password: ");
    scanf("%d", &a);

    a = pow((a - 1234), 1.0 / 4.0);
    int b = (a * 2) - 46;
    int c = b - 3;
    int d = c - 8;
    int e = b - 17;
    int f = e + 12;
    int g = f - 8;

    int h = 67;
    int i = b - 13;

    int j = a / 8.0;

    int k =  (a / 10) * 4;

    printf("%c%c%c%c%c%c%c%c%c%c", a, b, c, d, b, e, f, f, g, b);
    printf("%c%c%c%c%c%c%c%c%c", a / 2, h, c, a + 22, c - 9, g, i, i - 60, 58);
    printf("%c%c%c%c%c%c%c%c", j, j-1, b, g, f+7, d+14, j+104, f+1);
    printf("%c%c%c%c%c%c%c%c", k, a, b, c, d, b, e, f);
    printf("\n");

    return 0;
}
