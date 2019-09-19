#include <stdio.h>

void  ft_memdel(void **ap)
{
  int counter;
  char **ap2;
  
  counter = 0;
  ap2 = (char **)ap;
  while (ap2[counter])
  {
    free(ap2[counter]);
    counter++;
  }
  return (ap);
}

int main(void)
{
  char words[2][2] = {"op", "df"};
  ft_memdel(words);
  return (0);
}
