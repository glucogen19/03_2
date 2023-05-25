#include <iostream>
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
		setlocale(LC_ALL, "ru");
		cout << "Длина дороги: " << lenght << endl;
		cout << "Ширина дороги: " << width << endl;
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

main(){
	
}