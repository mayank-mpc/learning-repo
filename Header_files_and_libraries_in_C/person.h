#ifndef PERSON_H
#define PERSON_H

#define NAME_BUFFER_SIZE (20)

typedef struct
{
    char name[NAME_BUFFER_SIZE];
    int age;
} person;

#endif