#include <stdio.h>
#include "./bintree.h"

/*
typedef struct bintree {
    struct bintree * left;
    char node;
    struct bintree * right;
} bintree;

c) Implementieren Sie in bintree.c eine Funktion print_inorder, die einen
Binärbaum in inorder-Technik ausgibt, d.h. zuerst wird der linke Teilbaum
ausgegeben, dann der Knoten und dann der rechte Teilbaum.
e) Implementieren Sie in bintree.c eine Funktion count, die die Anzahl der
Knoten in einem Binärbaums berechnet. Testen Sie die Funktion in main
*/

//Konstruktor
bintree mk_tree(bintree t){
    t.left = mk_tree.left;
    t.right = mk_tree.right;
    t.node = mk_tree.node;
    return t;
}

//Selektoren
sl(bintree t){
    return t.left;
}
lr(bintree t){
    return t.right;
}
ln(bintree t){
    return t.node;
}


//Ausgabe in inorder-Technik
int print_inorder(struct tree){
    if(tree == NULL){
        return;
    }else{
        print_inorder(tree.left);
        printf("%c -->", tree.node);
        print_inorder(tree.right);
    }
    return 0;
}

/*
int count(struct tree){

}
*/

