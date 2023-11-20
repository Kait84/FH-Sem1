#include <iostream>
#include <math.h>

#define PI 3.1415926535;

using namespace std;

/*
Schreiben Sie folgende Klassen um geometrische Objekte zu repräsentieren:
1. Klasse Rechteck
2. Klasse Kreis
3. Klasse Dreieck

Trennen Sie dabei die Deklaration von der Implementierung ab.
Alle Objekte sollten als Eigenschafen ihre jeweiligen Größendimensionen haben (also Länge und Breite bei Rechteck,
Radius bei Kreis und die drei Kantenlängen beim Dreieck). Als weitere Eigenschaft sollte jedes
Objekt eine Farbe besitzen. Definieren Sie dazu eine enum Color mit den Werten UNDEF,
ROT, GRUEN, GELB und BLAU (und weitere falls Sie mögen). Implementieren Sie diese
Eigenschaften über geeignete Attribute (privat).

Jede dieser Klasse sollte mindestens einen vernünftigen Konstruktor haben. Auch sollte es
möglich sein, die jeweiligen Attribute des Objektes mittels Setter-Methoden zu setzen und
mittels Getter-Methoden abzufragen.
Definieren Sie folgende Methoden:
    float flaeche() um die Fläche des Objektes zu berechnen
    float umfang()um den Umfang eines Objektes zu berechnen
    void print() um alle Eigenschaften eines Objektes auf dem Bildschirm auszugeben
Stellen Sie sicher, dass die öffentlich zugängliche Methoden als public deklariert sind.

Fläche Dreieck: A = wurzel(s(s-a)(s-b)(s-c)) mit s=(a+b+c)/2
wurzel: double sqrt(double a) <math.h>

Erweitern Sie Ihr Projekt um eine weitere Klasse Quadrat. Leiten Sie diese Klasse von der Klasse
Rechteck ab. Die Klasse Quadrat soll keine zusätzlichen Attribute bekommen

Fügen Sie eine neue Methode diagonale() hinzu, die die Diagonale eines Quadrates
berechnet. Verwenden Sie dazu diese Formel (a ist die Seitenlänge des Quadrats):
d = a*wurzel(2)

Definieren Sie mindestens einen neuen Konstruktor für die Klasse. Überschreiben Sie die geerbte
Methode void print()so dass die Eigenschaften einen Quadrates ausgegeben werden.
Erweitern Sie Ihr Hauptprogramm entsprechend
*/


class Rectangle{
    private:
        enum Color = {UNDEF, ROT, GRUEN, GELB, BLAU};
    public:
        float länge, breite;
        Rectangle(float length, float width){
            länge->length;
            breite->width;
        }
        float flaeche(this){
            return (this.länge*this.breite);
        }
        float umfang(this){
            return (2*this.länge)+(2*this.breite);
        }
        void print(void){
            cout << "Rechteck Breite: " << this.breite << "\nRechteck Länge: " << this.länge;
            cout << "\Flächeninhalt: " << this.flaeche << "\nUmfang: " << this.umfang;
        }
};

/*

class Square : Rectangle{
public:
    Square(float length){
        länge->length;
    }
    float flaeche(this){
        return (this.länge*this.länge);
    }
    float umfang(this){
        return (4*this.länge);
    }
    float diagonale(this){
        return (this.länge*sqrt(2));
    }
    void print(void){
        cout << "Quadrat Kantenlänge: " << this.länge;
        cout << "\Flächeninhalt: " << this.flaeche << "\nUmfang: " << this.umfang << "\nDiagonale: " << this.diagonale;
    }
};


class Circle{
private:
    enum Color = {UNDEF, ROT, GRUEN, GELB, BLAU};
public:
    float radius;
    Circle(float radius){
        radius->radius;
    }
    float flaeche(this){
        return (this.radius*this.radius*PI);
    }
    float umfang(this){
        return ((2*this.radius)*PI);
    }
    void print(void){
        cout << "Kreis Radius: " << this.radius;
        cout << "\Flächeninhalt: " << this.flaeche << "\nUmfang: " << this.umfang;
    }
};


class Triangle{
private:
    enum Color = {UNDEF, ROT, GRUEN, GELB, BLAU};
public:
    float Kantenl1;
    float Kantenl2;
    float Kantenl3;
    Triangle(float length1, float length2, float length3){
        Kantenl1->length1;
        Kantenl2->length2;
        Kantenl3->length3;
    }
    float flaeche(this){
        float s = ((this.Kantenl1 + this.Kantenl2 + this.Kantenl3)/2);
        float zwischenerg = s*((s-this.Kantenl1)*(s-this.Kantenl2)*(s-this.Kantenl3));
        return sqrt(zwischenerg);
    }
    float umfang(this){
        return (this.Kantenl1+this.Kantenl2+this.Kantenl3);
    }
    void print(void){
        cout << "\nDreieck Kantenlänge 1 " << this.Kantenl1 << "\nDreieck Kantenlänge 2" << this.Kantenl2 << "\nDreieck Kantenlänge 3 " << this.Kantenl3;
        cout << "\Flächeninhalt: " << this.flaeche << "\nUmfang: " << this.umfang;
    }
};

*/


