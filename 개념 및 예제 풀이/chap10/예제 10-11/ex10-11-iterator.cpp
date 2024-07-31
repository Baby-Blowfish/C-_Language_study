/*
	iterator : 컨테이너 안에 있는 원소들을 하나씩 순차적으로 접근하기 위한 원소에 대한 포인터


*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v; //정수 벡터 생성
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::iterator it; // 벡터 v의 원소에 대한 포인터 it 선언

	for(it=v.begin(); it != v.end(); it++) { // iterator를 이용하여 모든 원소 탐색
		int n = *it; // it가 가리키는 원소 값 리턴
		n = n*2; // 곱하기 2
		*it = n; // it가 가리키는 원소에 값 쓰기
	}

	//	v.begin()은 벡터 v의 첫번째 원소를 가리키는 주소를 반환
	//  v.end()는 벡터 v의 마지막 원소 다음 위치를 가리키는 주소를 반환

	for(it=v.begin(); it != v.end(); it++) 	// 벡터 v의 모든 원소 출력
		cout << *it << ' ';
	cout << endl;
}