// Copyright 2020 <Diana Lukashuk>
#include <iostream>
#include <fstream>
#include <clocale>
#include "complex.h"
#include "Header.h"
using namespace std;

int main(){
  Complex c0;
  Complex c01;
  Complex c1(1.1, 2.2);
  Complex c2(3.3, -4.4);
  Complex c3(c1);
  Complex c4(3.3);

  
  Complex *pc0 = new Complex();
  Complex *pc1 = new Complex(1.1, 2.2);
  Complex *pc3 = new Complex(c1);
  Complex *pc4 = new Complex(3.3);

  cout << "The number created by the default constructor: c0 = ";
  c0.output();
  cout << "The number created by the default constructor: c1 = ";
  c1.output();
  cout << "The number created by the default constructor: c2 = ";
  c2.output();
  cout << "The number created by the default constructor: c3 = ";
  c3.output();
  cout << "The number created by the default constructor: c4 = ";
  c4.output();

  Complex c5;
  c5 = c2;
  cout << "The result of assigning c2 to a new variable: c5 = ";
  c5.output();

  cout << "The result of applying equality comparison for" << endl;
  c1.output();
  c2.output();
  if (c1 == c2) cout << "true" << endl;
  else cout << "False" << endl;

  cout << "The result of applying equality comparison for" << endl;
  c01.output();
  c0.output();
  if (c0 == c01) cout << "true" << endl;
  else cout << "False" << endl;

  Complex c6;
  c6 = c3.Add(c2);
  cout << "The result of addition by the addition function : c6 = c3 + c2 = ";
  c6.output();

  Complex c7;
  c7 = c3 + c2;
  cout << "Add result using overloaded operator: c7 = c3 + c2 = ";
  c7.output();

  Complex c8;
  c8 = c3 - c2;
  cout << "Subtraction Result Using Overloaded Operator: c8 = c3 - c2 = ";
  c8.output();

  Complex c9;
  c9 = c3 * c2;
  cout << "Multiplication Result Using Overloaded Operator: c9 = c3 * c2 = ";
  c9.output();

  Complex c10;
  c10 = c3 * c2;
  cout << "Division result with overloaded operator: c10 = c3 / c2 = ";
  c10.output();


  delete pc0;
  delete pc1;
  delete pc3;
  delete pc4;

  system("pause");
  return 0;  
}