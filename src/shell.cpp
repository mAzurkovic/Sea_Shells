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

int about()
{
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

   cout << "Sea Shells is a Linux shell developed by Mattias Zurkovic.\n";
   cout << "See the code base and ask questions - https://github.com/mAzurkovic/Sea_Shells\n";
}

int init()
{

    string cmd;
    
    cout << "Welcome to Sea Shells - a Linux command line shell interface.\n";    

    while (cmd != "exit") {
        
        if (cmd == "about") {
            about(); 
        }

        if (cmd == "date") {
            system("date");
        }

        if (cmd == "vim") {
            system("vim");
        }
   
        if (cmd == "ls") {
            system("ls");
        }
 
        cout << "~> ";
        cin >> cmd;

    }
    cout << "Good Bye\n";

}

int main()
{   
    init();
    return 0;
}
