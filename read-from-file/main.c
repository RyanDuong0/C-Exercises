#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define JOB_STR_FMT "pid:%07d,id:%05u,pri:%05u,label:%31s"

int main(){
    char ch;
    FILE *fptr = fopen("file.txt", "r");
    if(!fptr){
        return 1;
    }
    int pid;
    unsigned int id, pri;
    char label[32];
    char line[69];

    while(fgets(line, sizeof(line), fptr)){ //reads one whole line until EOF
        //gives us a complete line of length 69 to pass to sscanf()
        if(sscanf(line, JOB_STR_FMT, &pid, &id, &pri, label) == 4){
            printf("pid:%d id:%u pri:%u label:%s\n", pid, id, pri, label);
        }
        else{
            printf("Failed to parse line: %s", line);
        }
    }

    fclose(fptr);

    return 0;
}
