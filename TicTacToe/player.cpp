#include<iostream>
#include<string>
using namespace std;

class Player
{
	public:
		void SetName(void);  //��ȡ����
		string ShowName(int k);  //չʾ����
		
	private:
		string player1_;  //���һ
		string player2_;  //��Ҷ�
};

void Player::SetName(void)
{
	cout << "������Player1���֣�" << endl;
	cin >> player1_;
	cout << "������Player2���֣�" << endl;
	cin >> player2_;
}

string Player::ShowName(int k)
{
	int i;
	string playeri;
	if (k == 1) { playeri = player1_;} 
	if (k == 2) { playeri = player2_;}
	return playeri;
}

int main()
{
	Player playname;
	playname.SetName();
	cout << "player1:" << playname.ShowName(1)<<"     "<< "player2:" << playname.ShowName(2);
	return 0;
}