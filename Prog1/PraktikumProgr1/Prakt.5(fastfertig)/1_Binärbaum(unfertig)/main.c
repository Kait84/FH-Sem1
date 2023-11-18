#include <stdio.h>
#include "./bintree.h"
#include <stdlib.h>
//#include "./bintree.c"

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

+a) Implementieren Sie obigen Datentyp in einer Header-Datei bintree.h.

b) Implementieren Sie den Konstruktor und die Selektoren für diesen Datentyp in
einer Datei. Inkludieren Sie in dieser Datei die Header-Datei bintree.h um den
Datentyp bekanntzumachen.
c) Implementieren Sie in bintree.c eine Funktion print_inorder, die einen
Binärbaum in inorder-Technik ausgibt, d.h. zuerst wird der linke Teilbaum
ausgegeben, dann der Knoten und dann der rechte Teilbaum.
d) Legen Sie eine weitere Datei main.c an in der Sie die Hauptfunktion main
implementieren. Erweitern Sie die Header-Datei um eine extern-Deklaration der
Funktion print_inorder und inkludieren Sie die Datei in main.c. Testen Sie
in main den Konstruktor, die Selektoren und ihre Funktion print_inorder.
e) Implementieren Sie in bintree.c eine Funktion count, die die Anzahl der
Knoten in einem Binärbaums berechnet. Testen Sie die Funktion in main
*/

//Konstruktor
bintree mk_tree(char c){
    bintree* tree = (bintree*)malloc(sizeof(tree));

    tree->node = c;
    tree->left = NULL;
    tree->right = NULL;

    return *tree;
}

//Selektoren
sl(bintree t){
    return t.left;
}
sr(bintree t){
    return t.right;
}
sn(bintree t){
    return t.node;
}


//Ausgabe in inorder-Technik
int print_inorder(bintree* tree){
    print_inorder(tree->left);
    printf("%c", tree->node);
    print_inorder(tree->right);
    return 0;
}



int main(void){
    bintree* rootnode;

    rootnode = mk_tree('a');
    rootnode->left = mk_tree('b');
    rootnode->right = mk_tree('c');

    print_inorder(tree);

    //print_inorder(tree);
	return 0;
}

