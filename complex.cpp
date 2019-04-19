#include <iostream>
#include <math.h>
#include "complex.h"

using namespace std;

/*Complex::Complex():
 imag(0),real(0){}

*/
Complex Complex::add (Complex a, Complex b){
 Complex c;

 c.real = a.real + b.real;
 c.imag = a.imag + b.imag;
 return(c); 
}

Complex  Complex::mult(Complex a, Complex b)
{
 Complex c;
 c.real = a.real * b.real - a.imag * b.imag;
 c.imag = a.real * b.imag + a.imag * b.real;
 return(c); 
}

float Complex::abc (Complex a)
{
 Complex c;
 float b;
 c.real = a.real * a.real;
 c.imag = a.imag * a.imag;
 b = sqrt(c.real + c.imag);
 return(b); 
}

Complex Complex::div(Complex a, Complex b)
{
 Complex c;
 c.real = (a.real * b.real + a.imag * b.imag)/abc(b);
 c.imag = (a.imag * b.real - b.imag * a.real)/abc(b);
 return(c); 
}

float Complex::arg (Complex a){
  float f;
  float pi = 3.14159265;
  if ((a.real > 0) and (a.imag > 0)) f = atan(a.imag/a.real);
  if ((a.real < 0) and (a.imag > 0)) f = pi-atan(a.imag/a.real);
  if ((a.real > 0) and (a.imag > 0)) f = -pi+atan(a.imag/a.real);
  if ((a.real > 0) and (a.imag > 0)) f = atan(a.imag/a.real);
  return f;
}

Complex Complex::sopr(Complex a)
{
 Complex c;
 c.real = a.real ;
 c.imag = (-1)*a.imag;
 return(c); 
}


void Complex::printA (Complex a)
{
 char c;
 if (a.imag < 0 ) { cout << a.real << a.imag<< "i" << endl;} 
 else 
 {c ='+'; cout << a.real << c << a.imag<< "i" << endl;  }
}

void Complex::printT (Complex a)
{

cout << abc(a) << "(cos(" << arg(a) << ")+i*sin(" <<  arg(a) <<"))" << endl;
}

void Complex::printP (Complex a) {
  cout << abc(a) << "*e^" << arg(a) << "*i" << endl;
}

void menu(){
   cout << "Введите действительную часть комплексного числа" <<endl;
  cin >> a.real;
  cout << "Введите мнимую часть комплексного числа" <<endl;
  cin >> a.imag;
  cout << "Введите действительную часть комплексного числа" <<endl;
  cin >> b.real;
  cout << "Введите мнимую часть комплексного числа" <<endl;
  cin >> b.imag;
  //system("cls");
   cout <<"Какую операцию выполнить?" << endl
   << "1 - сложение" << endl
   << "2 - деление" << endl
   << "3 - умножение" <<endl;
   int s = 0;
   cin >> s;
   Complex c;
   switch (s) {
case 1:
  cout<<"Вы выбрали сложение: ";
  c.printA(c.add(a,b));
  cout<<endl;
break;
case 2:
  cout<<"Вы выбрали деление: ";
  c.printA(c.div(a,b));
  cout<<endl;
break;
case 3:
  cout<<"Вы выбрали умножение: ";
  c.printA(c.mult(a,b));
  cout<<endl;
  break;
default:
cout <<"Not found" << endl;
}
}
/*void operations(){
 cout <<"В какой форме вывести числа?" << endl
   << "1 - алгебраической" << endl
   << "2 - тригонометриеской" << endl
   << "3 - показательной" <<endl;
   int k = 0;
   cin >> k;
   switch (k) {
case 1:
  cout << "Вывод первого числа в алгебраической форме" <<endl ;
  printA(a);
  cout << "Вывод второго числа в алгебраической форме" <<endl ;
  printA(b);
break;
case 2:
cout << "Вывод первого числа в алгебраической форме" <<endl ;
  printT(a);
  cout << "Вывод второго числа в алгебраической форме" <<endl ;
  printT(b);
break;
case 3:
  cout << "Вывод первого числа в алгебраической форме" <<endl ;
  printP(a);
  cout << "Вывод второго числа в алгебраической форме" <<endl ;
  printP(b); 
  break;
default:
cout <<"Not found" << endl;
}
}*/

