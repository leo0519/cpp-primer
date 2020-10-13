#include <iostream>

const double inch_per_feet = 12;
const double meter_per_inch = 0.0254;
const double kilogram_per_pound = 1 / 2.2;

int main() {
	using namespace std;

	double height_feet, weight_pound, height_meter, weight_kilogram;
	cout << "Enter your height in feet: ";
	cin >> height_feet;
	cout << "Enter your weight in pounds: ";
	cin >> weight_pound;
	height_meter = meter_per_inch * inch_per_feet * height_feet;
	weight_kilogram = kilogram_per_pound * weight_pound;
	cout << "Your BMI is ";
	cout << weight_kilogram / (height_meter * height_meter);
	cout << endl;

	return 0;
}
