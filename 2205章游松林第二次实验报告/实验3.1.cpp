#include<iostream>
using namespace std;
int gcd(int a, int b) {
	return b ? gcd(b, a % b) : a;
}

int main() {
	cout << "������������Ȼ��" << endl;
	int a, b;
	cin >> a >> b;
	cout << "����������" << endl;
	int c = gcd(a, b);
	cout << c << endl;
	cout << "�����С������" << endl;
	cout << a / c * b << endl;
	return 0;
}