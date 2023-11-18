#include "./GeomObj.cpp"

/*
Schreiben Sie folgende Klassen um geometrische Objekte zu repr�sentieren:
1. Klasse Rechteck
2. Klasse Kreis
3. Klasse Dreieck

Trennen Sie dabei die Deklaration von der Implementierung ab.
Alle Objekte sollten als Eigenschafen ihre jeweiligen Gr��endimensionen haben (also L�nge und Breite bei Rechteck,
Radius bei Kreis und die drei Kantenl�ngen beim Dreieck). Als weitere Eigenschaft sollte jedes
Objekt eine Farbe besitzen. Definieren Sie dazu eine enum Color mit den Werten UNDEF,
ROT, GRUEN, GELB und BLAU (und weitere falls Sie m�gen). Implementieren Sie diese
Eigenschaften �ber geeignete Attribute (privat).


Jede dieser Klasse sollte mindestens einen vern�nftigen Konstruktor haben. Auch sollte es
m�glich sein, die jeweiligen Attribute des Objektes mittels Setter-Methoden zu setzen und
mittels Getter-Methoden abzufragen.
Definieren Sie folgende Methoden:
    float flaeche() um die Fl�che des Objektes zu berechnen
    float umfang()um den Umfang eines Objektes zu berechnen
    void print() um alle Eigenschaften eines Objektes auf dem Bildschirm auszugeben
Stellen Sie sicher, dass die �ffentlich zug�ngliche Methoden als public deklariert sind.

Fl�che Dreieck: A = wurzel(s(s-a)(s-b)(s-c)) mit s=(a+b+c)/2
wurzel: double sqrt(double a) <math.h>

Schreiben Sie ein main Programm, das eine Anzahl von Objekten erzeugt und am Bildschirm
ausgibt. Berechnen Sie ferner Umfang und Fl�che der Objekte und geben Sie diese aus.

Erweitern Sie Ihr Projekt um eine weitere Klasse Quadrat. Leiten Sie diese Klasse von der Klasse
Rechteck ab. Die Klasse Quadrat soll keine zus�tzlichen Attribute bekommen

F�gen Sie eine neue Methode diagonale() hinzu, die die Diagonale eines Quadrates
berechnet. Verwenden Sie dazu diese Formel (a ist die Seitenl�nge des Quadrats):
d = a*wurzel(2)

Definieren Sie mindestens einen neuen Konstruktor f�r die Klasse. �berschreiben Sie die geerbte
Methode void print()so dass die Eigenschaften einen Quadrates ausgegeben werden.
Erweitern Sie Ihr Hauptprogramm entsprechend
*/

int main(){

    rect(12.5, 10)
    circ(5.7);
    tri(12, 9.5, 14);

    return 0;
}
