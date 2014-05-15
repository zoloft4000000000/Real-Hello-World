#include <iostream>
#include <sstream>

using namespace std;

int main(){

    string stringEntered;
    cout << "enter a number to see if it is greater than 5: \n or enter \'quit\' to exit the program:\n\n";

    while( true )
{

// read the whole line, this ensures no garbage remains in the input stream
    getline(cin, stringEntered);

    if ( stringEntered == "quit" )
        break;

// this checks that a number was entered and nothing else
    istringstream iss(stringEntered);
    int numberEntered;
    char ch;
    if ( !(iss >> numberEntered) || (iss >> ch) )
    {
        cout << "\n\nplease read the instructions and try again. \n\n";
        continue;
    }

// process the number
    cout << (numberEntered > 5 ? "is greater than 5" : "is not greater than 5")
            << endl;
}
    return 0;
}

