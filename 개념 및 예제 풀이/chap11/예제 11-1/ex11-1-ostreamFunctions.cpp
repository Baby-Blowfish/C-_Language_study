/*
	stream(��Ʈ��) : �������� �������� �帧�� Ȥ�� �����͸� �����ϴ� ����Ʈ���� ���
					���α׷��� ��ġ�� �����ϸ� ����Ʈ ������ �����

	input stream	: Ű����, ��Ʈ��ũ, ���� �� �Է���ġ�κ��� �Էµ� �����͸� ������� ���α׷��� �����ϴ� ��ü
	output stream	: 
*/
#include <iostream>
using namespace std;

int main() {
	// "Hi!"�� ����ϰ� ���� �ٷ� �Ѿ��.
	cout.put('H');
	cout.put('i');
	cout.put(33);
	cout.put('\n');
	
	// "C++ "�� ����Ѵ�.
	cout.put('C').put('+').put('+').put(' ');

	char str[]="I love programming";
	cout.write(str, 6); // str �迭�� 6 ���� ���� "I love"�� ��Ʈ���� ���
}