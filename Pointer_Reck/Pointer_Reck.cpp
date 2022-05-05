#include <iostream>
using namespace std;


void rect(int width, int height, int* sq, int* p)
{
	*sq = width * height;
	*p = (width + height) * 2;
	cout << "Square = " << * sq << " m2" << endl;
	cout << "Perimetr = " << * p << " m" << endl;
}

int main()
{
	int w = 7;
	int h = 9;
	int s;
	int p;
	rect(w, h, &s, &p);
}