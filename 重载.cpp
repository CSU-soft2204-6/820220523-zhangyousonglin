#include<iostream>
using namespace std;
class Complex {
public: double real;
	  double image;
	  Complex() {
		  real = 0;
		  image = 0;
	  }
	  Complex(double _real, double _image) {
		  this->real = _real;
		  this->image = _image;
	  }
	  void display() {
		  cout << "real=  " << this->real << " ; " << "image = " << this->image << endl;
	  }
	  friend Complex operator +(Complex a, Complex b) {
		  return Complex(a.real + b.real, a.image + b.image);
	  }
	  friend Complex operator ++(Complex& a) {
		  return Complex(a.real++, a.image);
	  }
	  friend Complex operator -(Complex a, Complex b) {
		  return  Complex(a.real - b.real, a.image - b.image);
	  }
};

int main()
{
	Complex complex1(2, 3);
	complex1.display();
	Complex complex2;
	complex2.display();
	Complex complex3;
	complex3 = complex1 + complex2;
	complex3.display();

	system("pause");
	return 0;
}