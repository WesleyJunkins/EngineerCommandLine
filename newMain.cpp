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
    float sum = 0; //For simplicity, the sum variable is used to express the result if addition, subtraction, multiplication, etc.

    while(1)//currentMode == main)
    {
        cout<<endl<<endl<<"main> ";
        bool startOver = false; //startOver means to bypass and "Command not found" and get the user input again.
        vector <string> command;
        getline(cin, commandLine); // use getline() function to read a line of string and store into commandLine variable.  
        stringstream inputStream(commandLine); // inputStream is an object of stringstream that references the commandLine string.
        while (getline(inputStream, token, ' '))   // use while loop to check the getline() function condition.
        {  
            /* inputStream is used to read the string from stringstream, 
            token is used to store the token string (one word between each whitespace), and 
            ' ' whitespace is used to split the string where whitespace is found. 
            */  
            command.push_back(token);  //add each token to the command vector that will be used to identify each command.
        }  

        //Start reading each command token here and call the corresponding function. (Should not have to put endl inside or after calling any function since there is a cout with two endl's at the beginning of the main while loop).
        //If there are multiple if-statements, there should follow an else, command not recognized and command.clear().
        //Show and Reset sum.
        if(command.front() == "=")
        {
            command.erase(command.begin());
            cout<<sum;
            sum = 0;
            command.clear();
            startOver = true;
        }
        //Simple Calculations
        if((command.front() == "+") || (command.front() == "-") || (command.front() == "*") || (command.front() == "/"))
        {
            string frontCommand = command.front();
            command.erase(command.begin());
            for(int i = 0; i < command.size(); i++)
            {
                if(command.at(i) != "=")
                {
                    if(frontCommand == "+")
                    {
                        sum+=stod(command.at(i));
                    }
                    if(frontCommand == "-")
                    {
                        sum-=stod(command.at(i));
                    }
                    if(frontCommand == "*")
                    {
                        sum*=stod(command.at(i));
                    }
                    if(frontCommand == "/")
                    {
                        sum/=stod(command.at(i));
                    }
                }
            }
            cout<<sum;
            startOver = true;
            if(commandLine.find("=") != string::npos)
            {
                sum = 0;
                command.clear();
            }
            command.clear();
        }
        //Exit
        if(command.front() == "exit")
        {
            return 0;
        }
        //test command
        if(command.front() == "wes")
        {
            command.erase(command.begin());
            if(command.front() == "is")
            {
                command.erase(command.begin());
                if(command.front() == "cool")
                {
                    cout<<"You Better Believe it!"<<endl;
                    cout<<commandLine;
                    return 0;
                }
                else
                {
                    cout<<"Command not recognized. Type \"help\" for a description of all commands.";
                }
                command.clear();
            }
            else
            {
                cout<<"Command not recognized. Type \"help\" for a description of all commands.";
            }
            command.clear();
        }
        //Main: Command not recognized.
        else
        {
            if(startOver == false)
            {
                cout<<"Command not recognized. Type \"help\" for a description of all commands.";
            }
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