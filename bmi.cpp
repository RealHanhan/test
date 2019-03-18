//e24076035簡成翰
//lab2
//Mar 13 2019
//revision
#include<iostream>
#include<iomanip>	//std::setprecision
#include<string>	//std::string
#include <sstream>	//control decimal digit when output as string
#include"bmi.h"		//my head
using namespace std;

void BMICal::setBMI(double h, double w) {
	//calculation
	while (h == 0) {
		continue;
	}
	h = h / 100;
	BMIval = w / (h*h);
	double vec = BMIval;
	//count to second digit after decimals
	//categorize BMIs
	//comparison
	BMIpre = BMIval;
	stringstream sstr;
	string str;
	string num;
	sstr << setprecision(4) << BMIval;
	sstr >> num;
	s = str;
	if (BMIval < 15) {
		str.assign("\tAbysmally-underweight！\n");
		cout << num << setw(3) << str;
		s = str;
	}
	else if (15 <= BMIval && BMIval < 16) {
		str.assign("\tSeverely-underweight！\n");
		cout << num << setw(3) << str;
		s = str;
	}
	else if (16 <= BMIval && BMIval < 18.5) {
		str.assign("\tUnderweight！\n");
		cout << num << setw(3) << str;
		s = str;
	}
	else if (18.5 <= BMIval && BMIval < 25) {
		str.assign("\tNormal.\n");
		cout << num << setw(3) << str;
		s = str;
	}
	else if (25 <= BMIval && BMIval < 30) {
		str.assign("\tOverweight！\n");
		cout << num << setw(3) << str;
		s = str;
	}
	else if (30 <= BMIval && BMIval < 35) {
		str.assign("\tObese Class I (Moderately obese)！\n");
		cout << num << setw(3) << str;
		s = str;
	}
	else if (35 <= BMIval && BMIval < 40) {
		str.assign("\tObese Class II (Severely obese)！\n");
		cout << num << setw(3) << str ;
		s = str;
	}
	else if (BMIval >= 40) {
		str.assign("\tObese Class III (Abysmally obese)！\n");
		cout << num << setw(3) << str;
		s = str;
	}
}




