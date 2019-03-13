#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << showpoint;
	double M;
	cout << "Input Mass: " << endl;
	cin >> M;
	cout << " " << endl;
	double D;
	cout << "Input Density: " << endl;
	cin >> D; 
	cout << " " << endl;
	cout << "Mass: " << setprecision(2) << M << " g" << endl;
	cout << " " << endl;
	cout << "Density: " << setprecision(2) << D << " g/cm^3" << endl;
	cout << " " << endl;
	cout << "Volume: " << setprecision(2) << M / 4 * D << " cm^3" << endl;
	cout << " " << endl;
	_getch();
	return 0;
}