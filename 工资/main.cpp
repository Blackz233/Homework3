#include <iostream>
using namespace std;
int main() {
	double worktime, wageph, Wage;//����ʱ�䣬ÿСʱ���ʣ����㹤��
	cout << "Please input employee's work time and wage_per_hour:" << endl;
	cin >> worktime >> wageph;//���빤��ʱ���ÿСʱ����

	if (worktime<0 || worktime>144)//�жϹ���ʱ���Ƿ���ȷ
		cout << "please input true worktime" << endl;
	else
		if (worktime <= 40)//�ж�ʱ��С�ڵ���40Сʱ
			Wage = worktime * wageph;
		else
			if (worktime <= 60)//�ж�ʱ��С�ڵ���60Сʱ
				Wage = ((worktime - 40)*1.5 + 40)*wageph;
			else  //ʱ�����60Сʱ�����
				Wage = (((worktime - 60)*3.0 + (60 - 40)*1.5) + 40)*wageph;
	cout << "The employee's wage: " << Wage << endl;//������㹤��
}