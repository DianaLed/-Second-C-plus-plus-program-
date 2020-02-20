// Copyright 2020 <Diana Lukashuk>
#pragma once
#include <iostream>
#include <fstream>

using namespace std;


class Complex {
 public:
  Complex();
  Complex(const Complex &c);
  Complex(double _re, double _im);
  Complex(double d);

  ~Complex();

  void output();
  Complex Add(const Complex& c);

  Complex& operator=(const Complex& c);

  bool operator==(const Complex& c);

  Complex operator+(const Complex& c);
  Complex operator-(const Complex& c);
  Complex operator*(const Complex& c);
  Complex operator/(const Complex& c);

  friend Complex operator+(double d, const Complex& c);
  friend Complex operator-(double d, const Complex& c);
  friend Complex operator*(double d, const Complex& c);
  friend Complex operator/(double d, const Complex& c);

  friend ostream& operator<<(ostream& stream, const Complex& c);
  friend istream& operator>>(istream& stream, Complex& c);

 private:
  double re;
  double im;
};



Complex::Complex() {
  re = 0.0;
  im = 0.0;
}


Complex::Complex(const Complex &c) {
  re = c.re;
  im = c.im;
}


Complex::Complex(double _re, double _im) : re(_re), im(_im) {  }


Complex::Complex(double _re) {
  re = _re;
  im = 0.0;
}


Complex::~Complex() {
  re = 0.0;
  im = 0.0;
}



Complex& Complex::operator=(const Complex& c) {
  re = c.re;
  im = c.im;
  return *this;
}

bool Complex::operator==(const Complex& c) {
  bool res = 0;
  Complex r;
  if ((re == c.re) && (im == c.im)) res = 1;
  return res;
}


Complex Complex::Add(const Complex& c) {
  Complex res;
  res.re = re + c.re;
  res.im = im + c.im;
  return res;
}


Complex Complex::operator+(const Complex& c) {
  Complex res;
  res.re = re + c.re;
  res.im = im + c.im;
  return res;
}


Complex Complex::operator-(const Complex& c) {
  Complex res;
  res.re = re - c.re;
  res.im = im - c.im;
  return res;
}

Complex Complex::operator*(const Complex& c) {
  Complex res;
  res.re = re * c.re + im * c.im;
  res.im = re * c.im + c.re*im;
  return res;
}


Complex Complex::operator/(const Complex& c) {
  Complex res;
  res.re = (re * c.re + im * c.im) / (c.im*c.im + c.re*c.re);
  res.im = (c.re*im - re * c.re) / (c.im*c.im + c.re*c.re);
  return res;
}


void Complex::output() {
  cout << re;
  if (im >= 0) { cout << " + " << im << "i";
  } else {
    if (im < 0) { cout << " - " << -im << "i"; }
  }
  cout << endl;
}
