#include<stdio.h>
#include<string.h>
#include <syslog.h>


int main(int argc, char *argv[]){
    openlog("writer_app", LOG_PID | LOG_CONS, LOG_USER);

    if (argc != 3){
        syslog(LOG_ERR, "Argument count is %d,which should be 2", argc);
        return 1;
    }
    char writefile[100] = "";
    char writestr[100] = "";
    FILE *fptr;

    strcpy(writefile,argv[1]);
    strcpy(writestr,argv[2]);

    fptr = fopen(writefile,"w");
    fprintf(fptr,"%s",writestr);
    syslog(LOG_INFO,"File writing successful");

    fclose(fptr);

    return 0;
}
