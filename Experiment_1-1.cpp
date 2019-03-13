#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	double Box= 250;
	double side=150;
	double pre=50;
	double gen=25;
	cout<< fixed<< showpoint;
	cout << "The Ball Game"<< endl;
	cout << " The Number of tickets sold for Box at P250" << endl;
	cin >> Box; 
	cout << "Total price of Box tickets"  << "         " << "P" << setprecision (2)<<250*Box << endl;
	cout << " " << endl;
	cout << " The Number of tickets sold for SideLine at P100" << endl;
	cin >> side; 
	cout << "Total price of SideLine tickets"  << "         " << "P" << setprecision (2)<<100*side << endl;
	cout << " " << endl;
	cout << " The Number of tickets sold for Premium at P50" << endl;
	cin >> pre; 
	cout << "Total price of Premium tickets"  << "         " << "P" << setprecision (2)<<50*pre << endl;
	cout << " " << endl;
	cout << " The Number of tickets sold for General Admision at P25" << endl;
	cin >> gen; 
	cout << "Total price of General Admission tickets"  << "         " << "P" << setprecision (2)<<25*gen << endl;
	cout << " " << endl;
	cout << " Total Sale Amount = "<< setprecision (2)<<250*Box+100*side+50*pre+25*gen  << endl;
	

	_getch(); 
	return 0;
}