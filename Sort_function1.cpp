#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Ŭ������ �����ϴ� ����� ���α׷��� �ӵ� ���鿡�� ���� �����ʴ�.
//Ŭ������ �̿��ϴ� ����� �ǹ����� ������ ����̴�.
//���α׷��� ��ȸ�� ���� ���� ������ �ʿ��� ���� ���(pair)���̺귯���� ����ϴ� ���� ȿ����

int main() {
	//������ 2���� �� '�� ��'�� ������ �������� �����ϴ� ���
	vector<pair<int, string>> v;
	v.push_back(pair < int, string>(70, "ȫ����"));
	v.push_back(pair < int, string>(30, "���輺"));
	v.push_back(pair < int, string>(50, "������"));
	v.push_back(pair < int, string>(90, "������"));

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].second << endl;
	}
	return 0;
}