#include <stdio.h>

int main()
{
    int line_number = 0, line_to_delete = -1;
    char file_name[25], line[256];
    FILE *file_ptr, *temp_file_ptr;
    printf("Enter file name: ");
    scanf("%s", file_name);
    file_ptr = fopen(file_name, "r");
    if (file_ptr == NULL)
    {
        printf("%s does not exists", file_name);
        return 0;
    }
    printf("Enter the line number to be deleted: ");
    scanf("%d", &line_to_delete);
    temp_file_ptr = fopen("temp.txt", "w");
    while (fgets(line, 256, file_ptr) != NULL)
    {
        line_number++;
        if (line_number != line_to_delete)
        {
            fputs(line, temp_file_ptr);
        }
    }
    fclose(file_ptr);
    fclose(temp_file_ptr);
    remove(file_name);
    rename("temp.txt", file_name);
    return 0;
}