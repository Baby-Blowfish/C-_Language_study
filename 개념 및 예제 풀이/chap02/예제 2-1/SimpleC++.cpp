/* 
	�ҽ�: SimpleC++.cpp
	cout�� << �����ڸ� �̿��Ͽ� ȭ�鿡 ����Ѵ�.
*/

#include <iostream> //  #include : ��ó����(preprocessor : cpp), ��������� ������ ���� �ҽ����� Ȯ���ϵ��� ����, ��ũ���� ��� �̸� ��ȯ�� 
// <iosstream> : .h�� ���� �Ⱥ��̴� �߼�

// useing namespace std; : ���ӽ����̽�

// C++ ���α׷��� main() �Լ��������� ������ �����Ѵ�.

// cout : console out ��ü, C++ ǥ�� ��� ��Ʈ�� ��ü(standard output stream object)
// std::  : cout�� �̸� ������ std���� ǥ��
// << : ��Ʈ�� ���Կ�����, �������� �ǿ����� �����͸� ���� ��Ʈ�� ��ü�� ����, <<�� ��Ʈ������������ ��½�Ʈ���� �����͸� �����ϴ� ���� �����ڷ�\
 		<iostream> ��� ���Ͽ� ������(operator overloading) �Ǿ� ����, bool, char, short, int, long, float, double ���� �⺻ Ÿ�� �����ͷ� �ٷ� ����\
		std::cout << n+5 << f() << true << c << std::endl;
// std::cout<<'\n'		 	: �ܼ��� ��Ʈ�� ���ۿ� '\n'�� �����ϰ� ����.
// std::cout<<std::endl 	: ������(manipulator) �Լ�, <iostream>�� ����, ��Ʈ�� ���ۿ� '\n'�� �����ϰ� \
							  cout���� ���� ��Ʈ�� ���ۿ� �ִ� �����͸� �ﰢ ��ġ�� ����ϵ��� ���� 

int main() {
	std::cout << "Hello\n"; // ȭ�鿡 Hello�� ����ϰ� ���� �ٷ� �Ѿ
	std::cout << "ù ��° �������Դϴ�.";
	return 0; // main() �Լ��� �����ϸ� ���α׷��� �����
}