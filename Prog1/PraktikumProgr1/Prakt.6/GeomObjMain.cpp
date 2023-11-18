#include "./GeomObj.cpp"

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

Schreiben Sie ein main Programm, das eine Anzahl von Objekten erzeugt und am Bildschirm
ausgibt. Berechnen Sie ferner Umfang und Fläche der Objekte und geben Sie diese aus.

Erweitern Sie Ihr Projekt um eine weitere Klasse Quadrat. Leiten Sie diese Klasse von der Klasse
Rechteck ab. Die Klasse Quadrat soll keine zusätzlichen Attribute bekommen

Fügen Sie eine neue Methode diagonale() hinzu, die die Diagonale eines Quadrates
berechnet. Verwenden Sie dazu diese Formel (a ist die Seitenlänge des Quadrats):
d = a*wurzel(2)

Definieren Sie mindestens einen neuen Konstruktor für die Klasse. Überschreiben Sie die geerbte
Methode void print()so dass die Eigenschaften einen Quadrates ausgegeben werden.
Erweitern Sie Ihr Hauptprogramm entsprechend
*/

int main(){

    rect(12.5, 10)
    circ(5.7);
    tri(12, 9.5, 14);

    return 0;
}
