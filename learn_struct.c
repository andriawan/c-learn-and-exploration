#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct
{
    char *name;
    int age;
    time_t date_now;
} student;

int main(int argc, char const *argv[])
{
    student newStudent;
    newStudent.name = "Andriawan";
    newStudent.age = 27;
    newStudent.date_now = time(NULL);

    int *p = &newStudent;

    printf("Student name : %s\n", newStudent.name);
    printf("Student age : %d\n", newStudent.age);
    printf("Date now : %s\n", ctime(&newStudent.date_now));
    printf("pointer student obj : %x\n", p);
    exit(EXIT_SUCCESS);
}
