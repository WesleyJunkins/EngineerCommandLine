#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstring>
#include <fstream>
using namespace std;

class setting
{
    public:
    bool active;
    int specialAttribute;
};

void Err()
{
    cout<<"Command not recognized. Type \"help\" for a description of all commands.";
}

int main()
{
    string commandLine;
    string token;
    enum mode {main};
    mode currentMode = main;
    float sum = 0; //For simplicity, the sum variable is used to express the result if addition, subtraction, multiplication, etc.

    //Default Settings - Create and initialize new settings here using the setting class.
    setting resetSumAlways; resetSumAlways.active = false; //True: resets sum without needing "=". False by default.

    //Create or Open Settings file - This holds all previous settings.
    ifstream settingsFile;
    settingsFile.open("settings.txt");
    vector <string> settingsVector;
    string singleSetting;
    while(settingsFile>>singleSetting)
    {
        settingsVector.push_back(singleSetting);
    }
    settingsFile.close();
    remove("settings.txt");
    //Match current settings to saved settings. Check through every setting using if-statements inside the for-loop.
    for(int i = 0; i < settingsVector.size(); i++)
    {
        if(settingsVector.at(i) == "resetSumAlways")
        {
            resetSumAlways.active = true;
        }
    }

    while(1)//currentMode == main)
    {
        cout<<endl<<endl<<"main> ";
        commandLine.clear();
        bool bypassErr = false; //bypassErr means to bypass "Command not found" and get the user input again.
        vector <string> command;
        getline(cin, commandLine); // use getline() function to read a line of string and store into commandLine variable. //If you have other cin's in the program, you might have to put cin.ignore() to keep the program from segfaulting.
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
            bypassErr = true;
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
                    if((frontCommand == "+") || (frontCommand == "add") || (frontCommand == "plus"))
                    {
                        sum+=stod(command.at(i));
                    }
                    if((frontCommand == "-") || (frontCommand == "subtract") || (frontCommand == "sub") || (frontCommand == "minus"))
                    {
                        sum-=stod(command.at(i));
                    }
                    if((frontCommand == "*") || (frontCommand == "multiply") || (frontCommand == "times") || (frontCommand == "mult"))
                    {
                        sum*=stod(command.at(i));
                    }
                    if((frontCommand == "/") || (frontCommand == "div") || (frontCommand == "divide"))
                    {
                        sum/=stod(command.at(i));
                    }
                    //if(frontCommand == "^") || (frontCommand == "pow")                                                                                              //COME BACK
                }
            }
            cout<<sum;
            bypassErr = true;
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
        //test command --- REMOVE LATER
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
                    Err();
                }
                command.clear();
            }
            else
            {
                Err();
            }
            command.clear();
        }
        //Settings
        if(command.front() == "setting")
        {
            command.erase(command.begin());
            if(command.front() == "sum")
            {
                command.erase(command.begin());
                string tempAnswer;
                while((tempAnswer != "Y") && (tempAnswer != "y") && (tempAnswer != "N") && (tempAnswer != "n"))
                {
                    cout<<"\nWould you like the sum to always be reset?\n\tYes: Sum will reset to 0 after each use.\n\tNo: Sum will hold previous value in memory until program is reset or the equal \"=\" key is entered.\n\t(Y or N)> ";
                    cin>>tempAnswer;
                    cin.ignore();
                }
                if((tempAnswer == "Y") || (tempAnswer == "y"))
                {
                    resetSumAlways.active = true;
                }
                if((tempAnswer == "N") || (tempAnswer == "n"))
                {
                    resetSumAlways.active = false;
                }
            }
            //Confirm changes to setting
            ofstream settingsFileSave;
            settingsFileSave.open("settings.txt", ostream::out | ostream::trunc);
            if(resetSumAlways.active == true)
            {
                settingsFileSave<<"resetSumAlways\n";
            }
            settingsFileSave.close();
            bypassErr = true;
        }
        //Main: Command not recognized.
        else
        {
            if(bypassErr == false)
            {
                Err();
            }
        }
        command.clear();
    }
    return 0;
}

