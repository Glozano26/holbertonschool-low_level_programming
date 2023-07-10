#include <stdio.h>
#include <stdlib.h>

/**
 * main - This funtion adds positive numbers
 *
 * @argc : argument
 * @argv : array of pointer to string
 * Return: 0
 */

int _add(int argc, char *argv[])

{
    int i, j, k, num, suma = 0;

    for (i = 1; i < argc; i++)
    {
        /* This loop validates that the string is a number */
        for (j = 0; argv[i][j] != '\0'; j++)
        {
           
            if (argv[i][j] < '0' || argv[i][j] > '9')
            {
                printf("Error\n");
                return (1);
            }
        }
        suma += atoi(argv[i]);
    }

    /*for (k = 1; k < argc; k++)
    {
        num = atoi(argv[k]);
                if (num >= 0)
                {
                suma += num;
                }
    }*/
    printf("%d\n", suma);
    return (0);
}

int main()
{
  int count;
  char *arguments[4];
  char *arg1 = "addition";
  char *arg2 = "2";
  char *arg3 = "3";
  char *arg4 = "4";

  arguments[0] = arg1;
  arguments[1] = arg2;
  arguments[2] = arg3;
  arguments[3] = arg4;
  
  count = 4;
  return (_add(count, arguments));
}
