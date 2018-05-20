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

//metodos
 void inserir(T v){
    Arvore* nova = new Arvore({this}, v);
    return nova;
 }

//construtor
 Arvore(){

 }
 Arvore(std::vector<Arvore> a, const T& v)
 : arvores(a), valor(v) {

}

//destrutor
 ~Arvore(){
     std::cout << "Arvore destruída com sucesso!" << std::endl;
 }
};

#endif // __arvore_hpp
