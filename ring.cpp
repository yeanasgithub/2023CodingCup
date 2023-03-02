// gordon spring 2023
// 7-minutes to program
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int rad = 0;
	if (argc > 1) {
		rad = atoi(argv[1]);
	}
	if (rad == 0)
		rad = 8;
	int dim = rad * 2 + 1;
	int centx = rad;
	int centy = rad;
	for (int i=0; i<dim; i++) {
		for (int j=0; j<dim; j++) {
			//get distance from center...
			double xd = j - centx;
			double yd = i - centy;
			double dist = sqrt(xd*xd + yd*yd);
			if (dist > rad*0.75 && dist < (double)rad)
				cout << "##";
			else
				cout << "  ";
		}
		cout << endl;
	}
	return 0;
}


