#include <stdio.h>
#include <stdlib.h>

int main(){
    int size[100]={0};
    char buffer[1000];
    FILE* fp=fopen("not.txt","r");
    if (fp==NULL)
    {
        printf("Problem");
    }
    char c;
    int i=1;
    int count=0;
    int j=0;
    while((c=fgetc(fp))!=EOF)
    {
        buffer[j]=c;
        j++;
        count++;
        if(c=='\n')
        {
            size[i]=count;
            if(count>80)
            {
                for(int k=0;k<=count;k++)
                {
                    printf("%c",buffer[k]);
                }
            }
            j=0;
            count=0;
            i++;
            
        }
    }
    printf("%d\n",size[1]);
    printf("%d\n",size[2]);
    
    return 0;
}