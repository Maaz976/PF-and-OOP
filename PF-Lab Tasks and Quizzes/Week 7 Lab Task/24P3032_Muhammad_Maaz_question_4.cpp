#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout << "Please enter the Score: " ;
	cin >> marks ;
	if (marks>100 || marks < 0 ) cout << "Invalid input!" << endl;
	else if (marks >= 90) cout << "Your grade is A.\n\nExcellent work" << endl;
	else if (marks>=80 && marks <90 ) cout << "Your grade is B.\n\nGood Job! Keep Improving." << endl;
	else if (marks>=70 && marks <=79) cout << "Your grade is C.\n\nFair Effort, But room for improvement." << endl;
	else if (marks>=60 && marks <69) cout << "Your grade is D. You have passed but consider revising your material." << endl;
	else cout << "Your grade is F. Unfortunately, you have failed but better luck next time!" << endl;
	return 0;
}
