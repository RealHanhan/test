//Header of BMI
#ifndef BMI_H
#define BMI_H
#include<string>
using namespace std;
//prototype of BMICal::BMI
class BMICal
{
public:
	void setBMI(double, double);
	double BMIpre;
	string s;
private:
	double BMIval;
	double heights;
	double weights;
};
#endif
