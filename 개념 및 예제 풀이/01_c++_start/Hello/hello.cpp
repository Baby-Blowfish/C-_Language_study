
#include <iostream>
#include <fstream>
using namespace std;

long getFileSize(ifstream& fin)
{
	fin.seekg(0,ios::end);
	long length = fin.tellg();
	return length;
}

int main() {
	const char* file = "c:\\temp\\data.dat";


	ifstream fin(file,ios::in);
	if(!fin){
		cout << "���� ����";
		return 0;
	}

	cout << file <<"ũ��� : " << getFileSize(fin) <<endl;
	fin.close();
}