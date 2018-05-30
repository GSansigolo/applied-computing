#ifndef __arvore_hpp__
#define __arvore_hpp__

template<class T> struct Arvore{

//variaveis
 private:
  Arvore *esquerda;
  Arvore *direita;

public:
  T x;
  T y;

  //metodos
  Arvore* insert_kdtree(Arvore *arv, T x, T y){
      if(arv == nullptr){
          Arvore* nova = new Arvore(nullptr, nullptr, x, y);
           std::cout << "Arvore inserida com sucesso!" << std::endl;
           return nova;
       }
       if (x < arv->x){
           if (y < arv->y){
                arv->esquerda = insert_kdtree(arv->esquerda, x, y);
           } else {
               arv->direita = insert_kdtree(arv->direita, x, y);
           }

       } else {
           if (y < arv->y){
                arv->esquerda = insert_kdtree(arv->esquerda, x, y);
           } else {
               arv->direita = insert_kdtree(arv->direita, x, y);
           }

       }
   }
  Arvore* busca(Arvore *arv, point p) const {
        if(arv == nullptr){
            return nullptr;
        }
        if(arv->valor == v){
            std::cout << "Arvore encontrada com sucesso!" << std::endl;
            return arv;
        }
        return (v < arv->valor) ? busca(arv->esquerda, v) : busca(arv->direita, v);
    }

  /*Arvore* destruir(Arvore *arv, point p){
          std::cout << "~" << std::endl;
    }*/
  /*void PreOrder(Arvore *arv, void (&p)(point)){
        if(arv == nullptr){
            return;
        }
        f(arv->valor);
        std::cout << " ";
        PreOrder(arv->esquerda, p);
        PreOrder(arv->direita, p);
    }*/
  /*void InOrder(Arvore *arv, void (&p)(point)){
        if(arv == nullptr){
            return;
        }
        InOrder(arv->esquerda, p);
        f(arv->valor);
        std::cout << " ";
        InOrder(arv->direita, p);
    }*/
  /*void PosOrder(Arvore *arv, void (&p)(point)){
        if(arv == nullptr){
            return;
        }
        PosOrder(arv->esquerda, p);
        PosOrder(arv->direita, p);
        f(arv->valor);
        std::cout << " ";
    }*/

  Arvore* new_ktree(){
      Arvore* nova = new Arvore(nullptr, nullptr, 0, 0);
      return nova;
  }

  //construtor
  Arvore(const T Ax, const T Ay)
  : esquerda(nullptr), direita(nullptr), x(Ax), y(Ay) {
 }

 Arvore(Arvore *e, Arvore *d, T xA, T yA)
 : esquerda(e), direita(d), x(xA), y(yA) {
 }

//destrutor
 ~Arvore(){
     std::cout << "Arvore destruída com sucesso!" << std::endl;
 }
};


#endif // __arvore_hpp
