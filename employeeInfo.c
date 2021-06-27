#include <stdio.h>
#include <string.h>

struct employee
{
    char empname[25];
    int empno;
    char departmentName[30];
    int salary;
};
void printEmp(struct employee *e, int i)
{
    printf("\nDetails of the employee number %d\n", i + 1);
    printf("Employee name:  %s\n", e[i].empname);
    printf("Employee number:  %d\n", e[i].empno);
    printf("Department name:  %s\n", e[i].departmentName);
    printf("Salary:  %d\n", e[i].salary);
}
int main()
{
    int num;
    printf("Input the number of employees\n");
    scanf("%d", &num);
    getchar();
    struct employee e[num];
    printf("\nPlease fill the below details of the employees\n");
    for (int i = 0; i < num; i++)
    {
        printf("\nFor employee number %d\n", i + 1);
        printf("Employee name:  ");
        gets(e[i].empname);
        printf("Employee number:  ");
        scanf("%d", &e[i].empno);
        getchar();
        printf("Department Name:  ");
        gets(e[i].departmentName);
        printf("Salaray:  ");
        scanf("%d", &e[i].salary);
        getchar();
    }
    printf("\nBelow are the details you have filled for the employess\n");
    for (int i = 0; i < num; i++)
    {
        printEmp(e, i);
    }
    return 0;
}
