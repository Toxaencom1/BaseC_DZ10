#include <string.h>

void find_last_symbol(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i + 1] != '\0')
        {
            int next = i + 1;
            int space_count = 0;
            while (str[next] == ' ')
            {
                next++;
                space_count++;
            }
            char tmp = str[i];
            str[i] = str[next];
            str[next] = tmp;
            i++;
            i += space_count;
        }
    }
}