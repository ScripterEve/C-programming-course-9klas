#include "processes.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>

int processescount = 0 ;
struct Process processes[5];


unsigned int nextprocessid() {
    static unsigned int id = 0;
    if (id == UINT_MAX)return 0;
    return ++id;
}

unsigned int createnewprocess(char name[30]) {
    struct Process create;
    create.id = nextprocessid();
    strcpy(create.name, name);

    if (create.id == 0)return 0;

    if (processescount >= 5)return 0;

    processescount++;
    processes[processescount - 1] = create;
    printf("Successfully created a process\n");
    return create.id;
}

unsigned int stopprocess(int id){

    if (id == 0)return 0;

    for(int i = 0; i < processescount; i++){
       if(processes[i].id == id){
        for(int j = i; j < processescount - 1; j++){
            processes[j] = processes[j+1];
        }
        processescount--;
        printf("Successfuly deleted a process");
        return id;
       }
    }
    return 0;

}