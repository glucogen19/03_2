#include <iostream>
#include <locale.h>
using namespace std;

class Road {
	private:
	int lenght;
	int width;
	public:
	Road(int newlenght, int newWidth) {
		lenght = newlenght;
		width = newWidth;
	}
	void Print() {
		setlocale(LC_ALL, "RU");
		cout << "Lenght: " << lenght << endl;
		cout << "Width: " << width << endl;
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
	void Print() {
		cout << "X: " << X << endl;
		cout << "P: " << P << endl;
		cout << "V: " << V << endl;
	}
};

int main(){
	Car car(100.5, 10, 50.5);
	car.Print();

	Road road(500, 10);
	road.Print();
}