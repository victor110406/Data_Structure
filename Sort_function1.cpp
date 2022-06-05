#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//클래스를 정의하는 방식은 프로그래밍 속도 측면에서 별로 좋지않다.
//클래스를 이용하는 방식은 실무에서 적합한 방식이다.
//프로그래밍 대회와 같이 빠른 개발이 필요할 때는 페어(pair)라이브러리를 사용하는 것이 효율적

int main() {
	//변수가 2개일 떄 '한 개'의 변수를 기준으로 정렬하는 방법
	vector<pair<int, string>> v;
	v.push_back(pair < int, string>(70, "홍원산"));
	v.push_back(pair < int, string>(30, "조계성"));
	v.push_back(pair < int, string>(50, "전승윤"));
	v.push_back(pair < int, string>(90, "국승재"));

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].second << endl;
	}
	return 0;
}