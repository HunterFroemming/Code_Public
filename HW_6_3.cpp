#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>

using namespace std;

int keywordThreshold(string keyword_file, string keyword_threshold[][2])
{
    ifstream file(keyword_file);
    int count1 = 0;
    int count2 = 0;
    if(file.is_open())
    {
        string keyword;
        string threshold;
        while (getline(file, keyword))
        {
            stringstream ss(keyword);
            while (getline(ss, keyword, ' '))
            {
                stringstream ss(keyword);
                keyword_threshold[count1][0] = keyword;
                count1++;
                break;
            }
            while (getline(ss, threshold, '\n'))
            {
                stringstream ss(threshold);
                keyword_threshold[count2][1] = threshold;
                count2++;
                break;
            }
        }
    }
    else
    {
        cout << "Failed to open keyword file" << endl;
        return 0;
    }
    int keyword_size = count1;
    return keyword_size;
}
bool countFilter(string email_file, string keyword_threshold[][2], int keyword_count[], int keyword_size)
{
    vector<string> vec1;
    ifstream file(email_file);
    string line;
    string word;
    int count = 0;
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream ss(line);
            while(getline(ss, word, ' '))
            {
                vec1.push_back(word);
            }
        }
    }
    else
    {
        cout << "Failed to open email file" << endl;
        return false;
    }
    for (int i = 0; i < keyword_size; i++)
    {
        count = 0;
        for (int j = 0; j < int(vec1.size()); j++)
        {    
            if (keyword_threshold[i][0] == vec1[j])
            {
                count++;
                keyword_count[i] = count;
            }
        }
    }
    return true;
}
bool checkSpam(int keyword_count[], string keyword_threshold[][2], int keyword_size)
{
    int num = 0;
    int count = 0;
    for (int i = 0; i < keyword_size; i++)
    {
        num = stoi(keyword_threshold[i][1]);
        if (keyword_count[i] >= num)
        {
            count ++;
        }
    }
    if (count == keyword_size)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string keyword_threshold[3][2] = {};
    int keyword_count[3] = {};
    int keyword_size = keywordThreshold("keywords1.txt", keyword_threshold);
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << setw(6) << keyword_threshold[i][j];
        }
        cout << endl;
    }
    countFilter("email_spam.txt", keyword_threshold, keyword_count, keyword_size);
    checkSpam(keyword_count, keyword_threshold, keyword_size);
    return 0;
}