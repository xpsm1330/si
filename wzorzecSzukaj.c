#include <stdio.h>
#define MAXLINE 1000 /* max dł wiersza*/

int getline(char line[], int max);
int strindex(char source[], char searchfor[]);
char pattern[] = "nie";  // szukany wrzorzec


int main()
{
    char line[MAXLINE];
    int found = 0;
    while(getline(line, MAXLINE)>0)
        if(strindex(line, MAXLINE)>0)
        {
            printf("%s", line);
            found++;
        }
    return 0;
}