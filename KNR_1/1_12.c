#include<stdio.h>
int main()
{
    int state=0,count=0,wc=0; 
    char c;
    int histo[100];
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

        static int i=0;
        for(;state==1;)
        {
            histo[i]+=1;
            break;
        }
        i=i+1;

    }
    

    printf("%d",count);
    for (int j=0;j<200;j++)
    {
    printf("%d",histo[j]);
    }
}