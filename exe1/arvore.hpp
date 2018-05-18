#ifndef __arvore_hpp__
#define __arvore_hpp__

#include <iostream>
#include <vector>

//struct
template<class T> struct Arvore{

//variaveis
 private:
  std::vector<Arvore> arvores;
 public:
  T valor;

//construtor
Arvore(){
 std::cout << "Arvore construída com sucesso!" << std::endl;
 }
 Arvore(std::vector<Arvore> a, const T& v)
  : arvores(a), valor(v) {
 }
};

//funcs
int insert(Arvore arv, ){

}

#endif // __arvore_hpp
