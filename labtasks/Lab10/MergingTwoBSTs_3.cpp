Node* mergeTrees(Node* n1, Node* n2) {
      if(!n1 && n2){
         return n2;
      }
      else if(!n2 && n1)return n1;
      else if(!n1 && !n2)return NULL;
      n1->val+=n2->val;
      n1->left = mergeTrees(n1->left,n2->left);
      n1->right = mergeTrees(n1->right,n2->right);
      return n1;
   }