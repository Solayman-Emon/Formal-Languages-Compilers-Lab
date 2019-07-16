#include <bits/stdc++.h>
using namespace std;

int main()
{

    FILE *p, *p1;
    char c;

    p  = fopen("input2.c", "r");
    p1 = fopen("output2.txt", "w");

    if(!p)
    {
        cout << "File can't be opened.." << endl;
    }

    else
    {
        while((c = getc(p))!=EOF)
        {
            if(c == 'p')
            {
                if((c = getc(p))== 'r')
                {
                    if ((c = getc(p))=='i')
                    {
                        if ((c = getc(p))== 'n')
                        {
                            if((c = getc(p))== 't')
                            {
                                if((c = getc(p)) == 'f')
                                {
                                    if((c = getc(p)) == '(')
                                    {
                                        if((c = getc(p)) == '"')
                                        {
                                            c = getc(p);
                                            do
                                            {
                                                fputc(c, p1);
                                            }
                                            while((c = getc(p)) != ')');
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    fclose(p);
    fclose(p1);

    p = fopen("output2.txt", "r");

    while((c = fgetc(p)) != EOF)
    {
        cout << c;
    }

    fclose(p);

    return 0;
}

