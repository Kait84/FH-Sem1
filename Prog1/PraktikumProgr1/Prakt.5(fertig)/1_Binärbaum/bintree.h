
typedef struct bintree{
    struct bintree* left;
    char node;
    struct bintree* right;
}bintree;


void print_inorder(bintree* treeNode);


