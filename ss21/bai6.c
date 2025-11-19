#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int searchStudent(struct Student students[], int size, const char searchName[]) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            return i; 
        }
    }
    return -1; 
}

void displayStudent(struct Student student) {
    printf("  Ten: %s\n", student.name);
    printf("  Tuoi: %d\n", student.age);
    printf("  Diem trung binh: %.2f\n", student.grade);
}

int main() {
    const int num_students = 5;
    struct Student students[num_students];
    int i;
    
    printf("***** CHUONG TRINH QUAN LY HOC SINH *****\n");

    for (i = 0; i < num_students; i++) {
        printf("\n--- Nhap thong tin cho hoc sinh so %d ---\n", i + 1);
        
        int c;
        while ((c = getchar()) != '\n' && c != EOF); 

        printf("  Ten hoc sinh (Name): ");
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; 

        printf("  Tuoi (Age): ");
        scanf("%d", &students[i].age);

        printf("  Diem trung binh (Grade): ");
        scanf("%f", &students[i].grade);
    }
    
    char searchName[50];
    printf("\n***** TIM KIEM HOC SINH *****\n");
    
    int c;
    while ((c = getchar()) != '\n' && c != EOF); 

    printf("Nhap ten hoc sinh can tim: ");
    fgets(searchName, 50, stdin);
    searchName[strcspn(searchName, "\n")] = 0; 

    int foundIndex = searchStudent(students, num_students, searchName);

    if (foundIndex != -1) {
        printf("\n--- TIM THAY HOC SINH ---\n");
        displayStudent(students[foundIndex]);
    } else {
        printf("\nKhong tim thay hoc sinh co ten '%s' trong danh sach.\n", searchName);
    }

    return 0;
}
