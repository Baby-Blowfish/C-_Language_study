#include <iostream>
using namespace std;
//  cin >> ch; �� �� "�� �� Ŭ" �̶� ���ڿ��� �Է��ϸ�  "�� Ŭ"�� Ű �Է��� ��ٸ��� ���� >> �����ڿ��� ó���ȴ�.
/*	cin.getline(char buf[], int size, char delimitChar)		: cin ��ü�� ����Լ�, ������ ���Ե� ���ڿ��� �Է¹��� �� ����
	buf : Ű����κ��� ���� ���ڿ��� ������ �迭
	size :  buf[]�� ũ��
	delimitChar : ���ڿ� �Է� ���� �����ϴ� ���� ����, defalt value = \n���� ��������
	
	size-1���� ���ڸ� �Է¹ްų� delimitChar�� ������ ���� ���ڰ� �Էµ� ������ ���� ���ڸ� �����Ͽ� ���ڿ��� �Է� ���� �� ���� \
	���������� null���ڰ� ���� �ϹǷ�
*/

// ���鹮�� white space character : ���鹮��					int isspace( char c) : c�� ���� �����̸� true ����

int main() {
	cout << "�ּҸ� �Է��ϼ���>>";

	char address[100]; 
	cin.getline(address, 100, '\n'); // Ű����κ��� �ּ� �б�

	cout << "�ּҴ� " << address << "�Դϴ�\n"; // �ּ� ���
}