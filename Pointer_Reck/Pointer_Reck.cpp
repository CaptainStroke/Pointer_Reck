#include <iostream>
using namespace std;


void rect(int width, int height, int* sq, int* p)
{
	*sq = width * height;
	*p = (width + height) * 2;
	cout << *sq << endl;
	cout << *p << endl;
}

int main()
{
	int w = 10;
	int h = 5;
	int s;
	int p;
	rect(w, h, &s, &p);
}