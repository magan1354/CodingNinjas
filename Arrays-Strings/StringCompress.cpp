// input - given string
// You need to update in the given string itself i.e. in input. No need to return or print.
#include <bits/stdc++.h> 
using namespace std; 

void stringCompression(char myStr[])
{
    char *s = myStr;
    char *r, *p;
    int count, i;

    while (*s)
    {
        /*initially only 1 character of a kind is present*/
        count = 1;

        /*we check whether current character matches the next one*/
        while (*s == *(s+1) && *s)
        {
            /*if yes,then increase the count due to the match 
            and increment the string pointer to next */
            count++;
            s++;
        }

        if (count > 1) /*if more than one character of a kind is present*/
        {
            /*assign the value of count to second occurence of a particular character*/
            *(s - count + 2) = count + '0';

            /*delete all other occurences except the first one and second one using array shift*/
            for (i = 0; i < count - 2; i++)
            {
                p = s + 1;
                r = s;

                while (*r)
                    *r++ = *p++;

                s--;
            }
        }
        s++;
    }

}
