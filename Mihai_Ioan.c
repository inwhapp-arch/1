#include <stdlib.h>
#include <stdio.h>

int function(int x, int *i)
{
    x = x - 2;
    (*i)++;
    if (x <= 0)
        return x;
    x = function(x, i);
}

int main()
{
    int a = 30, i = 0;
    a = function(a, &i);

    printf("%d", i);
    return 0;
}
