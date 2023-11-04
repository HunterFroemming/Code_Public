#include<iostream>
#include<vector>
#include<iomanip>
#include<cmath>
#include<algorithm>

using namespace std;

double addProduct(double budget)
{   
    char choice;
    cout << "Add Product:\nA) Cheetos\nB) Oreos\nC) Coffee\nD) Slurpee" << endl;
    cin >> choice;
    cin.clear();
    cin.ignore(100000, '\n');
    if (choice == 'A')
    {
        budget = (budget - (3.2591));
    }
    else if (choice == 'B')
    {
        budget = (budget - (3.6951));
    }
    else if (choice == 'C')
    {
        budget = (budget - (4.1311));
    }
    else if (choice == 'D')
    {
        budget = (budget - (4.6761));
    }
    else
    {
        cout << "Invalid input." << endl;
    }
    return budget;
}

vector<string> removeProduct(vector<string> vec1, string c)
{
    bool found = false;
    for (int i = 0; i < vec1.size(); i++)
    {
        if(!found)
        {
            if (c == vec1[i])
            {
                cout << c << " removed from cart." << endl;
                for (int j = i + 1; j < vec1.size(); j++)
                {
                    vec1[j - 1] = vec1[j];
                }
                vec1.pop_back();
                found = true;
            }
        }
    }
    if (found == false)
    {
        cout << "Product Name not found." << endl;
    }
    return vec1;
}
void checkout(vector<string> vec2)
{
    double sum = 0;
    if(vec2.size() <= 0)
    {
        cout << "Cart is empty." << endl;
    }
    else
    {
        cout << "Your cart has the following products:" << endl;
        for (int i = 0; i < vec2.size(); i++)
        {
            cout << vec2[i] << endl;
            if(vec2[i] == "Cheetos")
            {
                sum = sum + (2.99 + (2.99 * .09));
            }
            else if(vec2[i] == "Oreos")
            {
                sum = sum + (3.39 + (3.39 * .09));
            }
            else if(vec2[i] == "Coffee")
            {
                sum = sum + (3.79 + (3.79 * .09));
            }
            else if(vec2[i] == "Slurpee")
            {
                sum = sum + (4.29 + (4.29 * .09));
            }
        }
        cout << "Total amount: $" << fixed << setprecision(3) << sum << endl;
        cout << "Thank you! Please visit again." << endl;
    }
    
}

int main()
{
    double O_budget = 0;
    double budget = 0;
    int choice = 0;
    string s;
    string c;
    vector<string> vec1 = {};
    vector<string> vec2 = {};
    cout << "Welcome to Kroga Gas Station!" << endl;
    cout << "Enter your budget: " << endl;
    cin >> O_budget;
    cin.clear();
    cin.ignore(100000, '\n');
    if (O_budget <= 0)
    {
        cout << "Invalid input. Balance must be a non-negative value." << endl;
        return 0;
    }
    while(choice != 4)
    {
        cout << "Please input 1-4 followed by enter to navigate the menu:" << endl;
        cout << "1) Add Product\n2) Remove Product\n3) Checkout\n4) Exit" << endl;
        cin >> choice;
        cin.clear();
        cin.ignore(100000, '\n');
        budget = O_budget;
        if (choice == 1)
        {
            if (O_budget < 3.2591)
            {
                cout << "Your budget is insufficient to add more products." << endl;
            }
            else
            {
                budget = addProduct(budget);
                if (O_budget == (budget + 4.6761))
                {
                    cout << "Slurpee added to cart." << endl;
                    s = "Slurpee";
                    vec1.push_back(s);
                    O_budget = O_budget - 4.6761;
                }
                else if(O_budget == (budget + 4.1311))
                {
                    cout << "Coffee added to cart." << endl;
                    s = "Coffee";
                    vec1.push_back(s);
                    O_budget = O_budget - 4.1311;
                }
                else if(O_budget == (budget + 3.6951))
                {
                    cout << "Oreos added to cart." << endl;
                    s = "Oreos";
                    vec1.push_back(s);
                    O_budget = O_budget - 3.6951;
                }
                else if(O_budget == (budget + 3.2591))
                {
                    cout << "Cheetos added to cart." << endl;
                    s = "Cheetos";
                    vec1.push_back(s);
                    O_budget = O_budget - 3.2591;
                }
                vec2 = vec1;
                continue;
            }
            
        }
        else if (choice == 2)
        {
            cout << "Enter the product name to be removed from the cart:" << endl;
            cin >> c;
            if (vec1.size() <= 0)
            {
                cout << "Cart is empty." << endl;
                continue;
            }
            else
            {
                vec2 = removeProduct(vec1, c);
                vec1 = vec2;
                if(c == "Slurpee")
                {
                    O_budget = O_budget + 4.6761;
                }
                else if(c == "Coffee")
                {
                    O_budget = O_budget + 4.1311;
                }
                else if(c == "Oreos")
                {
                    O_budget = O_budget + 3.6951;
                }
                else if(c == "Cheetos")
                {
                    O_budget = O_budget + 3.2591;
                }
            }
            
            continue;
    
        }
        else if (choice == 3)
        {
            if (vec1.size() <= 0)
            {
                cout << "Cart is empty." << endl;
                continue;
            }
            else if (vec2.size() <= 0)
            {
                vec2 = vec1;
            }
            if(vec2.size() <= 0)
            {
                cout << "Cart is empty." << endl;
                continue;
            }
            checkout(vec2);
            choice = 4;
        }
        else if(choice == 4)
        {
            cout << "Thank you! Please visit again." << endl;
        }
        else
        {
            cout << "Invalid input." << endl;
        }
    }
}