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
        kdtree.insert_kdtree(&kdtree, 1, 7, 0);
        kdtree.insert_kdtree(&kdtree, 1, 1, 0);
        kdtree.insert_kdtree(&kdtree, 7, 7, 0);
        kdtree.insert_kdtree(&kdtree, 7, 1, 0);

        //teste da função find(kdtree, point)
        std::cout << "\nTeste da função find(kdtree, point)" << "\n";
        kdtree.find_kdtree(&kdtree, 1, 1, 0);
        kdtree.find_kdtree(&kdtree, 7, 7, 0);

        //teste da função search(kdtree, rectangle)
        std::cout << "\nTeste da função search(kdtree, rectangle)" << "\n";
        retangulo ret;
        ret.x1 = 1;
        ret.y1 = 1;
        ret.x2 = 1;
        ret.y2 = 5;
        ret.x3 = 5;
        ret.y3 = 5;
        ret.x4 = 1;
        ret.y4 = 5;
        kdtree.search_kdtree(&kdtree, &ret, 0);

        //teste da função clear(kdtree)
        std::cout << "\nTeste da função clear(kdtree)" << "\n";

        //teste do destrutor
        std::cout << "\nTeste Destrutores" << "\n";

        return 0;
    }
