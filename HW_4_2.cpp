#include<iostream>
#include<string>
#include<cassert>
using namespace std;

string composeMessage(string first_name, string last_name, string ending, char position)
{
    if(position == 'P')
    {
        ending = " The passenger rooms are thru the third door on the right";
    }
    else if(position == 'C')
    {
        ending = " The captain's quarters are up the stairs on the left";
    }
    else if(position == 'E')
    {
        ending = " The engine rooms are below deck down the second aft stairway";
    }
    else if(position == 'N')
    {
        ending = " The cartography chamber is up the stairs on the bow";
    }
    else
    {
        cout << "Invalid position!" << endl;
    }
    cout << "Welcome Aboard " << first_name << " " << last_name << "!" << ending << endl;
    return "";
}

int main()
{
    //Declare variables
    string first_name;
    string last_name;
    string ending;
    char position;

    //Capture user input
    cout << "What is your first name?" << endl;
    cin >> first_name;
    cout << "What is your last name?" << endl;
    cin >> last_name;
    cout << "What is your position? Enter P for passenger, C for captain, E for engineer, and N for navigator:" << endl;
    cin >> position;

    //Validate input
    if ((position != 'P') && (position != 'C') && (position != 'E') && (position != 'N')) 
    {
        cout << "Invalid position!" << endl;
        return 0;
    }
    else
    {
        //Compose and display message
        string message = composeMessage(first_name, last_name, ending, position);
        cout << message << endl;
    }
    
    return 0;
}