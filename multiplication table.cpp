#include<iostream>
#include <conio.h>
using namespace std;
int main(){
	 int num=1,range;
    cout << "Enter the number :" << endl;
    cin>>num;
    cout << "Enter the range :" << endl;
    cin>>range;
    for(int i=1; i<=range; i++){
        cout<<num<<"x"<<i<<"="<<num*i<< endl;;
    }
    getch();
    return 0;

	
}
