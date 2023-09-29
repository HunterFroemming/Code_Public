#include<iostream>
using namespace std;
int purchaseTruck(int budget);
int main()
{
    int budget = 81350;
    
    cout << "These are the trucks available for purchase:" << endl;
    cout << "Truck model 1: Ford F-150. Price: $26,900" << endl;
    cout << "Truck model 2: Dodge RAM 1500. Price: $21,400" << endl;
    cout << "Truck model 3: Chevy Silverado. Price: $24,700" << endl;
    cout << "Truck model 4: Toyota Tundra. Price: $31,200" << endl;
    cout << "Truck model 5: GMC Sierra 1500. Price: $28,300" << endl;
    purchaseTruck(budget);
}   
    
int purchaseTruck(int budget)
{   
    
    int num_1 = 0;
    int num_2 = 0;
    int num_3 = 0;
    cout << "Please enter a number from 1 to 5:" << endl;
    cin >> num_1;
    if((num_1 != 1) && (num_1 != 2) && (num_1 != 3) && (num_1 != 4) && (num_1 != 5))
    {
        cout << "Invalid input!" << endl;
    }
    if (num_1 == 1)
    {
        budget = budget - 26900;
        cout << "Congratulations! You have purchased a Ford F-150" << endl;
    }
    else if (num_1 == 2)
    {
        budget = budget - 21400;
        cout << "Congratulations! You have purchased a Dodge RAM 1500" << endl;
    }
    else if (num_1 == 3)
    {
        cout << "Congratulations! You have purchased a Chevy Silverado" << endl;
        budget = budget - 24700;
    }
    else if (num_1 == 4)
    {
        cout << "Congratulations! You have purchased a Toyota Tundra" << endl;
        budget = budget - 31200;
    }
    else if (num_1 == 5)
    {
        cout << "Congratulations! You have purchased a GMC Sierra 1500" << endl;
        budget = budget - 28300;
    }
    cout << "Please enter a number from 1 to 5:" << endl;
    cin >> num_2;
    if((num_2 != 1) && (num_2 != 2) && (num_2 != 3) && (num_2 != 4) && (num_2 != 5))
    {
        cout << "Invalid input!" << endl;
    }
    if (num_2 == 1)
    {
        budget = budget - 26900;
        cout << "Congratulations! You have purchased a Ford F-150" << endl;
    }
    else if (num_2 == 2)
    {
        budget = budget - 21400;
        cout << "Congratulations! You have purchased a Dodge RAM 1500" << endl;
    }
    else if (num_2 == 3)
    {
        cout << "Congratulations! You have purchased a Chevy Silverado" << endl;
        budget = budget - 24700;
    }
    else if (num_2 == 4)
    {
        cout << "Congratulations! You have purchased a Toyota Tundra" << endl;
        budget = budget - 31200;
    }
    else if (num_2 == 5)
    {
        cout << "Congratulations! You have purchased a GMC Sierra 1500" << endl;
        budget = budget - 28300;
    }
    if (budget >= 31200)
    {
        cout << "Please enter a number from 1 to 5:" << endl;
        cin >> num_3;
        if((num_3 != 1) && (num_3 != 2) && (num_3 != 3) && (num_3 != 4) && (num_3 != 5))
        {
            cout << "Invalid input!" << endl;
        }
        if (num_3 == 1)
        {
            budget = budget - 26900;
            cout << "Congratulations! You have purchased a Ford F-150" << endl;
        }
        else if (num_3 == 2)
        {
            budget = budget - 21400;
            cout << "Congratulations! You have purchased a Dodge RAM 1500" << endl;
        }
        else if (num_3 == 3)
        {
            cout << "Congratulations! You have purchased a Chevy Silverado" << endl;
            budget = budget - 24700;
        }
        else if (num_3 == 4)
        {
            cout << "Congratulations! You have purchased a Toyota Tundra" << endl;
            budget = budget - 31200;
        }
        else if (num_3 == 5)
        {
            cout << "Congratulations! You have purchased a GMC Sierra 1500" << endl;
            budget = budget - 28300;
        }
        else
        {
            return 0;
        }
    }
    else 
    {
        return 0;
    }

    return budget;
}