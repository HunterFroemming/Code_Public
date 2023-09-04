#include<iostream>

using namespace std;

int main()
    {
    int iron, bronze, silver, gold, iron_r, bronze_r, silver_r;

    cout << "Enter the number of iron coins: " << endl;
    cin >> iron;
    
    bronze = iron / 3;
    iron_r = iron - (bronze*3);
    silver = bronze / 13;
    bronze_r = bronze - (silver*13);
    gold = silver / 23;
    silver_r = silver - (gold*23);

    cout << gold << " gold coin(s) " << silver_r << " silver coin(s) " << bronze_r << " bronze coin(s) " << iron_r << " iron coin(s)";
    
    return 0;
    }