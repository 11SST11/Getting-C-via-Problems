#include <stdio.h>

struct student
{
    char    name[30];
    int     roll;
    float   percentage;
};
int main()
{
    struct student  std;        //structure variable
    struct student  *ptr;       //pointer to student structure

    ptr= &std;                  //assigning value of structure variable

    printf("Enter details of student 1 \n");
    printf("\nEnter Name of student 1:: ");
    scanf("%s",ptr->name);
    printf("\nEnter Roll No of student  :: ");
    scanf("%d",&ptr->roll);
    printf("\nEnter Percentage of student 1:: ");
    scanf("%f",&ptr->percentage);
    printf("Enter details of student 2 \n");
    printf("\nEnter Name of student 2:: ");
    scanf("%s",ptr->name);
    printf("\nEnter Roll No of student 2 :: ");
    scanf("%d",&ptr->roll);
    printf("\nEnter Percentage of student 2:: ");
    scanf("%f",&ptr->percentage);

    printf("\nEntered details of student 2 are :: \n");

    
    printf("\nName : %s \n\nRollNo: %d \n\nPercentage: %.02f\n\n",ptr->name,ptr->roll,ptr->percentage);

    return 0;
}