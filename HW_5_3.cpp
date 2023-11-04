#include<iostream>
#include<string>
#include<vector>

using namespace std;

void mostPopularWord(string words[], const int WORD_SIZE)
{
    string Mode;
    string answer;
    int maxCount = 0;
    vector<int> pos = {};
    for (int i = 0; i < WORD_SIZE; i++)
    {
        // count must be inside so it gets reset to 0 after each iterration
        int count = 0;
        for (int j = 0; j < WORD_SIZE; j++)
        {
            Mode = words[i];
            if (Mode == words[j])
            {
                count++;
            }
            if (count >= maxCount)
            {
                answer = Mode;
                maxCount = count;
            }
        }
        
    }
    cout << "The most popular word : " << answer << endl;
    cout << "Frequency : " << maxCount << endl;
    cout << "Found at pos : " << endl;
    for(int i = 0; i < WORD_SIZE; i++)
    {
        if (words[i] == answer)
        {
            pos.push_back(i);
        }
    }
    for (int i = 0; i < pos.size(); i++)
    {
        cout << pos[i] << endl;
    }
    
}
int main()
{
    const int SIZE = 4;
    string words[SIZE];
    cout << "Enter words in array" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> words[i];
    }
    mostPopularWord(words, 6);
    return 0;
}