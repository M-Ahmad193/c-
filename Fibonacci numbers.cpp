#include <iostream>

using namespace std;

int main()
{
    const int TIME_PERIOD = 5 ; 
    cout << "Hello, this program will tell you how big your green crud " <<
    		"population will grow in a certain number of days.\n\n";

    double initialSize;
    char answer; 
    do
    {
        cout << "Please enter the initial weight (in pounds) of your population of green crud: ";
        cin >> initialSize;
        cout << "\n";

        int num_of_days;
        cout << "Now, please enter the number of days your green crud population will grow: ";
        cin >> num_of_days;
        int count = num_of_days / TIME_PERIOD;
        cout << "\n----------------------------------------------------------------------------------" << endl;
        cout << "Result:\n";

        double f_1 = 0;
        double f_2 = initialSize;

        for(int i = 0 ; i < count ; i++)
        {
            // fibonacci code.
            double temp = f_1 + f_2 ;
            f_1 = f_2 ;
            f_2 = temp ;
        }

        //outputting
        cout << "\nAfter " << num_of_days << " days, your green crud population will have grown to be "
                  << f_2 << " lbs.\n\n";
        cout << "----------------------------------------------------------------------------------\n";

        //asking user to calculate again
        cout << "\nWould you like to try a different weight? Please enter Y for Yes or N for No. ";
        cin >> answer;
    }
    while ( answer == 'y' || answer == 'Y' );

    cout << "\nProgram Terminated.\n" ;
    return 0;
}

