
estrutura list_el {
   inteiro val;
   estrutura list_el * next;
};

defTipo estrutura list_el item;

vazio main() {
   item * curr, * head;
   inteiro i;

   head = NULL;

   para(i=1;i<=10;i++) {
      curr = (item *)malloc(tamanhoDe(item));
      curr->val = i;
      curr->next  = head;
      head = curr;
   }

   curr = head;

   enquanto(curr) {
      printf("%d\n", curr->val);
      curr = curr->next ;
   }
}

