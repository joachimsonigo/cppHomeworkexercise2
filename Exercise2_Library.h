//
// Created by Joachim Sonigo on 2/25/2023.
//

#ifndef CPPHOMEWORKEXERCISE2_EXERCISE2_LIBRARY_H
#define CPPHOMEWORKEXERCISE2_EXERCISE2_LIBRARY_H
#include <iostream>
#include <cmath>
#include <complex>

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
    //object input
    complex operator +(const complex&);
    complex operator -(const complex&);
    complex operator *(const complex&);
    complex operator /(const complex&);
    void operator +=(const complex&);
    void operator -=(const complex&);
    void operator *=(const complex&);
    void operator /=(const complex&);
    bool operator ==(const complex&);
    bool operator !=(const complex&);
    //double input
    complex operator +(double);
    complex operator -(double);
    complex operator *(double);
    complex operator /(double);
    void operator +=(double);
    void operator -=(double);
    void operator *=(double);
    void operator /=(double);

    friend std::ostream& operator <<(std::ostream&,const complex&);
    friend std::istream& operator >>(std::istream&,complex&);

    //functs
    void display();
    double pointdistance(const complex&);
    complex conjugates();
    double module();
    double argument();
};

//Defining the methods outside of the class structure
complex::complex() {x=0;y=0;} //default
complex::complex(double a) {x=a;y=a;} //single value
complex::complex(double a, double b) {x=a;y=b;} //double value
complex::complex(const complex &c) {x=c.x;y=c.y;} //copying
complex::~complex() = default; //destructor
void complex::set_x(double a) {x=a;} //setter
void complex::set_y(double b) {y=b;}
double complex::get_x() {return x;} //getter
double complex::get_y() {return y;}

//Operators
complex complex::operator +(const complex &c) {complex R;R.x=x+c.x;R.y=y+c.y;return R;}
complex complex::operator -(const complex &c) {complex R;R.x=x-c.x;R.y=y-c.y;return R;}
complex complex::operator*(const complex &c) {complex R;R.x=x*c.x;R.y=y*c.y;return R;}
complex complex::operator/(const complex &c) {complex R;R.x=x/c.x;R.y=y/c.y;return R;}
void complex::operator +=(const complex &c) {x=x+c.x;y=y+c.y;}
void complex::operator -=(const complex &c) {x=x-c.x;y=y-c.y;}
void complex::operator *=(const complex &c) {x=x*c.x;y=y*c.y;}
void complex::operator /=(const complex &c) {x=x/c.x;y=y/c.y;}
bool complex::operator ==(const complex &c) {if(x==c.x && y==c.y)return 1;else{return 0;}}
bool complex::operator !=(const complex &c) {if(x != c.x || y != c.y)return 1;else{return 0;}}


//Operators for printing and user input
std::ostream& operator <<(std::ostream&os,const complex&p){os<<"x= "<<p.x<<" et y= "<<p.y<<std::endl;return(os);};
std::istream& operator >>(std::istream&is, complex&p){std::cout<<"Value of x:";is>>p.x;std::cout<<"Value of y :";is>>p.y;}


//Operators with double inputs
complex complex::operator +(double a) {complex R;R.x=x+a;R.y=y+a;return R;}
complex complex::operator -(double a) {complex R;R.x=x-a;R.y=y-a;return R;}
complex complex::operator *(double a) {complex R;R.x=x*a;R.y=y*a;return R;}
complex complex::operator /(double a) {complex R;R.x=x/a;R.y=y/a;return R;}
void complex::operator +=(double a) {x=x+a;y=y+a;}
void complex::operator -=(double a) {x=x-a;y=y-a;}
void complex::operator *=(double a) {x=x*a;y=y*a;}
void complex::operator /=(double a) {x=x/a;y=y/a;}

//Methods
void complex::display() {std::cout<<"x="<<x<<std::endl;std::cout<<"y="<<y<<std::endl;}
double complex::pointdistance(const complex &c) {return(sqrt(pow(x-c.x,2)+pow(y-c.y,2)));}
complex complex::conjugates() {y=-y;}
double complex::module() {return(sqrtf(pow(x,2)+ pow(y,2)));}
double complex::argument() {std::complex<double> mycomplex (x,y);;return(std::arg(mycomplex));}



#endif //CPPHOMEWORKEXERCISE2_EXERCISE2_LIBRARY_H
