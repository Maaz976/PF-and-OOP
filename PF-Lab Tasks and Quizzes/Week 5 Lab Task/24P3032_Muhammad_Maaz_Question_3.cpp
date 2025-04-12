#include<iostream>
using namespace std;
int main()
{ 
	int your_score; 
	cout<<"This program reads the score of student and display his grade accordingly\n Please enter your grades: ";
	cin>>your_score;
	if (your_score>=90) cout<<"Your grade is A+";
	if (your_score<=89 && your_score>80) cout<<"Your grade is A";
	if (your_score<=79 && your_score>70) cout<<"Your grade is B";
	if (your_score<=69 && your_score>60) cout<<"Your grade is C";
	if (your_score<=59 && your_score>50) cout<<"Your grade is D";
	if (your_score<50) cout<<"Your grade is F";
	return 0;
}
