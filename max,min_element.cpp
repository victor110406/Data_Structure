#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//배열이나 벡터의 최대,최소값을 구하는 함수인
//max_element(),min_element()함수가 존재
//이 함수는 값 자체를 리턴하지 않고 그 값의 주소를 리턴한다.

int main() {
	int num;
	cin >> num;
	int* arr = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	cout << "max값: " << *max_element(arr, arr + num) << endl;
	cout << "min값: " << *min_element(arr, arr + num) << endl;
	delete[] arr;

	int size, val;
	cin >> size;
	vector<int> v;
	for (int i = 0; i < size; i++) {
		cin >> val;
		v.push_back(val);
	}
	cout << "max값: " << *max_element(v.begin(), v.end()) << endl;
	cout << "min값: " << *min_element(v.begin(), v.end()) << endl;

	return 0;
}