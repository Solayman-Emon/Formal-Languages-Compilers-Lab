#include <bits/stdc++.h>
using namespace std;

int main()
{

    FILE *p, *p1;
    char c;

    p  = fopen("input1_160104091.c", "r");
    p1 = fopen("output.txt", "w");

    if(!p)
    {
        cout << "File can't be opened.." << endl;
    }

    else
    {
        while((c = getc(p))!=EOF)
        {
            if(c == '\n')
            {
                do
                {
                    c = getc(p);
                }
                while(c == '\n');
            }

            if(c == ' ')
            {
                fputc(' ', p1);
                do{
                    c = getc(p);
                }while(c == ' ');
            }

            if(c == '/')
            {
                if((c = getc(p)) == '*' )
                {
                    do
                    {

                        c=getc(p);

                    }
                    while(c != '*');

                    c = getc(p);  // remover the second * from multi line comment

                    if(c == '/')
                    {
                        c = getc(p);
                    }

                    if(c == '\n')
                    {
                        c = getc(p);
                    }
                }

                else
                {
                    if(c == '/')
                    {
                        do
                        {
                            c=getc(p);
                        }
                        while(c != '\n');

                        if(c == '\n')
                        {
                            c = getc(p);
                        }
                        c = getc(p);

                    }
                }
            }

            fputc(c, p1);
        }
    }

    fclose(p);
    fclose(p1);

    p = fopen("output.txt", "r");

    while((c = fgetc(p)) != EOF)
    {
        cout << c;
    }

    fclose(p);

    return 0;
}
