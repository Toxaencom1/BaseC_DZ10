#include <string.h>

void delete_space_from_start(char *str)
{
    int len = strlen(str);
    int i, j = 0;
    for (i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            break;
        }
    }
    for (; i < len; i++)
    {
        str[j++] = str[i];
    }
    str[j] = '\0';
}

void delete_double_spaces(char *str)
{
    int len = strlen(str);
    for (size_t i = 0; i < len; i++)
    {
        if (str[i] == ' ' && str[i + 1] == ' ')
        {
            if (i >= 0 && i < len)
            {
                memmove(&str[i], &str[i + 1], len - i);
            }
            
            i--;
        }
    }
}
