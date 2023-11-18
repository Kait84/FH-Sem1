#include <iostream>
#include <math.h>

#define PI 3.14159;

using namespace std;


class Rectangle{
private:
    enum Color = {UNDEF, ROT, GRUEN, GELB, BLAU};
public:
    float l�nge;
    float breite;
    Rectangle(float length, float width){
        l�nge = length;
        breite = width;
    }
    float flaeche(this){
        return this.l�nge * this.breite;
    }
    float umfang(this){
        return (2*this.l�nge)+(2*this.breite);
    }
    void print(){
        cout << "Rechteck Breite: " << this.breite << "\nRechteck L�nge: " << this.l�nge;
        cout << "\Fl�cheninhalt: " << this.flaeche << "\nUmfang: " << this.umfang;
    }
} rect;

class Circle{
private:
    enum Color = {UNDEF, ROT, GRUEN, GELB, BLAU};
public:
    float radius;
    Circle(float radius){
        radius = radius;
    }
    float flaeche(this){
        return (this.radius*this.radius*PI);
    }
    float umfang(this){
        return (2*this.radius*PI);
    }
    void print(){
        cout << "Kreis Radius: " << this.radius;
        cout << "\Fl�cheninhalt: " << this.flaeche << "\nUmfang: " << this.umfang;
    }
} circ;

class Triangle{
private:
    enum Color = {UNDEF, ROT, GRUEN, GELB, BLAU};
public:
    float Kantenl1;
    float Kantenl2;
    float Kantenl3;
    Triangle(float length1, float length2, float length3){
        Kantenl1 = length1;
        Kantenl2 = length2;
        Kantenl3 = length3;
    }
    float flaeche(this){
        float s = ((this.Kantenl1 + this.Kantenl2 + this.Kantenl3)/2);
        float zwischenerg = s*((s-this.Kantenl1)*(s-this.Kantenl2)*(s-this.Kantenl3));
        return sqrt(zwischenerg);
    }
    float umfang(this){
        return (this.Kantenl1+this.Kantenl2+this.Kantenl3);
    }
    void print(){
        cout << "\nDreieck Kantenl�nge 1 " << this.Kantenl1 << "\nDreieck Kantenl�nge 2" << this.Kantenl2 << "\nDreieck Kantenl�nge 3 " << this.Kantenl3;
        cout << "\Fl�cheninhalt: " << this.flaeche << "\nUmfang: " << this.umfang;
    }
} tri;


