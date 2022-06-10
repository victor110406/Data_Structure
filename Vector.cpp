#include<iostream>
#include<vector>
using namespace std;
//vector를 생성하면 heap에 생성되며 동적할당이된다.
//속도적인 측면에서 배엘에 비해 성늘이 떨어지지만 메모리를 효율적으로 관리하는 예외처리가 쉽다.

int main() {

	//vector<자료형> 변수명(숫자)
	//숫자만큼 백터 생성 후 0으로 초기화
	vector<int> v(5);

	//vector<자료형> 변수명 = {변수1, 변수2, 변수3...}
	//백터 생성 후 오른쪽 변수 값으로 초기화
	vector<int> v = { 10,20,30 };

	//vector<자료형>변수명[]={,}
	//백터 배열선언 및 초기화
	vector<int>v[] = { { 1, 2}, {3, 4} };

	//vector<vector<자료형>변수명
	//2차원 백터 생성(열과 행 모두 가변)
	vector<vector<int>> v;

	//vector<자료형>변수명.assign(범위,초기화할 값)
	//백터의 범위 내에서 해당 값으로 초기화
	vector<int> v = { 1, 2, 3, 4, 5 };   
	v.assign(5, 10);

	//v.begin() 
	//백터 시자점의 주소 값 반환

	//v.end()
	//백터 (끝부분 + 1)주소 값 반환

	//v.rbegin() (revers begin)
	//백터의 끝 지점을 시작점으로 반환
	
	//vrend() (revers end)
	//백터의 (시작 +1)지점을 끝 부분으로 반환

	//v.at(i) 	 
	//백터의 i번째 요소 접근(범위 검사함)

	//v.[i](operator []) 	 
	//백터의 i번째 요소 접근(범위 검사 안함)

	//v.front() 	
	//백터의 첫번째 요소 접근

	//v.back() 	 
	//백터의 마지막 요소 접근

	//v.push_back() 	 
	//백터의 마지막 부분에 새로운 요소 추가

	//v.pop_back()	 
	//백터의 마지막 부분 제거

	//v.insert(삽입할 위치의 주소 값, 변수 값)	
	//사용자가 원하는 위치에 요소 삽입

	//v.emplace(삽입할 위치의 주소 값, 변수 값)  	
	//사용자가 원하는 위치에 요소 삽입

	//v.emplace_back()	
	//백터의 마지막 부분에 새로운 요소 추가

	//v.erase(삭제할 위치) or v.erase(시작위치, 끝위치)	
	//사용자가 원하는 index값의 요소를 지운다.

	//v.clear()
	//백터의 모든 요소를 지운다

	//v.resize(수정 값)	
	//백터의 사이즈를 조정한다.

	//v.swap(백터 변수)	
	//백터와 백터를 스왑한다.

	return 0;
}