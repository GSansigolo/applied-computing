    #include <iostream>
    #include "arvore.hpp"

    //main
    int main(){

        std::cout << "Lista 1 - Exercicio 6 [ Gabriel Sansigolo ]" << "\n \n";

        //declaração da kdtree
        Arvore<double> kdtree(5,5);

        //Teste do construtor
        std::cout << "Teste da função New()" << "\n";
        std::cout << sizeof(kdtree) << std::endl;

        //teste da função insert(kdtree, point)
        std::cout << "\nTeste da função insert(kdtree, point)" << "\n";
        kdtree.insert_kdtree(&kdtree, 6, 6);
        kdtree.insert_kdtree(&kdtree, 4, 4);
        kdtree.insert_kdtree(&kdtree, 3, 6);
        kdtree.insert_kdtree(&kdtree, 7, 4);

        //teste da função find(kdtree, point)
        std::cout << "\nTeste da função find(kdtree, point))" << "\n";

        //teste do destrutor
        std::cout << "\n\nTeste Destrutores" << "\n";

        return 0;
    }
