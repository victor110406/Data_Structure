#include<iostream>
using namespace std;
//힙 정렬은 병합 정렬과 퀵 정렬만큼 빠른 정렬 알고리즘이다.
//실제로 고급 프로그래밍 기법으로 갈 수록 힘의 개념이 자주 등장하기 때문에 반드시 알고 넘어가야 할 정렬 알고리즘이다.
//힙 정렬은 힘 트리 구조를 이용하는 정렬 방법이다.

//힙을 알기 전 이진 트리에 대해서 알고 있어야한다
//이진 트리란 컴퓨터 안에서 데이터를 표현할 때 데이터를 각 노드에 담은 뒤에 노드를 두 개씩 이어 붙이는 구조이다.
//이진 트리는 모든 노드의 자식 노드가 2개 이하인 노드이다.

//트리라는 것은 말 그대로 가지를 뻗어나가는 것처럼 데이터가 서로 연결되어있다는것이다.
//트리의 형태는 종류에 따라 다야한데 자식 노드가 2개 이하인 트리는 이진 트리이다.

//완전 이진 트리는 테이터 루트노트부터 시작해서 자식 노드가 왼쪽 자식 노드, 오른쪽 자식노드로 차근차근 들어가는 구조의 이진트리이다.
//완전 이진 트리는 이진  트리의 노득 중간에 비어있지 않고 빽빽히 가득 찬 구조이다.

///힙이란 최솟값이나 최댓값을 빠르게 찾아내기 위해 완전 이진 트리를 기반으로 하는 트리

int main() {

	int number = 9;
	int heap[9] = { 6,7,8,5,3,4,9,1,5 };

	for (int i = 0; i < number; i++) {
		int c = i;
		do {
			int root = (c - 1) / 2;
			if (heap[root] < heap[root]) {
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		} while (c != 0);
	}
	for (int i = number - 1; i >= 0; i--) {
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0;
		int c = 1;
		do {
			c = 2 * root + 1;
			if (heap[c] < heap[c + 1] && c < i - 1) {
				c++;
			}
			if (heap[root] < heap[c] && c < i) {
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		} while (c < i);
	}

	return 0;
}