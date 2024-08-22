#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

class UpAndDownGame
{
    private :
    static int correct_answer;
    static int max, min;
    
    public :
        UpAndDownGame();
        static int Correct_Answer(){ return correct_answer; }
        int AskNumber(int answer);
};

UpAndDownGame::UpAndDownGame()
{
    srand((unsigned)time(0)); // �׻� �ٸ� �������� �߻���Ű�� ���� seed ����
    int corret_answer = rand(); // 0���� RAND_MAX(32767) ������ ������ ������ n�� �߻�
    corret_answer = corret_answer % 100; // n�� 0 ~ 99 ������ ����
}

class Person
{
    private :
    	string s_answer;
        int answer;
    public :
        Person();
        void get_answer(){ cin >> s_answer; answer = stoi(s_answer); }
        int Answer(){ return answer;}
};

int UpAndDownGame::correct_answer = 0;
int UpAndDownGame::max = 99;
int UpAndDownGame::min = 0;

int UpAndDownGame::AskNumber(int answer)
{
    if ( answer > UpAndDownGame::correct_answer) 		UpAndDownGame::max = answer;
    else if(answer < UpAndDownGame::correct_answer)		UpAndDownGame::min = answer;
    else return 0;
	cout<<"���� "<< UpAndDownGame::min<<"�� "<<UpAndDownGame::max<<"���̿� �ֽ��ϴ�."<<endl;
}

int main()
{
    UpAndDownGame first_game;
    Person kim, oh;
    int stop = 1;

    cout << "Up & Down ������ �����մϴ�."<<endl;
    cout << "���� 0�� 99���̿� �ֽ��ϴ�."<<endl;
    while(1)
    {

        kim.get_answer();
        if( 0 == first_game.AskNumber(kim.Answer())) 
		{
			cout<<" ���μ��� �̰���ϴ�."<< endl; 
			break;	
		}
        oh.get_answer();
        if( 0 == first_game.AskNumber(oh.Answer()))
		{
			cout<<" ������ �̰���ϴ�."<< endl; 
			break;	
		} 

    }


    return 0;
}