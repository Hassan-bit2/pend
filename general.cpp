// Find the Area and Perimeter of a Rectangle : A = w*l and P = 2(w+l)
#include <iostream>

using namespace std;

void Rect(int w, int l)
{
	cout << "Area of rectangle is\n" << int(w*l);
//	cout << "Perimeter of rectangle is \n" << 2*(w+l);
}

int main()
{
	int w, l;
	cout << "Please Enter the width of rectangle\n";
	cin >> w;
	cout << "Please Enter the length of rectangle\n";
	cin >> l;
	Rect(w, l);
}
