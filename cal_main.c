#include <stdio.h>
#include <stdlib.h>
#include <arithmetic.h>

int main(int argc, char *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

<<<<<<< HEAD
    printf("%d + %d ++> %d\n", a, b, add(a, b));
    printf("%d - %d ++> %d\n", a, b, sub(a, b));
    printf("%d * %d -> %d\n", a, b, mul(a, b));
    printf("%d / %d -> %d\n", a, b, dur(a, b));
=======
    printf("%d + %d -> %d\n", a, b, add(a, b));
    printf("%d - %d -> %d\n", a, b, sub(a, b));
    printf("%d * %d --> %d\n", a, b, mul(a, b));
    printf("%d / %d --> %d\n", a, b, dur(a, b));
>>>>>>> 2b4e708511cead9154bf0d10faf8cbae58348cef

    return 0;
}
