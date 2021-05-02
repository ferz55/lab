#include <iostream>
#include <cstring>

using namespace std;

int tabs = 0;

struct Branch
{
	char Data;
	Branch* LeftBranch;
	Branch* RightBranch;
};

void Add(char aData, Branch*& aBranch)
{
	if (!aBranch)
	{
		aBranch = new Branch;
		aBranch->Data = aData;
		aBranch->LeftBranch = 0;
		aBranch->RightBranch = 0;
		return;
	}
	else
		if (aBranch->Data > aData)
		{
			Add(aData, aBranch->LeftBranch);
		}

	if (aBranch->Data < aData)
	{
		Add(aData, aBranch->RightBranch);
	}
}

void print(Branch* aBranch)
{
	if (!aBranch) return;
	tabs++;

	print(aBranch->LeftBranch);

	for (int i = 0; i < tabs; i++) cout << " ";
	cout << aBranch->Data << endl;

	print(aBranch->RightBranch);
	for (int i = 0; i < tabs; i++) cout << " ";
	cout << aBranch->Data << endl;

	tabs--;
}

int main()
{
	Branch* Root = 0;
	char s[] = "234514";

	for (int i = 0; s[i]; i++)
	{
		Add(s[i], Root);
	}

	print(Root);

	return 0;
}