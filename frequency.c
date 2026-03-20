#include <stdio.h>

int main()
{

    char str[50];

    int i, j;

    int count;

    printf("enter any string: ");

    scanf("%s", str);

    printf("Frequency of each letter:\n");

    for (int i = 0; str[i] != '\0'; i++)
    {

        count = 1;
        if (str[i] != '0')
        {
            for (j = i + 1; str[j] != 0; j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                    str[j] = '0';
                }
            }

            printf("%c=>%d\n", str[i], count);
        }
    }

    return 0;
}