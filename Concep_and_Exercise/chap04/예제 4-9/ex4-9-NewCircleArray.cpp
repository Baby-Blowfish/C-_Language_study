/*
	객체 배열의 동적 생성 및 반환
		클래스이름 *포인터변수 = new 클래스이름 [배열크기];
		Circle *pArray = new Circle[3]; // 3개의 Circle 객체 배열의 동적 생성, 각 객체 배열의 기본생성자 호출됨
		Circle *pArray = new Circle[3](30); //  	error!!
		Circle *pArray = new Circle[3]{Circle(1),Circle(2),Circle(30)};

		delete [] pArray; //pArray[2]소멸 -> pArray[1]소멸 -> pArray[0]소멸 
*/

#include <iostream>
using namespace std;

class Circle {
	int radius; 
public:
	Circle(); 
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14*radius*radius; }
}; 

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r; 
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	Circle *pArray = new Circle [3]; // 객체 배열 생성

	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);

	for(int i=0; i<3; i++) {
		cout << pArray[i].getArea() <<  endl;
	}
	Circle *p = pArray; // 포인터 p에 배열의 주소값으로 설정
	for(int i=0; i<3; i++) {
		cout << p->getArea() << endl;
		p++; // 다음 원소의 주소로 증가
	}

	delete [] pArray; // 객체 배열 소멸
}