#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main() {
    struct Student s[5];  
    int i;
    float percentage;

    printf("Enter details of 5 students:\n");

    for (i = 0; i < 5; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Chemistry Marks (out of 100): ");
        scanf("%d", &s[i].chem_marks);
        printf("Mathematics Marks (out of 100): ");
        scanf("%d", &s[i].maths_marks);
        printf("Physics Marks (out of 100): ");
        scanf("%d", &s[i].phy_marks);
    }

    printf("\nMarksheet of Students:\n");
    printf("-----------------------------------------------------------\n");
    printf("RollNo\tName\tChem\tMaths\tPhysics\tPercentage\n");
    printf("-----------------------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        percentage = (s[i].chem_marks + s[i].maths_marks + s[i].phy_marks) / 3.0;
        printf("%d\t%s\t%d\t%d\t%d\t%.2f%%\n",
               s[i].roll_no,
               s[i].name,
               s[i].chem_marks,
               s[i].maths_marks,
               s[i].phy_marks,
               percentage);
    }

    return 0;
}
