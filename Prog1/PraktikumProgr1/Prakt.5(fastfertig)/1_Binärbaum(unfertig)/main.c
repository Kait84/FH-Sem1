#include <stdio.h>
#include "./bintree.c"

/*
Binärbaum: rekursiv definierte
Struktur, die sich aus  Knoten des Baumes zusammensetzt.
Beinhaltet mit Element a: Datenwert, Startpunkte von zwei Pfeilen. Jeder Pfeil = Referenz / Zeiger.
Ein solcher Pfeil verweist dabei entweder auf einen anderen Knoten, oder aber gezielt ins „Nirgendwo“, in C: NULL.

typedef struct bintree {
    struct bintree * left;
    char node;
    struct bintree * right;
} bintree;

a) Implementieren Sie obigen Datentyp in einer Header-Datei bintree.h.
b) Implementieren Sie den Konstruktor und die Selektoren für diesen Datentyp in
einer Datei. Inkludieren Sie in dieser Datei die Header-Datei bintree.h um den
Datentyp bekanntzumachen.
c) Implementieren Sie in bintree.c eine Funktion print_inorder, die einen
Binärbaum in inorder-Technik ausgibt, d.h. zuerst wird der linke Teilbaum
ausgegeben, dann der Knoten und dann der rechte Teilbaum.
d) Legen Sie eine weitere Datei main.c an in der Sie die Hauptfunktion main
implementieren. Erweitern Sie die Header-Datei um eine extern-Deklaration der
Funktion print_inorder und inkludieren Sie die Datei in main.c.
Testen...
e) Implementieren Sie in bintree.c eine Funktion count, die die Anzahl der
Knoten in einem Binärbaums berechnet. Testen Sie die Funktion in main

Testen Sie in main den Konstruktor, die Selektoren und ihre Funktion print_inorder.
*/


int main() {
    bintree* rootNode;

    rootNode = mk_node('A');
    rootNode->left = mk_node('B');
    rootNode->right = mk_node('C');
    rootNode->left->left = mk_node('D');
    rootNode->left->right = mk_node('E');
    rootNode->right->left = mk_node('F');
    rootNode->right->right = mk_node('G');

    printf("Inorder Ausgabe: \n");
    print_inorder(rootNode);

    printf("\n\nAnzahl der Nodes: %d\n", count(rootNode));

    return 0;
}

