#include <stdio.h>
#include <stdlib.h>
#include "./bintree.h"


//Selektoren
char gn(bintree* tN){
    return tN->node;
}

bintree* gl(bintree *tN){
    return tN->left;
}
bintree* gr(bintree *tN){
    return tN->right;
}
void sl(bintree *tN, bintree *left){
    tN->left = left;
}
void sr(bintree *tN, bintree *right){
    tN->right = right;
}

//Konstruktor
bintree* mk_node(char nodeName){
    bintree* treeNode = malloc(sizeof(bintree));

    treeNode->node = nodeName;
    treeNode->left = NULL;
    treeNode->right = NULL;

    return treeNode;
}

//Ausgabe in inorder-Technik
print_inorder(bintree* treeNode){
    if(treeNode == NULL) return 0;

    print_inorder(treeNode->left);
    printf("%c --> ", treeNode->node);
    print_inorder(treeNode->right);
}

//Alle Nodes Zählen
int count(bintree* treeNode){
    if(treeNode==NULL) return 0;

    int leftNodes, rightNodes;
    leftNodes = count(treeNode->left);
    rightNodes = count(treeNode->right);

    return (leftNodes+rightNodes+1);
}


