#ifndef __arvore_hpp__
#define __arvore_hpp__

//struct
template<class T> struct Arvore{

 //variaveis
 private:
  Arvore *esquerda;
  Arvore *direita;
 public:
  T valor;

 //construtor
 Arvore() : esquerda(this), direita(this) {
  std::cout << "Arvore construída com sucesso!" << std::endl;
 }
 Arvore(Arvore *e, Arvore* d, const T& v)
  : esquerda(e), direita(d), valor(v) {
  }
};


//funcs
void busca(){

}

void insercao(){

}

void remocao(){

}

#endif // __arvore_hpp
