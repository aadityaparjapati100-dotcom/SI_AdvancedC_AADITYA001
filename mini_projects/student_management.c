#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks1, marks2, marks3;
    float total, percentage;
    char grade;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    while (1) {
        printf("\n===== Student Mark Record Management System =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Name: ");
                scanf(" %[^\n]", s[n].name);

                printf("Enter Marks of 3 Subjects: ");
                scanf("%f %f %f",
                      &s[n].marks1,
                      &s[n].marks2,
                      &s[n].marks3);

                s[n].total = s[n].marks1 +
                             s[n].marks2 +
                             s[n].marks3;

                s[n].percentage = s[n].total / 3;

                if (s[n].percentage >= 90)
                    s[n].grade = 'A';
                else if (s[n].percentage >= 75)
                    s[n].grade = 'B';
                else if (s[n].percentage >= 60)
                    s[n].grade = 'C';
                else if (s[n].percentage >= 40)
                    s[n].grade = 'D';
                else
                    s[n].grade = 'F';

                printf("Record Added Successfully!\n");
                n++;
                break;

            case 2:
                if (n == 0) {
                    printf("No records found.\n");
                } else {
                    printf("\n----- Student Records -----\n");
                    for (i = 0; i < n; i++) {
                        printf("\nRoll No: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f %.2f %.2f\n",
                               s[i].marks1,
                               s[i].marks2,
                               s[i].marks3);
                        printf("Total: %.2f\n", s[i].total);
                        printf("Percentage: %.2f%%\n",
                               s[i].percentage);
                        printf("Grade: %c\n", s[i].grade);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (s[i].roll == roll) {
                        printf("\nStudent Found!\n");
                        printf("Name: %s\n", s[i].name);
                        printf("Percentage: %.2f%%\n",
                               s[i].percentage);
                        printf("Grade: %c\n", s[i].grade);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Student record not found.\n");

                break;

            case 4:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice! Try Again.\n");
        }
    }

    return 0;
}