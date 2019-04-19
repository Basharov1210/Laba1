 #pragma once

struct Complex //классы для хранения комплексных чисел
{

 float real;
 float imag;
 Complex add (Complex a, Complex b);//сумма комплексных чисел
 Complex mult(Complex a, Complex b);//произведение комплексных чисел
 float abc (Complex a);//модуль комплексного числа
 Complex div(Complex a, Complex b);//деление комплексных чисел
 float arg (Complex a);//аргумент комплексного числа
 Complex sopr(Complex a);//сопряжённое комплексного числа
 void printA (Complex a);//вывод в алгебраической форме
 void printT (Complex a);//вывод в тригонометрической форме
 void printP (Complex a);//вывод в показательной форме

 //Complex();//конструктор по умолчанию
};

static Complex a,b;


void menu();//Меню
//void operations();//операции




