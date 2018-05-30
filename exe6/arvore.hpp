#ifndef __arvore_hpp__
#define __arvore_hpp__

#include <algorithm>    // std::min_element, std::max_element

struct retangulo
{
    double x1;
    double x2;
    double x3;
    double x4;

    double y1;
    double y2;
    double y3;
    double y4;

    //construtor
    retangulo() {}

    retangulo(double Ax1, double Ay1, double Ax2, double Ay2, double Ax3, double Ay3, double Ax4, double Ay4)
    : x1(Ax1), x2(Ax2), x3(Ax3), x4(Ax4), y1(Ay1), y2(Ay2), y3(Ay3), y4(Ay4) {
    }
};

template<class T> struct Arvore{

//variaveis
 private:
  Arvore *esquerda;
  Arvore *direita;

public:
  T x;
  T y;

  //metodos
  Arvore* new_ktree(){
      Arvore* nova = new Arvore(nullptr, nullptr, 0, 0);
      return nova;
  }
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
  Arvore* find_kdtree(Arvore *arv, T x, T y) const {
        if(arv == nullptr){
            return nullptr;
        }
        if(arv->x == x || arv->y == y){
            std::cout << "Arvore encontrada com sucesso!" << std::endl;
            return arv;
        }
         if (x < arv->x){
           if (y < arv->y){
                arv->esquerda = find_kdtree(arv->esquerda, x, y);
           } else {
               arv->direita = find_kdtree(arv->direita, x, y);
           }

       } else {
           if (y < arv->y){
                arv->esquerda = find_kdtree(arv->esquerda, x, y);
           } else {
               arv->direita = find_kdtree(arv->direita, x, y);
           }
       }
    }
  Arvore* search_kdtree(Arvore *arv, retangulo *ret) const {

      //declara array x e array y
      double list_x[4] = { ret->x1, ret->x2, ret->x3, ret->x4 };
      double list_y[4] = { ret->y1, ret->y2, ret->y3, ret->y4 };

      //declara max_x, max_y, min_x e min_y
      double max_x = * std::max_element(list_x, list_x+4);
      double min_x = * std::min_element(list_x, list_x+4);
      double max_y = * std::max_element(list_y, list_y+4);
      double min_y = * std::min_element(list_y, list_y+4);

      return arv;

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
