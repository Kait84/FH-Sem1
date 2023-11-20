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
bintree mk_node(char data){
    bintree node = malloc(sizeof(bintree));
    if(t == NULL){
        return 0;
    }
    t.left = NULL;
    t.right = NULL;
    t.node = data;
    return t;
}

//Selektoren
sl(bintree node){
    return node->left;
}
sr(bintree node){
    return node->right;
}

//Speicher freigeben
void delNode(bintree node) {
    if (node != NULL) {
        delNode(node->left);
        delNode(node->right);
        free(node);
    }
}

//Ausgabe in inorder-Technik
int print_inorder(bintree rootNode){
    if(rootNode != NULL){
        print_inorder(rootNode->left);
        printf("%c --> ", rootNode->node);
        print_inorder(rootNode->right);
    }
    return 0;
}

/*
int count(struct tree){

}
*/


