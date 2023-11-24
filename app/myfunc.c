#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include <math.h>

int fibonachi(int num)
{
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num)
    {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}

double *sq_exq_roots(int a, int b, int c)
{
    double discriminant, root1, root2;
    double *roots = malloc(2 * sizeof(double));

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        roots[0] = root1;
        roots[1] = root2;
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        roots[0] = root1;
        roots[1] = root1;
    }
    else
    {
        roots[0] = NAN;
        roots[1] = NAN;
    }

    return roots;
}