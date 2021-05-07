#include <iostream>

using namespace std;

int tabs = 0;

class Tree
{
public:
	int Data;
	Tree *Left;
	Tree *Right;
	void Add(int aData, Tree*& aBranch);
};


void Tree::Add(int aData, Tree*& aBranch)
{

	if (!aBranch)
	{
		aBranch = new Tree;
		aBranch->Data = aData;
		aBranch->Left = 0;
		aBranch->Right = 0;
		return;
	}
	else
		if (aBranch->Data > aData)
		{
			Add(aData, aBranch->Left);
		}
		else
		{
			Add(aData, aBranch->Right);
		};
}


void print(Tree* aBranch)
{
	if (!aBranch) return;
	tabs += 5;


	print(aBranch->Left);

	for (int i = 0; i < tabs; i++) cout << " ";
	cout << aBranch->Data << endl;


	print(aBranch->Right);

	tabs -= 5;
	return;
}

void FreeTree(Tree* aBranch)
{
	if (!aBranch) return;
	FreeTree(aBranch->Left);
	FreeTree(aBranch->Right);
	delete aBranch;
	return;
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));



	Tree* Root = 0;

	Tree obj1;

		obj1.Add(10, Root);
		obj1.Add(2, Root);
		obj1.Add(30, Root);
		obj1.Add(1, Root);
		obj1.Add(3, Root);
		obj1.Add(40, Root);

	print(Root);


	FreeTree(Root);

	return 0;
}