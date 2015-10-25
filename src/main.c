#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define MAX_LENGTH 1024
#define DELIMS " \t\r\n"

int main(int argc, char *argv[]) {
  char line[MAX_LENGTH];

  while (1) {
    char *sysName = "mattias";
    printf("%s=> ", sysName);
    if (!fgets(line, MAX_LENGTH, stdin)) break;
    system(line);
  }

  return 0;
}
