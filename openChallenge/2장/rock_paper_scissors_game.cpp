#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string r,j;
    cout<<"���� ���� �� ������ �մϴ�. ����,����,�� �߿��� �Է��ϼ���."<<endl;
    cout<<"�ι̿�>>";
    cin>>r;
    cout<<"�ٸ���>>";
    cin>>j;
    if(r!="����"&&r!="����"&&r!="��"&&j!="����"&&j!="����"&&j!="��") cout<<"�߸� �Է��ϼ̽��ϴ�"<<endl;
    else if(r==j) cout << "�����ϴ�."<<endl;
    else if(r=="����") 
    {
        if(j == "��") cout<<"�ι̿��� �̰���ϴ�."<<endl;
        else cout<<"�ٸ����� �̰���ϴ�."<<endl;
    }
    else if(r=="����")
    {
       if(j == "����") cout<<"�ι̿��� �̰���ϴ�."<<endl;
        else cout<<"�ٸ����� �̰���ϴ�."<<endl;
    } 
    else // r == "��" �ϰ��
    {
        if(j == "����") cout<<"�ι̿��� �̰���ϴ�."<<endl;
        else cout<<"�ٸ����� �̰���ϴ�."<<endl;
    }

    return 0;
}