#include <iostream>
#include <cmath>
#include <string>
using namespace std;
/*Simple BMI Calculator wew
* BMI Range source: Furey, Edward "BMI Calculator (Body Mass Index)" at https://www.calculatorsoup.com/calculators/health/bmi-calculator.php from CalculatorSoup, https://www.calculatorsoup.com - Online Calculators
* these are general ranges.
*/

float bmiCalc(char metric, float weight, float height)
{
	switch (metric)
	{
	case 'm': return weight / pow(height, 2);
		break;
	case 'u': return (weight / pow(height, 2)) * 703;
		break;
	}
}

int main()
{
	float weight, height, bmi;
	char metric = 'z';
	cout << "Enter the metric system you want to use (m = metric, u = US units)";
	while (metric != 'm' && metric != 'u')
	{
		cin >> metric;
		if (!isalpha(metric))
			cout << "Invalid input. Please enter m or u for a metric";
		else
			metric = tolower(metric);
	}

	switch (metric)
	{
	case 'm': 	cout << "Enter your weight in Kg and your height in Meters Pls: ";
		break;
	case 'u': 	cout << "Enter your weight in Lbs and your height in Inches Pls: ";
		break;
	}
	cin >> weight >> height;
	bmi = bmiCalc(metric, weight, height);

	if (bmi < 16)
		cout << "You're Severely Underweight" << endl;
	else if (bmi > 16 && bmi < 18.4)
		cout << "You're Underweight" << endl;
	else if (bmi > 18.5 && bmi < 24.9)
		cout << "You have a Normal Weight" << endl;
	else if (bmi > 25 && bmi < 29.9)
		cout << "You're Overweight" << endl;
	else if (bmi > 30 && bmi < 34.9)
		cout << "You're Moderately Obese" << endl;
	else if (bmi > 35 && bmi < 39.9)
		cout << "You're Severely Obese" << endl;
	else if (bmi > 40)
		cout << "You're Morbidly Obese" << endl;
	cout << "Your BMI is: " << bmi;
	system("pause>0");
}