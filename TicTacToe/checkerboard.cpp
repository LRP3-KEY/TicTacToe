#include<iostream>
#include<string>
using namespace std;


class Board
{
public:
	void ShowBox(void);
	void RemoveChess(void);
	void ResetBox(void);
	bool is_win(void);

private:
	int row = 3;
	int col = 3;
};



bool Board::is_win(void)
{
	int chcek_dir[8][3] = { {0,1,2},
							{3,4,5},
							{6,7,8},
							{0,3,6},
							{1,4,7},
							{2,5,8},
							{0,4,8},
							{2,4,6}
	};


}

void Board::ShowBox(void)
{
	int k = 0, j;
	for (j = 0; j < 3; j++)
	{
		cout << " " << k << "|" << "" << " " << k++ << "|" << " " << k++ << "|" << endl;;
		cout << "---------" << endl;
		k++;
	}
}


int main()
{
	Board board;
	board.ShowBox();
	return 0;
}