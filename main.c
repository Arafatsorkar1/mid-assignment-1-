
#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *input;
    FILE *output;
    char c,d;
    char p;
    input = fopen("input.txt","r");
    output = fopen("output.txt","w");
    while ((p=getc(input)) !=EOF)
    {
        if(p!=32)
             if(p!=9)
              if(p!='\n')
               if(p!='/' && p!='*')
               fputc(p,output);

    }
    fclose(input);
    fclose(output);
    }
