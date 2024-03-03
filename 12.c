#include <stdio.h>
#include <string.h>

int main()
{
    char f, s[100];
    printf("Enter the string :");
    fgets(s, sizeof(s), stdin);

    int l, count, max = 0;
    for (l = 0; s[l] != '\n'; l++)
        ;

    for (int i = 0; i < l; i++)
    {
        count = 0;
        for (int j = 0; j < l; j++)
        {
            if (s[i] == s[j])

                count++;
        }
        if (count >= max)
        {
            max = count;
            f = s[i];
        }
    }

    printf("%c repeats %d times :", f, max);

    return 0;
}