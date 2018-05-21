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
           std::cout << "Arvore inserida com sucesso!" << std::endl;
           return nova;
       }
       if (v < arv->valor){
           arv->esquerda = inserir(arv->esquerda, v);
       } else {
           arv->direita = inserir(arv->direita, v);
       }
   }
  void PreOrder(Arvore *arv, void (&f)(T)){
        if(arv == nullptr){
            return;
        }
        f(arv->valor);
        std::cout << " ";
        PreOrder(arv->esquerda, f);
        PreOrder(arv->direita, f);
    }
  void InOrder(Arvore *arv, void (&f)(T)){
        if(arv == nullptr){
            return;
        }
        InOrder(arv->esquerda, f);
        f(arv->valor);
        std::cout << " ";
        InOrder(arv->direita, f);
    }
  void PosOrder(Arvore *arv, void (&f)(T)){
        if(arv == nullptr){
            return;
        }
        PosOrder(arv->esquerda, f);
        PosOrder(arv->direita, f);
        f(arv->valor);
        std::cout << " ";
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

//funcoes

void imprimi_i(int v){
    std::cout << v << ' ';
}

void imprimi_d(double g){
    std::cout << g << ' ';
}

#endif // __arvore_hpp
