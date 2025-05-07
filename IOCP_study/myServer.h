#pragma once
#define NO_SCORE -1

enum DataStatus : int
{
	Start,
	Swap,
	Destroy,
	Generate,
	Hide,
	Result,

	Finish,
	RivalConnectionClosed,
	ExitMatch,
};

enum Result :int
{
	Win,
	Lose,
	Draw,
};

// string�� ������ �ٲ��ֱ�
// ��¥�� �����ϱ� �׳� ���� �ƴ� ������ ����
int StringToInt(std::string str)
{
	if (str.empty())
		return NO_SCORE;
	int result = 0;
	int mul = 1;
	for (int i = str.size() - 1;i >= 0;i--)
	{
		result += mul * (str[i] - '0');
		mul *= 10;
	}
	return result;
}