//quiz5
#include<iostream>

using namespace std;

double circa(double rad);

int main() {

	cout << "question 1)" << endl;
	for (int i = 60; i >= -20; i -= 5)
		cout << i << " ";

	cout << endl << endl;
	cout << "question 2)" << endl;

	int g = 60;
	while (g >= -20) {

		cout << g <<" ";
		g -= 5;

	}


	cout << endl << endl;
	cout << "question 3)" << endl;

	cout << "enter number" << endl;
	double input;
	cin >> input;
	
	cout<<"area is " << circa(input) << endl;



}



double circa(double rad) {
	double sus = rad;

	rad = 3.1416 * (sus * sus);

	return rad;



}
