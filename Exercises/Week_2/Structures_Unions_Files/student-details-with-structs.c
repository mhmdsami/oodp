#include <stdio.h>
#include <malloc.h>

struct Student
{
    int age, year;
    char name[25], reg_no[15];
};

int main()
{
    int number_of_students, i;
    struct Student *students;
    printf("Enter number of students: ");
    scanf("%d", &number_of_students);
    students = (struct Student *)malloc(sizeof(struct Student) * number_of_students);
    for (i = 0; i < number_of_students; i++)
    {
        printf("Enter name of student[%d]: ", i + 1);
        scanf("%s", (students + i)->name);
        printf("Enter age of student[%d]: ", i + 1);
        scanf("%d", &(students + i)->age);
        printf("Enter registration number of student[%d]: ", i + 1);
        scanf("%s", (students + i)->reg_no);
        printf("Enter year of student[%d]: ", i + 1);
        scanf("%d", &(students + i)->year);
    }
    for (i = 0; i < number_of_students; i++)
    {
        printf("Details of student %d\n", i + 1);
        printf("Name: %s\n", (students + i)->name);
        printf("Age: %d\n", (students + i)->age);
        printf("Reg No: %s\n", (students + i)->reg_no);
        printf("Year: %d\n", (students + i)->year);
    }
    return 0;
}