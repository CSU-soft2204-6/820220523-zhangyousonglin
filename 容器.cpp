#include<iostream>
#include<map>
#include<queue>
#include<vector>
using namespace std;

int main()
{
	queue<double>scorequeue;
	vector<double>scorevector;
	map<int, double> score_map;
	score_map.emplace(3, 90.0);
	cout << "ѧ��Ϊ3�ĳɼ�" << score_map[3] << endl;
	scorequeue.push(3.0);
	scorevector.push_back(3.0);
	int size_1;
	cin >> size_1;
	for (int i = 0; i < size_1; i++) {
		double t;
		cin >> t;
		scorevector.push_back(t);
		cout << "������С" << scorevector.size() << endl;
		cout << "��������" << scorevector.capacity() << endl;
	}
	for (int i = 0; i < scorevector.size(); i++) {
		cout << "Ԫ��" << i << "��ֵΪ:" << scorevector[i] << endl;
	}
	int i = 0;
	vector<double>::iterator vector_it;
	for (vector_it = scorevector.begin(); vector_it != scorevector.end(); vector_it++) {
		cout << "Ԫ��" << ++i << "��ֵΪ:" << *vector_it << endl;

	}
	while (!scorevector.empty()) {
		double t = scorevector.back();
		scorevector.pop_back();
		cout << "����" << t << endl;
	}
	cout << "������С" << scorevector.size() << endl;
	cout << "��������" << scorevector.capacity() << endl;
	return 0;
}