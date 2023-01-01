#include <stdio.h>

int main(void)
{
  char c;
  FILE *fp = fopen("try.txt", "r");
  FILE *fp1 = fopen("res.txt", "w");
  while ((c=fgetc(fp)) != EOF)
  {
    if (c == '\t')
    {
      fputc('\\',fp1);
    fputc('t',fp1);
    }
    else if (c == '\b')
    {
      fputc('\\',fp1);
    fputc('b',fp1);
    }
    else if (c == '\\')
    {
      fputc('\\',fp1);
      fputc('\\',fp1);
    }
    else
    {fputc(c,fp1);
    }
  }

  return 0;
}