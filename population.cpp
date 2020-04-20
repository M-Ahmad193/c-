#include <iostream>

using namespace std;

int main()
{
    int popA, popB, year = 1; 
    double growth_rateA, growth_rateB; 

    cout << "Enter the population and growth rate of Town A: ";
    cin >> popA >> growth_rateA;
    cout << endl;

    cout << "Enter the population and growth rate of Town B: ";
    cin >> popB >> growth_rateB;
    cout << endl;

    if (popA < popB && growth_rateA > growth_rateB)
    {
        {   
        do {
                (popA = ((growth_rateA / 100) * popA) + popA); 
                (popB = ((growth_rateB / 100) * popB) + popB);
                year++;
            }

            while (popA < popB);

            cout << "Town A will surpass Town B in population after " << year << " years.\n" << endl;
            cout << "The final population of Town A is: " << popA << ".\n" << endl;
            cout << "The final population of Town B is: " << popB << ".\n" << endl;
        }
    }
    else
    {
        cout << "Invalid Data.";
    }

    system("pause");
    return 0;
}
