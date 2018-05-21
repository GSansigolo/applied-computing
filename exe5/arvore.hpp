#ifndef __arvore_hpp__
#define __arvore_hpp__

template<class T> struct Arvore{

//variaveis
 private:
  Arvore *esquerda;
  Arvore *direita;

 public:
  T valor;

  //metodos
  Arvore* destruir(Arvore *arv, T v){
          std::cout << "~" << std::endl;
    }
  Arvore* busca(Arvore *arv, T v) const {
      if(arv == nullptr){
          return nullptr;
      }
      if(arv->valor == v){
          std::cout << "Arvore encontrada com sucesso!" << std::endl;
          return arv;
      }
      return (v < arv->valor) ? busca(arv->esquerda, v) : busca(arv->direita, v);
  }
  Arvore* inserir(Arvore *arv, T v){
       if(arv == nullptr){
           Arvore* nova = new Arvore(nullptr, nullptr, v);
           //std::cout << "Arvore inserida com sucesso!" << std::endl;
           return nova;
       }
       if (v < arv->valor){
           arv->esquerda = inserir(arv->esquerda, v);
       } else {
           arv->direita = inserir(arv->direita, v);
       }
   }
  void printPreOrder(Arvore *arv){
        if(arv == nullptr){
            return;
        }
        std::cout << arv->valor << " ";
        printPreOrder(arv->esquerda);
        printPreOrder(arv->direita);
    }
  void printInOrder(Arvore *arv){
        if(arv == nullptr){
            return;
        }
        printInOrder(arv->esquerda);
        std::cout << arv->valor << " ";
        printInOrder(arv->direita);
    }
  void printPosOrder(Arvore *arv){
        if(arv == nullptr){
            return;
        }
        printPosOrder(arv->esquerda);
        printPosOrder(arv->direita);
        std::cout << arv->valor << " ";
    }
  int altura(Arvore *arv){
      if(arv == nullptr){
          return 0;
      } else {
          //posorder
          int alturaEsq = altura(arv->esquerda);
          int alturaDir = altura(arv->direita);
          if(alturaEsq > alturaDir){
              return alturaEsq+1;
          } else{
              return alturaDir+1;
          }
      }
  }

 //construtor
 Arvore(const T v)
 : esquerda(nullptr), direita(nullptr), valor(v) {
}
 Arvore(Arvore *e, Arvore* d, const T v)
 : esquerda(e), direita(d), valor(v) {
}

//destrutor
 ~Arvore(){
     std::cout << "Arvore destruída com sucesso!" << std::endl;
 }

};


#endif // __arvore_hpp
