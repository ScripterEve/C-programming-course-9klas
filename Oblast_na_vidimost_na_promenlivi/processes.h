#ifndef PROCESSES_H
#define PROCESSES_H

struct Process {
    unsigned int id;
    char name[30];
};

extern struct Process processes[5];
extern int processescount;

unsigned int nextprocessid();
unsigned int createnewprocess(char name[30]);
unsigned int stopprocess(int id);

#endif