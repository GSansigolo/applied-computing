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



 //construtor
 Arvore() : esquerda(this), direita(this) {
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
