#include<iostream>
using namespace std;

class Interface
{
public:
	void ShowInterface(void);
	void Chose(void);
};

void Interface::ShowInterface(void)
{
	cout << "********************************" << endl;
	cout << "1.��ʼ��Ϸ" << endl << "2.��������" << endl << "3.��������" << endl << "4.��Ϸ�汾" << endl;
	cout << "********************************" << endl;
}

void Interface::Chose(void)
{
	int a;
	string t;
	cout << "������Ҫ�����ѡ��(1-4):" << endl;
	cin >> a;
	switch (a)
	{
	case 1: {cout << "���ڽ�����Ϸ....." << endl; break; /*GameStart()��Ϸ��ʼ����*/}
	case 2: {cout << "���ڽ�����Ϸ����....." << endl; break; /*GameSettings()��Ϸ��������*/ }
	case 3: {cout << "GameSet From : 2022" << endl << "Game Setter ��PP " << endl << "Set Initial Center : �����Ϸ����������" << endl;
		cout << "�����Ҫ����������q��";
		cin >> t;
		if (t == "q" || t == "Q")
		{
			return ShowInterface();
		}
		else { cout << "������Ч...." << endl; }
		break; }
	case 4: {cout << "Version : 0.0.0" << endl << "Next Version : 0.0.1" << endl;
		cout << "�����Ҫ����������q��";
		cin >> t;
		if (t == "q" || t == "Q")
		{
			ShowInterface();
			Chose();
		}
		else { cout << "������Ч...." << endl; }
		break; }
	default: {cout << "��������ֳ�����Χ����������ȷ���....." << endl; break; }
	}
}


int main()
{
	string r;
	Interface face;
	face.ShowInterface();
	face.Chose();
	while (1)
	{
		cout << "�����Ƿ��˳���Ϸ(Y or N):" << endl;
		cin >> r;
		if (r == "Y" || r == "y")
		{
			break;
		}
		if (r == "N" || r == "n")
		{
			face.ShowInterface();
			face.Chose();
		}
		else { cout << "��������ȷ��ѡ��....." << endl; }
	}
	return 0;
}