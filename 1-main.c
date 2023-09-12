#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 *main - PID
 *Return: Always 0.
 */

int main(int ac, char **av)
{
  int a = 1;
  const char *argv;

  if (ac < 1)
    {
      return (-1);
    }
  if (av == NULL)
    {
      return (-1);
    }
  while (av[a] != NULL)
    {
      printf("%d : %s\n", a, av[a]);
      a++;
    }
  (void)argv;
  return (0);
}
