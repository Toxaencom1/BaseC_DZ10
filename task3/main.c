#include <stdio.h>
#include "functions.h"

/* Задача 2. Удалить пробелы из текста
В файле .txt необходимо удалить все лишние пробелы (в начале предложения
и сдвоенные пробелы). Для решения задачи разработать функцию. Результат
записать в .txt.
Данные на входе: Строка из английских букв, знаков препинания и
пробелов. Не более 1000 символов.
Данные на выходе: Строка из английских букв, знаков препинания и
пробелов.
*/

int main()
{
    FILE *file, *f_out;
    file = fopen("in.txt", "r");
    f_out = fopen("out.txt", "w");
    if (file == NULL || f_out == NULL)
    {
        perror("File opening error: ");
        return 1;
    }
    char str[SIZE];
    fscanf(file, "%[^\n]", str);    
    fclose(file);
    printf("%s\n",str);
    change_to_html(str,find_last_slash(str));   
    
    printf("%s\n",str);
    fprintf(f_out, "%s\n", str);

    fclose(f_out);
    return 0;
}
