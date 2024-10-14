#include <stdio.h>
#include <string.h>

// #define MAX_STUDENTS 25
// #define MAX_NAME_LENGTH 20

struct student {
    char sno[20];
    char name[20];
    int year;
    char dept[30];
    int age;
};

int main() {
    struct student data[100];
    char sname[100][20];
    int i = 0, num_of_students;
    

    FILE *fp;
    fp = fopen("studentdata-5.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    while (fscanf(fp, "%s %s %d %s %d", data[i].sno, data[i].name, &data[i].year, data[i].dept, &data[i].age) != EOF && i < MAX_STUDENTS) {
        strcpy(sname[i], data[i].name);
        i++;
    }
    num_of_students = i;
    fclose(fp);
    
    
    num_of_students = i;
    
    for (int j = 0; j < num_of_students; j++) {
        printf("%s\n", sname[j]);
    }

    return 0;
}
