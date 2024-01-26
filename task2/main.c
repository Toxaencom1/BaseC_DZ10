#include <stdio.h>
#include "functions.h"

/* Задача 3. Изменить расширение
В файле .txt записан полный адрес файла (возможно, без расширения).
Необходимо изменить его расширение на ".html" и записать результат в файл
.txt.
Данные на входе: Строка состоящая из символов: a-z, A-Z, 0-9, /
Данные на выходе: Исходная строка с измененным расширением.
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
    delete_space_from_start(str);
    delete_double_spaces(str);
    printf("%s\n",str);
    fprintf(f_out, "%s\n", str);

    fclose(f_out);
    return 0;
}
