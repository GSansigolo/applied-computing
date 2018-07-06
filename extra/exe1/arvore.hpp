#ifndef __arvore_hpp__
#define __arvore_hpp__

template <class T> class Arvore{
//variaveis
 private:
    std::vector<Arvore> arvs;

 public:
  char valor;
  bool flag;
  Arvore* pai;

  //metodos
   Arvore* inserir(Arvore *arv, T v, bool flag){
       if(pai == nullptr){
           Arvore* nova = new Arvore(nullptr, v, flag);
           //std::cout << "Arvore inserida com sucesso!" << std::endl;
           return nova;
       }
       if (v == arv->valor){
           return nullptr;
       } else {
           //arv->arvs[0] = inserir(arv->arvs[0], v, flag);
       }
   }
   void escreve(Arvore *arv, std::string c, int size){
       for(int i=0; i<size; i++) {
          std::cout << c.at(i) << "\n";
          if (size-1 == i){
            inserir(&arv, c.at(i), true);
          } else {
            inserir(&arv, c.at(i), false);
          }
       }
   }

   //construtor
 Arvore():pai(nullptr){
   // std::cout << "Construtor Multtree" << std::endl;
 }
 Arvore(Arvore *a, const T v, bool f)
 : arvs(arvs), valor(v), flag(f){
}
 
//destrutor
 ~Arvore(){
     std::cout << "Arvore destruída com sucesso!" << std::endl;
 }

};


#endif // __arvore_hpp
