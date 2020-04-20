#include <iostream>
using namespace std;
int main(){
	double N, score, total, totalScore=0, totalGrade=0, GRADE;

cout<<"How many excersices will be scored?\n";
cin>>N;

for(int n=1; n<=N ; n++)
{
cout<<"Enter score recieved for exercise # ";
cin>>score;
cout<<"Enter the max total for score # ";
cin>>total;

}

totalScore = totalScore + score;
totalGrade = totalGrade + total;
GRADE = (totalScore/totalGrade)*100;
cout<<"Your total is "<<totalScore<<" out of "<<totalGrade<<flush;
cout<<", or "<<GRADE<<"%\n";

return 0;
}
