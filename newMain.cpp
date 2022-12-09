#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstring>
using namespace std;

int main()
{
    string commandLine;
    enum mode {main, add, sub};
    mode currentMode = main;

    while(1)
    {
        cout<<endl;
        vector<string> command;
        if(currentMode == main)
        {
            cout<<"main> ";
        }
        while((cin>>commandLine))
        {
            if(commandLine == "exit")
            {
                return 0;
            }
            if(commandLine == "go")
            {
                break;
            }
            command.push_back(commandLine);
        }

        for(int i = 0; i < command.size(); i++)
        {
            cout<<command.at(i)<<" ";
        }
    }
    


    return 0;
}