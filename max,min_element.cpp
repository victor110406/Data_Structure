#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//�迭�̳� ������ �ִ�,�ּҰ��� ���ϴ� �Լ���
//max_element(),min_element()�Լ��� ����
//�� �Լ��� �� ��ü�� �������� �ʰ� �� ���� �ּҸ� �����Ѵ�.

int main() {
	int num;
	cin >> num;
	int* arr = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	cout << "max��: " << *max_element(arr, arr + num) << endl;
	cout << "min��: " << *min_element(arr, arr + num) << endl;
	delete[] arr;

	int size, val;
	cin >> size;
	vector<int> v;
	for (int i = 0; i < size; i++) {
		cin >> val;
		v.push_back(val);
	}
	cout << "max��: " << *max_element(v.begin(), v.end()) << endl;
	cout << "min��: " << *min_element(v.begin(), v.end()) << endl;

	return 0;
}