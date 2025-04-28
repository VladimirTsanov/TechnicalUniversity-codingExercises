#include <stdio.h>

typedef struct {
  char name[50];
  double grade;
} Student;

typedef struct {
  Student students[30];
  int num_students;
} Class;

typedef struct {
  Class classes[5];
  int num_classes;
} SchoolYear;

int main(){

    SchoolYear school_year;
    school_year.num_classes = 1;

    printf("Type number of students in the school class: ");
    scanf("%d", &school_year.classes[0].num_students);

    for (int i = 0; i < school_year.classes[0].num_students; i++){
        printf("Type a name and a grade for student %d: ", i+1);
        scanf("%s %lf", &school_year.classes[0].students[i].name, &school_year.classes[0].students[i].grade);
    }

    double class_average = 0;
    for (int i = 0; i < school_year.classes[0].num_students; i++) {
        class_average += school_year.classes[0].students[i].grade;
    }
    class_average /= school_year.classes[0].num_students;

    printf("Average grade of the class: %.2lf\n", class_average);


    return 0;
}
