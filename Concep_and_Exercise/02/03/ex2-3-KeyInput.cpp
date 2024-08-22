#include <iostream>
using namespace std; 
/* namespace : �̸� ���� , �̸�(identifier) �浹 ����,
	���� : namespace kitae {......}
	��� : �̸�����::�̸�, ::���� ���� ������
	std::	: ǥ�� �̸� ����
	using std::cout;	: cout ���� std:: ��������
	using namespace std;	: std �̸� ������ ����� ��� �̸��� std:: ����
	*/
// cin : console in ��ü, standard input stream object
// >> : ��Ʈ�� ���⿬����, ������ ��Ʈ�� ��ü�� �о�  �������� ������  ���� \
 		<iostream> ��� ���Ͽ� ������(operator overloading) �Ǿ� ����, bool, char, short, int, long, float, double ���� �⺻ Ÿ�� �����ͷ� �Է� ����\
		std::cin >> c >> h;  23 36 �ΰ��� �������� �Է¹���.  >> ���鹮�ڸ� �������� ���� 

/*
	����� �Է� Ű >> cin�� ��Ʈ�� �������� >> enterŰ�� �ԷµǸ� >>�����ڰ� cin�� �Է� ���ۿ��� Ű ���� ����� ������ ����
	��, >>�����ڴ� backspace Ű�� ġ�� �۵���.
*/
int main() {
	cout << "Enter width >> ";

	int width;
	cin >> width; // Ű����κ��� �ʺ� �о� width ������ ����

	cout << "Enter height >> ";

	int height;		// ���๮ �߰��� ���� ���� ����
	cin >> height; // Ű����κ��� ���̸� �о� height ������ ����

	int area = width*height; // �簢���� ���� ���
	cout << "Area is : " << area <<endl; // ������ ����ϰ� ���� �ٷ� �Ѿ
}

// Enter width >> 3
// Enter height >> 5
// Area is : 15