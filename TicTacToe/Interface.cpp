#include<iostream>
using namespace std;

class InterFace
{
public:
	void ShowInterFace(void);
	void Chose(void);
};

void InterFace::ShowInterFace(void)
{
	cout << "********************************" << endl;
	cout << "1.开始游戏" << endl << "2.辅助设置" << endl << "3.关于作者" << endl << "4.游戏版本" << endl;
	cout << "********************************" << endl;
}

void InterFace::Chose(void)
{
	int a;
	string t;
	cout << "请输入要进入的选项(1-4):" << endl;
	cin >> a;
	switch (a)
	{
	case 1: {cout << "正在进入游戏....." << endl; break; /*GameStart()游戏开始函数*/}
	case 2: {cout << "正在进入游戏设置....." << endl; break; /*GameSettings()游戏基础设置*/ }
	case 3: {cout << "GameSet From : 2022" << endl << "Game Setter ：PP " << endl << "Set Initial Center : 玩好游戏，并且益智" << endl;
		cout << "如果需要返回请输入q：";
		cin >> t;
		if (t == "q" || t == "Q")
		{
			return ShowInterFace();
		}
		else { cout << "输入无效...." << endl; }
		break; }
	case 4: {cout << "Version : 0.0.0" << endl << "Next Version : 0.0.1" << endl;
		cout << "如果需要返回请输入q：";
		cin >> t;
		if (t == "q" || t == "Q")
		{
			ShowInterFace();
			Chose();
		}
		else { cout << "输入无效...." << endl; }
		break; }
	default: {cout << "输入的数字超出范围，请输入正确编号....." << endl; break; }
	}
}


int main()
{
	string r;
	InterFace face;
	face.ShowInterFace();
	face.Chose();
	while (1)
	{
		cout << "请问是否退出游戏(Y or N):" << endl;
		cin >> r;
		if (r == "Y" || r == "y")
		{
			break;
		}
		if (r == "N" || r == "n")
		{
			face.ShowInterFace();
			face.Chose();
		}
		else { cout << "请输入正确的选项....." << endl; }
	}
	return 0;
}