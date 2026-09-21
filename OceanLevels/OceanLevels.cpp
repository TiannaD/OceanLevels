#include <iostream>
using namespace std;

//This program calculates ocean level increase over several years

const double risePerYear = 1.5;
double riseIn5Years;
double riseIn7Years;
double riseIn10Years;

int main() {

	riseIn5Years = risePerYear * 5;
	riseIn7Years = risePerYear * 7;
	riseIn10Years = risePerYear * 10;

	cout << "Ocean level increase after 5 years: " << riseIn5Years << "mm\n";
	cout << "Ocean level increase after 7 years: " << riseIn7Years << "mm" << endl;
	cout << "Ocean level increase after 10 years: " << riseIn10Years << "mm" << endl;



	return 0;
}