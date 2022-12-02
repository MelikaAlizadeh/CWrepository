#include <stdio.h>

int main()
{
    int xa, ya, xb, yb, xc, yc, xd, yd;
    scanf("%d %d\n%d %d\n%d %d\n%d %d", &xa, &ya, &xb, &yb, &xc, &yc, &xd, &yd);
    int ab = (xa - xb) * (xa - xb) + (ya - yb) * (ya - yb);
    int bc = (xb - xc) * (xb - xc) + (yb - yc) * (yb - yc);
    int cd = (xc - xd) * (xc - xd) + (yc - yd) * (yc - yd);
    int da = (xa - xd) * (xa - xd) + (ya - yd) * (ya - yd);

    int ac = (xa - xc) * (xa - xc) + (ya - yc) * (ya - yc);
    int bd = (xb - xd) * (xb - xd) + (yb - yd) * (yb - yd);

    if ((ab == cd) && (bc == da))
    {
        if ((ab != bc) && (bc != cd) && (((xa - xb) * (xc - xb) + (ya - yb) * (yc - yb)) == 0))
            printf("This is a Rectangle!");
        else if ((ab == bc) && (bc == cd))
        {
            if ((ac != bd))
                printf("This is a Diamond!");
            else
                printf("This is a Square!");
        }
        else
            printf("This is a Parallelogram!");
    }
    else if (((ab == bc) && (cd == da)) || ((ab == da) && (bc == cd)))
        printf("This is a Kite!");
    else
        printf("None");
    return 0;
}
