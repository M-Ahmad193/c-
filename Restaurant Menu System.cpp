#include<conio.h>
#include <iostream>
using namespace std;

using std::cout;
using std::cin;
using std::endl;

main()
{
    
    int a = 600, b = 700, y, c, d, e, f, g, h, i, j, k, l,rs, total;
    char order, loop;


    cout << "=====================" << endl;
    cout << "        MENU" << endl;
    cout << "=====================" << endl;
    cout << endl;
    cout << "Dishes:" << endl;
    cout << "(A) Sweet and Sour Pork  600.00" << endl;
    cout << "(B)Chicken tikka  and Chole bhature 700.00" << endl;

    do {
        cout << "What do you want to order?" << endl;
        cin >> order;
        

        switch (order) {
        case 'a':
        case 'A':
            cout << "You ordered Sweet and Sour Pork";
            break;
        case 'b':
        case 'B':
            cout << "You Ordered Chicken tikka  and Chole bhature";
            break;
        default:
            cout << "Invalid Entry";
            break;
        }
        
        cout << " How many order?" << endl;
        if (order=a)
        rs=600;
        else if(order=b)
        rs=700;
        cin >> b;
        c = rs * b;
        
        cout << "Your total bill Total Bill is " << c << endl;
        cout << "Order Again? Y/N";
        cin >> loop;

    } while (loop == 'Y' || loop == 'y');

    total = c * 0.6;
    cout << "Thank You, Your Total Bill + Service Charge is " << total << endl;
    getch();
    return 0;
}
