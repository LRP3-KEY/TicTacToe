#include<iostream>
#include<string>
using namespace std;

class Player
{
	public:
		void SetName(void);  //获取名字
		string ShowName(int k);  //展示名字
		
	private:
		string player1_;  //玩家一
		string player2_;  //玩家二
};

void Player::SetName(void)
{
	cout << "请输入Player1名字：" << endl;
	cin >> player1_;
	cout << "请输入Player2名字：" << endl;
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