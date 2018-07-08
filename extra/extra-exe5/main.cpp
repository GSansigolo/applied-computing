#include <iostream>
#include <vector>
#include <string>
#include "maxheap.hpp"

int main(){

    std::cout << "Lista Complementar - Exercicio 5 [ Gabriel Sansigolo ]" << "\n\n";

    //-------------------------
    //Novo Grafo
    //-------------------------
    struct grafo *grafoTeste = novoGrafo();

    //-------------------------
    //Salva Adjacências
    //-------------------------
    salvaNo(grafoTeste, 0, 'B');
    salvaNo(grafoTeste, 0, 'D');
    salvaNo(grafoTeste, 0, 'E');

    salvaNo(grafoTeste, 1, 'C');
    salvaNo(grafoTeste, 1, 'A');
    salvaNo(grafoTeste, 1, 'E');

    salvaNo(grafoTeste, 2, 'B');
    salvaNo(grafoTeste, 2, 'D');
    salvaNo(grafoTeste, 2, 'F');

    salvaNo(grafoTeste, 3, 'A');
    salvaNo(grafoTeste, 3, 'C');
    salvaNo(grafoTeste, 3, 'F');
    salvaNo(grafoTeste, 3, 'E');

    salvaNo(grafoTeste, 4, 'A');
    salvaNo(grafoTeste, 4, 'D');
    salvaNo(grafoTeste, 4, 'F');
    salvaNo(grafoTeste, 4, 'B');

    salvaNo(grafoTeste, 5, 'C');
    salvaNo(grafoTeste, 5, 'D');
    salvaNo(grafoTeste, 5, 'E');
    salvaNo(grafoTeste, 5, 'G');

    salvaNo(grafoTeste, 6, 'F');

    return 0;
}
