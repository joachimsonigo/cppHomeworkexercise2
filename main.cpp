#include <iostream>
using namespace std;

class complex{
//Variables-Private
double x;
double y;
static int nb;

public:
    //Methods
    complex();
    complex(double);
    complex(double,double);
    complex(const complex&);
    ~complex();

    //Setters
    void set_x(double);
    void set_y(double);
    //Getters
    double get_x();
    double get_y();
    
    //Overloading Operators
    complex operator +(const complex&);
    complex operator -(const complex&);
    void operator +=(const complex&);
    void operator -=(const complex&);
    bool operator ==(const complex&);
    bool operator !=(const complex&);
};

//Defining the methods outside of the class structure
complex::complex() {x=0;y=0;}
complex::complex(double a) {x=a;y=a;}
complex::complex(double a, double b) {x=a;y=b;}
complex::complex(const complex &c) {x=c.x;y=c.y;}
void complex::set_x(double a) {x=a;}
void complex::set_y(double b) {y=b;}
double complex::get_x() {return x;}
double complex::get_y() {return y;}

complex complex::operator +(const complex &c) {complex R;R.x=x+c.x;R.y=y+c.y;return R;}
complex complex::operator -(const complex &c) {complex R;R.x=x-c.x;R.y=y-c.y;return R;}
void complex::operator +=(const complex &c) {x=c.x+c.x;y=c.y+c.y;}
void complex::operator -=(const complex &c) {x=c.x-c.x;y=c.y-c.y;}
bool complex::operator ==(const complex &c) {if(x==c.x && y==c.y)return 1;else{return 0;}}
bool complex::operator !=(const complex &c) {if(x != c.x || y != c.y)return 1;else{return 0;}}




//-------------------
//      Main
//-------------------
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
