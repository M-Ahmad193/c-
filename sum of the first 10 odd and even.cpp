#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{

    int sum_even,sum_odd,N,i;

    sum_even = 0;

    sum_odd = 0;
	N = 20;

    for(i = 1;i<=N;i++)
    {

    if((i % 2) == 0)
    {

        sum_even = sum_even + i;

    }
    else
    {

        sum_odd = sum_odd + i;

    }

}

    for(i=0;i<35;i++)
    printf("_"); printf("\n\n");

    cout <<"Th sum of 10 evens are"<< "\t" << sum_even << endl;

    cout << "The sum of 10 odd are"<<"\t" << sum_odd << endl;

    for(i=0;i<35;i++)
    printf("_"); printf("\n\n");

    getch();

    return 0;

}
