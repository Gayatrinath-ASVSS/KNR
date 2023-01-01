#include<stdio.h>
int main()
{
    int state=0,count=0; 
    char c;
    FILE *fp = fopen("try.txt", "r");
    while((c=fgetc(fp))!=EOF)
    {
        
        if(c==' ' || c=='\n' || c=='\t')
        {
            state =0;
        }
        else if(state==0)
        {
            state=1;
            count++;
        }

    }
    printf("%d",count);
}