#include <iostream>
#include <vector>
#include <string>
#include "maxheap.hpp"

int main(){

    std::cout << "Lista Complementar - Exercicio 5 [ Gabriel Sansigolo ]" << "\n\n";

    //-------------------------
    //Declara o Array Teste
    //-------------------------
    std::vector<int> S = {14, 11, 7, 16, 5, 12, 3, 19, 8, 21, 6, 17, 13};

    //-------------------------
    //Cria o Max Heap
    //-------------------------
    std::vector<int> mahHeap = novoMaxHeap(S, 13);

    //-------------------------
    //Testa o Heap (Max)
    //-------------------------
    if(max(mahHeap)==21){
        std::cout << "Sucesso!" << "\n";
    } else{
        std::cout << "Falha!" << "\n";
    }

    //-------------------------
    //Testa o Heap (Min)
    //-------------------------
    if(min(mahHeap)==3){
        std::cout << "Sucesso!" << "\n";
    } else{
        std::cout << "Falha!" << "\n";
    }

    return 0;
}
