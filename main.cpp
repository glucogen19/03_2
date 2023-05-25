#include <iostream>
using namespace std;

class Road {
	private:
	int length;
	int width;
public:
Road(int newlength, int newWidth) {
	length = newlength;
	width = newWidth;
}
};

class Car {
	private:
	double X, V;
	int P;
public:
	Car(double newX, int newP, double newV) {
		X = newX;
		P = newP;
		V = newV;
	}
};

main(){
	
}