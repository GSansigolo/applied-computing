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
 Arvore* destruir(Arvore *arv,T v){
        std::cout << "~" << std::endl;
  };
 Arvore* inserir(T v){
    Arvore* arv = this;
    Arvore* arv_pai = nullptr;
    while(arv){
        if(arv->valor == v){
            //std::cout << "Chave duplicada!" << std::endl;
        }
        arv_pai = arv;
        arv = (v < arv->valor) ? arv->esquerda : arv->direita;
        Arvore* new_arv= new Arvore(nullptr, nullptr, v);
        if(arv_pai == nullptr){
            new_arv = this;
        } else if(v < arv_pai->valor){
            arv_pai->esquerda = new_arv;
        } else {
            arv_pai->direita = new_arv;
            return new_arv;
        }
    }
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
 void printPreOrder(Arvore *arv){

     std::cout << arv->valor << " ";

 } /*
 void printPreOrder(Arvore *arv){
     if(arv == nullptr)
         return;

     std::cout << arv->valor << " ";
     printPreOrder(arv->esquerda);
     printPreOrder(arv->direita);
 } */
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

//construtor
 Arvore() : esquerda(this), direita(this) {
}
 Arvore(Arvore *e, Arvore* d, const T& v)
 : esquerda(e), direita(d), valor(v) {
}

//destrutor
 ~Arvore(){
 }

};


#endif // __arvore_hpp
