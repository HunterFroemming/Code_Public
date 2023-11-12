#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>

using namespace std;

vector<string> teamsInTournament(string teamscores_file, int wins, int goals)
{
    vector<string> everything;
    vector<string> names;
    vector<string> g;
    vector<string> w;
    vector<string> teams;
    ifstream file(teamscores_file);
    if(file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            stringstream ss(line);
            while (getline(ss, line, ','))
            {
                stringstream ss(line);
                everything.push_back(line);
            }
        }
    }
    else
    {
        cout << "Failed to open team scores file" << endl;
    }
    for (int i = 0; i < int(everything.size()); i++)
    {
        if(i % 3 == 0)
        {    
            names.push_back(everything.at(i));
        }
        else if(i % 3 == 1)
        {
            w.push_back(everything.at(i));
        }
        else if(i % 3 == 2)
        {
            g.push_back(everything.at(i));
        }
    }
    int g_num = 0;
    int w_num = 0;
    for (int i = 0; i < int(w.size()); i++)
    {
        g_num = stoi(g[i]);
        w_num = stoi(w[i]);
        if(w_num > wins)
        {
            teams.push_back(names.at(i));
        }
        else if(w_num == wins)
        {
            if(g_num >= goals)
            {
                teams.push_back(names.at(i));
            }
        }
    }
    if (teams.size() > 0)
    {
        cout << "Qualified teams are" << endl;
        for (int i = 0; i < int(teams.size()); i++)
        {
            cout << teams[i] << endl;
        }
    }
    else
    {
        cout << "No qualifying teams found" << endl;
    }
    return teams;
}

int main()
{
    int wins;
    int goals;
    string filename;
    cout << "Enter teamscores filename" << endl;
    getline(cin, filename);
    cout << "Enter number of wins required" << endl;
    cin >> wins;
    cout << "Enter number of goals scored for tie-breaker" << endl;
    cin >> goals;
    teamsInTournament(filename, wins, goals);
    return 0;
}
