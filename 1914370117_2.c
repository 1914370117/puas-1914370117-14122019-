#include <stdio.h>
int main ()
{
    for (int i = 0; i <= 4; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf ("* ");
        }
        printf ("\n");
    }
    {
        for (int i = 1; i <= 3; i++)
        {
            for (int j = i; j >= 1; j--)
            {
                printf ("* ");
        }
        printf ("\n");
    }
    {
        for (int i = 1; i <= 2; i++)
        {
            for (int j = i; j >= 1; j--)
            {
                printf ("* ");
        }
        printf ("\n");
    }
    }
    return 0;
}
}

