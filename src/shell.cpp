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

int init()
{

    string cmd;

    while (cmd != "exit") {

        if (cmd == "about") {
            cout << "           _.-''|''-._\n";
            cout << "       .-'      |     `-.\n";
            cout << "     .' \\       |       /`.\n";
            cout << "   .'    \\      |      /   `.\n";
            cout << "   \\      \\     |     /     /\n";
            cout << "    `\\     \\    |    /    /'\n";
            cout << "       `\\   \\   |   /   /'\n";
            cout << "         `\\  \\  |  /  /'\n";
            cout << "        _.-`\\ \\ | / /'-._\n";
            cout << "       {_____` \\|/'_____}\n";
            cout << "               `-'\n";


         
        }

        if (cmd == "date") {
            system("date");
        }

        cout << "#SEA ~> ";
        cin >> cmd;

    }


}

int main()
{
    
    init();
  
    return 0;
}
