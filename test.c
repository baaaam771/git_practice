#include <stdio.h>
#include <string.h>

struct student {
    char sno[20];
    char name[20];
    int year;
    char dept[30];
    int age;
    struct student *next;
};

int main() {
    int i = 0;
    struct student data[100];
    FILE *fp;

    fp = fopen("studentdata-5.txt", "r");
   

    
    while (fscanf(fp, "%s %s %d %s %d", data[i].sno, data[i].name, &data[i].year, data[i].dept, &data[i].age) != EOF) {
        i++;
        if (i >= 100) break;
    }

    fclose(fp);

    for (int j = 0; j < i; j++) {
        printf("%s, %s, %d, %s, %d\n", data[j].sno, data[j].name, data[j].year, data[j].dept, data[j].age);
    }

    return 0;
}
