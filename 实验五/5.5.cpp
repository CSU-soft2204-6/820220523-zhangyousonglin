#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
vector<int> intersection(vector<int>& v1, vector<int>& v2) {
	vector<int>v;
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v));
	return v;
}
void print_vector(vector<int> v) {
	if (v.size() > 0) {
		cout << "����Ϊ��";
		for (int i = 0; i<int(v.size()); i++) {
			cout << v[i] << " ";
		}
	}
	else {
		cout << "����Ϊ�ռ�";
	}
}
int main() {
	vector<int>v1, v2, v;
	cout << "�����һ������Ԫ�أ�" << endl;
	for (int i = 0; i < 5; i++) {
		int t = 0;
		cin >> t;
		v1.push_back(t);
	}
	cout << "����ڶ�������Ԫ�أ�" << endl;
	for (int i = 0; i < 5; i++) {
		int t = 0;
		cin >> t;
		v2.push_back(t);
	}
	v = intersection(v1, v2);
	print_vector(v);
	return 0;
}