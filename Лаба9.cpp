#include <iostream>

using namespace std;


class Tree {
public:
	static int count;
	int m;

	Tree* p1;
	Tree* p2;
	Tree(int n) {
		if (n == 1) {
			p1 = NULL;
			p2 = NULL;
		}
		else {
			p1 = new Tree(n - 1);
			p2 = new Tree(n - 1);
		}
		m = ++count;
		cout << "Object created: " << this << " : " << m;
		cout << " -> Number of objects: " << count << endl;
	}
	Tree() {
		delete p1;
		delete p2;
		count--;
		cout << "Object deleted: " << this << " : " << m;
		cout << " -> Number of objects: " << count << endl;
	}
};
int Tree::count;

int main()
{
	Tree::count;
	Tree obj1(2);
	Tree* p;
	p = new Tree(2);
	delete p;


	return 0;
}