#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *fp = fopen("not.txt", "r");
    FILE *fp1 = fopen("res.txt", "w");
    if (fp == NULL)
        printf("code not found");
    do
    {

        char c = fgetc(fp);
        if (feof(fp))
            break;
        if (c == '"')
        {
            fputc(c, fp1);
            char m = fgetc(fp);
            while (m != '"')
            {
                fputc(m, fp1);
                m = fgetc(fp);
            }
        }

        if (c == '/')
        {

            char k = fgetc(fp);

            if (k == '/')
            {

                while (fgetc(fp) != '\n')
                {
                }
            }
            else
            {
                fseek(fp, -1, SEEK_CUR);
            }
        }
        if (c == '/')
        {

            char k = fgetc(fp);

            if (k == '*')
            {
                char l;
                lab: l=fgetc(fp);
                while (l!= '*')
                {
                    if(fgetc(fp)=='/')
                    {
                        break;
                    }

                }
                if(l=='*' && fgetc(fp)!='/')
                {
                    goto lab;
                }
                
            }
            else
            {
                fseek(fp, -1, SEEK_CUR);
            }
        }
        else
        {
            fputc(c, fp1);
        }

    } while (1);

    return 0;
}