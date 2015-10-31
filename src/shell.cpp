#include <unistd.h>     // getpid(), getcwd()
#include <sys/types.h>  // type definitions, e.g., pid_t
#include <sys/wait.h>   // wait()
#include <signal.h>     // signal name constants and kill()
#include <iostream>
#include <vector>
#include <string.h>
#include <cstdlib>

#define CHAR 1024
using namespace std;

int main()
{
  
    string cmd;

    while (cmd != "exit") {

    if (cmd == "gook") {
        system("date");
    }

    cout << "#SEA ~> ";
    cin >> cmd;

    }
 
  return 0;
}
