    #include <iostream>
    #include <iostream>

    //struct
    template<class T> struct Arvore
    {

      //variaveis
      Arvore *esquerda;
      Arvore *direita;
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

    //main
    int main(){
        std::cout << "Lista 1 - Exercicio 1 [ Gabriel Sansigolo ]" << "\n \n";

        //testando o contrutor da arvore para diferentes tipos de dados
        Arvore<std::string> arvString;
        Arvore<int> arvInt;
        Arvore<double> arvDouble;

        std::cout << "\n";

        return 0;
    }
