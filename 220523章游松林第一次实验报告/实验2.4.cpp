#include<iostream>
using namespace std;

int main()
{
	cout << "�����������" << endl;
	char a;
	cin >> a;
	cout << "����������" << endl;
	double b, c;
	cin >> b >> c;

	if (a == '+') {
		cout<< b + c;
	}
	else if (a == '-') {
		cout<< b - c;
	}
	else if (a == '*') {
		cout<< b * c;
	}
	else if (a == '/' && c != 0) {
		cout<< b / c;
	}
	else if (a == '%') {
		cout<< (int)b % (int)c;
	}
	else {
		cout << "wrong";
	}

	return 0;
}