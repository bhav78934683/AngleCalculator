//  Angle Calculator
#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double angle; // To hold the angle
	
	// Get the angle from the user.
	cout << "Enter an angle ";
	cin >> angle;
	angle = angle *M_PI/180;

	// Display the sine, cosine, and tangent of the angle.
	cout << setprecision(2) << fixed << showpoint
		 << "\nSine:    " << setw(8) << sin(angle)
		 << "\nCosine:  " << setw(8) << cos(angle)
		 << "\nTangent: " << setw(8) << tan(angle)
		 << endl << endl;
	
	
	return 0;
}