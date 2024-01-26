#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"

/* Задача 1. Пары соседних символов
В файле .txt записаны символы. Необходимо разработать функцию, которая
меняет местами пары соседних символов не обращая внимание на символы
пробел. Если количество символов нечетно (пробелы не считаем), то
последний символ не меняем. Результат записать в файл .txt.
Данные на входе: Строка из английских букв, пробелов и знаков
препинания. Не более 1000 символов.
Данные на выходе: Строка из английских букв, пробелов и знаков
препинания.
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
    find_last_symbol(str);
    printf("%s\n",str);
    fprintf(f_out, "%s\n", str);

    fclose(f_out);
    return 0;
}
