#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define MAX_LENGTH 1024
#define DELIMS " \t\r\n"

int main(int argc, char *argv[]) {

   // Execute main subroutine for shell
   // init();


    if (strcmp(argv[1], argv[1]) == 0) {
        system(argv[1]);
    }

    mainLoop();

}

int mainLoop()
{

    prompt();
//    readLine();

}

int prompt()
{

    while (1)
    {
 
        char cmd[MAX_LENGTH + 1]; 
        printf("~> ");
        scanf("%c", cmd);

       // Read command from standard input, exit on Ctrl+D
       if(fgets(cmd, sizeof(cmd), stdin) == NULL) break;
    }

}   

init(void) {

  char line[MAX_LENGTH];
  

  while (1) {
    char *sysName = "Sea#Shells";
    char *cmd;

    printf("%s ~> ", sysName); 
    if (!fgets(line, MAX_LENGTH, stdin)) break;
    system(line);

    if ((cmd = strtok(line, DELIMS))) {
        errno = 0;
        if (strcmp(cmd, "a") == 0) {
            char *arg = strtok(0, DELIMS);
            printf("edffffffff\n");   
            system("ls"); 
        } 
    }
  }

}
