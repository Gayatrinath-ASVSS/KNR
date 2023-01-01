#include <stdio.h>

int main(void)
{
  char c;
  char last_c = '\0';
  FILE *fp = fopen("try.txt", "r");
  FILE *fp1 = fopen("res.txt", "w");
  while ((c = fgetc(fp)) != EOF)
  {
    if (c != ' ' || last_c != ' ')
    {
      fputc(c,fp1);
    }

    last_c = c;
  }

  return 0;
}