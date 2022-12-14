#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstring>
using namespace std;

int main()
{
    string commandLine;
    string token;
    enum mode {main, add, sub};
    mode currentMode = main;

    while(currentMode == main)
    {
        cout<<endl<<endl<<"main> ";
        vector <string> command;
        getline(cin, commandLine); // use getline() function to read a line of string and store into commandLine variable.  
        stringstream inputStream(commandLine); // inputStream is an object of stringstream that references the commandLine string  
        while (getline(inputStream, token, ' '))   // use while loop to check the getline() function condition  
        {  
            /* inputStream is used to read the string from stringstream, 
            token is used to store the token string (one word between each whitespace), and 
            ' ' whitespace is used to split the string where whitespace is found. 
            */  
            command.push_back(token);  //add each token to the command vector that will be used to identify each command.

        }  

        //Start reading each command token here and call the corresponding function. (Should not have to put endl inside or after calling any function since there is a cout with two endl's at the beginning of the main while loop)
        if(command.front() == "exit")
        {
            return 0;
        }
        if(command.front() == "wes")
        {
            command.erase(command.begin());
            if(command.front() == "is")
            {
                command.erase(command.begin());
                if(command.front() == "cool")
                {
                    cout<<"You Better Believe it!"<<endl;
                    return 0;
                }
                
            }
            
        }
        else
        {
            cout<<"Command not recognized. Type \"helo\" for a description of all commands.";
        }
        command.clear();
    }
    return 0;
}




























//DO NOT DELETE: THIS IS A TEMPLATE
// if(command.front() == "wes")
// {
//     command.erase(command.begin());
    
// }