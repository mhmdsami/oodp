#include <stdio.h>

int main()
{
    char *in_file_name, *out_file_name, line[256];
    FILE *in_file_ptr, *out_file_ptr;
    printf("Enter input file name: ");
    scanf("%s", in_file_name);
    in_file_ptr = fopen(in_file_name, "r");
    if (in_file_ptr == NULL)
    {
        printf("%s does not exists", in_file_name);
        return 0;
    }
    printf("Enter output file name: ");
    scanf("%s", out_file_name);
    out_file_ptr = fopen(out_file_name, "w");
    while (fgets(line, 256, in_file_ptr) != NULL)
    {
        fprintf(out_file_ptr, "%s", line);
    }
    fclose(out_file_ptr);
    fclose(in_file_ptr);
    return 0;
}