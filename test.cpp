#include <stdio.h>
#include <stdlib.h>

int main()
{
    char * s = "le tran dat";
    int count[26] = {0};
    int i;
    for(i = 0; i < 26; ++i)
        count[s[i] - 'a']++;
    for(i = 0; i < 26; ++i)
        if(count[i])
            printf("%c %d\n", i+'a', count[i]);
    return 0;
}
