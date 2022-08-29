#include <stdio.h>

int main()
{
    char *name;
    FILE *fptr;
    printf("Enter your name: ");
    scanf("%[^\n]s", name);
    fptr = fopen("out.txt", "w");
    fprintf(fptr, "Your name is %s", name);
    fclose(fptr);
    return 0;
}
