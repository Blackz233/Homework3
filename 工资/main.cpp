#include <iostream>
using namespace std;
int main() {
	double worktime, wageph, Wage;//工作时间，每小时工资，结算工资
	cout << "Please input employee's work time and wage_per_hour:" << endl;
	cin >> worktime >> wageph;//输入工作时间和每小时工资

	if (worktime<0 || worktime>144)//判断工作时间是否正确
		cout << "please input true worktime" << endl;
	else
		if (worktime <= 40)//判断时间小于等于40小时
			Wage = worktime * wageph;
		else
			if (worktime <= 60)//判断时间小于等于60小时
				Wage = ((worktime - 40)*1.5 + 40)*wageph;
			else  //时间大于60小时的情况
				Wage = (((worktime - 60)*3.0 + (60 - 40)*1.5) + 40)*wageph;
	cout << "The employee's wage: " << Wage << endl;//输出结算工资
}