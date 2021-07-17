#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[10];
void swap(struct student st);

void swap(struct student st)
{int temp= s[1].marks;
    s[1].marks=s[2].marks;
    s[2].marks=temp;}

  
int main() {
    int i,x,y;
    struct student st;
    printf("Enter information of students:\n");

    // storing information
    for (i = 1; i <= 2; i++) {
        s[i].roll = i;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }


    swap(st);
    printf("Displaying Information:\n\n");



    // displaying information
    for (i = 1; i <= 2; i++) {
        printf("\nRoll number: %d\n", i );
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");

    }
    


    

}
