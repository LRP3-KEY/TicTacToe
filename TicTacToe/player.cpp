#include<iostream>
#include<string>
using namespace std;

class Player
{
	public:
		void setname(void);  //获取名字
		string showname(int k);  //展示名字
		
	private:
		string player1;  //玩家一
		string player2;  //玩家二
};

void Player::setname(void)
{
	cout << "请输入Player1名字：" << endl;
	cin >> player1;
	cout << "请输入Player2名字：" << endl;
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