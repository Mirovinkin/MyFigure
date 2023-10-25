// MyFigure.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <typeinfo>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
//#include <cstdlib>
#include <ctype.h>

using namespace std;

template<typename T>
class MyRectangle
{
private:
    T _a;
    T _b;
    T _c;
    T _d;
    T _perimeter = _a + _b + _c + _d;

private:
    MyRectangle() {};
    MyRectangle(const T& A, const T& B, const T& C, const T& D) :
        _a(A),
        _b(),
        _c(C),
        _d(D) {};

    T GetPerimeter() {
        return _perimeter != 0 || _perimeter != NAN ? _perimeter : throw exception("Error");
    }

};

template<typename T>
class MyTriangle
{
private:
    T _a;
    T _b;
    T _c;
    T _p = (_a + _b + _c) / 2;
    T _s = sqrt((_p * (_p - _a) * (_p - _b) * (_p - _c)));
public:
    MyTriangle() {};
    MyTriangle(const T& A, const T& B, const T& C ): 
        _a(A),
        _b(),
        _c(C){};
    T GetA() {
        return _a;
    }
    T GetB() {
        return _b;
    }
    T GetC() {
        return _c;
    }
    T GetP() {
        return _p != 0 ? _p : throw exception("Error");
    }

    T GetArea() {
        return _s != 0 || _s != NAN ? _s : throw exception("Error");
    }

};

template<typename T>
class MyCircle
{
private:
    T _pi = 3.14;
    T _diameter;
    T _length = _diameter * _pi;
    T _measure;
    T _arc = (_measure * _length) / 360;

public:
    MyCircle() {};
    MyCircle(const T& Diameter, const T& Measure) :
        _diameter(Diameter),
        _measure(Measure) {};

    T GetLength() {
        return _length != 0 || _length!=NAN ? _length : throw exception("Error");
    }

    T GetArc() {
        return _arc != 0 || _arc != NAN ? _arc : throw exception("Error");
    }
};
int main()
{
    std::cout << "Hello World!\n";
}