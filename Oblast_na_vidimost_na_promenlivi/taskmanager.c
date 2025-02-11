#include <stdio.h>
#include "processes.h"


int main() {

    while (1) {
        int choice;
        printf("1. Create new process\n");
        printf("2. Stop processes\n");
        printf("3. List processes\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Create processes\n");
                char name[30];
                scanf("%s",name);
                unsigned int createid = createnewprocess(name);

                if(createid == 0)printf("Unsuccessfully created a process");
                else printf("Successfully created a process with id %d",createid);
                break;
            case 2:
                printf("Stop processes\n");
                int s_id;
                scanf("%d",&s_id);
                unsigned int stopid = stopprocess(s_id);
                if(stopid == 0)printf("Unsuccessfully stopped a process");
                else printf("Successfully stopped a process with id %d",stopid);
                break;
            case 3:
                printf("List processes\n");
                if(processescount == 0){
                    printf("No processes to list");
                }
                for(int i = 0; i < processescount; i++){
                    printf("Process name: %s with id: %d", processes[i].name, processes[i].id);
                }
        
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }

    }
    return 0;
}