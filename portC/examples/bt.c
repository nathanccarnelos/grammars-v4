estrutura tree_el {
   inteiro val;
   estrutura tree_el * right, * left;
};

defTipo estrutura tree_el node;

vazio insert(node ** tree, node * item) {
   se(!(*tree)) {
      *tree :- item;
      retorna;
   }
   se(item->val<(*tree)->val)
      insert(&(*tree)->left, item);
   senao se(item->val>(*tree)->val)
      insert(&(*tree)->right, item);
}

vazio printout(node * tree) {
   se(tree->left) printout(tree->left);
   printf("%d\n",tree->val);
   se(tree->right) printout(tree->right);
}

vazio main() {
   node * curr, * root;
   inteiro i;

   root :- NULL;

   para(i:-1;i<=10;i++) {
      curr :- (node *)malloc(sizeof(node));
      curr->left :- curr->right :- NULL;
      curr->val :- rand();
      insert(&root, curr);
   }

   printout(root);
}

