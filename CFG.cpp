#include <iostream>
#include <string>
#include <regex>

using namespace std;
string userinput;


string ReplaceAll(string str, string& from, string& to) {
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
    }
    return str;
}

int main()
{
    char test = ' ';
    string stack = "[‘$’, ‘Q’ , ‘ R’]";
    cout << "Please input you input string" << endl;
    getline(cin, userinput);
    int a = 5;

    const string userinputnospace = regex_replace(userinput, regex(" "), "*");
    userinput = userinputnospace;

    stack = "E$"; //testing each steps as the stack changes
        if(userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
    }

        stack = "TQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "FRQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "(E)RQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "E)RQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "TQ)RQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "FRQ)RQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "aRQ)RQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "RQ)RQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "Q)RQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "+TQ)RQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "TQ)RQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "FRQ)RQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "aRQ)RQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "RQ)RQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "Q)RQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = ")RQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "*FRQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "FRQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "aRQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "RQ$"; //testing each steps as the stack changes
        if (userinput[0] == stack[0]) {
            userinput.erase(userinput.begin());
        }
        stack = "[‘$’, ‘Q’ , ‘ R’]";
        if (userinput == "$") {
            cout << "String is accepted/ valid";
        }
        else {
            cout << "String is not  accepted/ In valid";
        }

    return 0;
}


