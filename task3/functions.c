#include <string.h>

int find_last_slash(char *str)
{
    int len = strlen(str);
    int last = 0;
    for (size_t i = 0; i < len; i++)
    {
        if (str[i] == '\\' || str[i] == '/')
        {
            last = i;
        }
    }
    return last + 1;
}

void change_to_html(char *str, int index)
{
    int len = strlen(str);
    for (size_t i = index; i < len; i++)
    {        
        if (str[i + 1] == '.' || i == len-1)
        {
            str[i + 1] = '.';
            str[i + 2] = 'h';
            str[i + 3] = 't';
            str[i + 4] = 'm';
            str[i + 5] = 'l';
            str[i + 6] = '\0';
            break;
        }
    }
}
