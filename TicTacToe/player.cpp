#include<iostream>
#include<string>
using namespace std;

class Player
{
	public:
		void setname(void);  //��ȡ����
		string showname(int k);  //չʾ����
		
	private:
		string player1;  //���һ
		string player2;  //��Ҷ�
};

void Player::setname(void)
{
	cout << "������Player1���֣�" << endl;
	cin >> player1;
	cout << "������Player2���֣�" << endl;
	cin >> player2;
}

string Player::showname(int k)
{
	int i;
	string playeri;
	if (k == 1) { playeri = player1;} 
	if (k == 2) { playeri = player2;}
	return playeri;
}

int main()
{
	Player playname;
	playname.setname();
	cout << "player1:" << playname.showname(1)<<"     "<< "player2:" << playname.showname(2);
	return 0;
}