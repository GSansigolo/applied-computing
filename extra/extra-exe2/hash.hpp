#ifndef __hash_hpp__
#define __hash_hpp__

//-------------------------
//Estrutura Hash
//-------------------------
struct hash{
    std::string texto;
};

//-------------------------
//Função Retorna Index
//-------------------------
int geraIndice(std::string s){
    int soma=0,indice=0;
    for(int i=0; i < s.length(); i++){
        soma += s[i];
    }
    indice = soma%30;
    return indice;
}

//----------------------------------------------//
//   Indice é resto da divisão pelo tamanho     //
// do array da somatoria do valor de cada letra //
// da palavra                                   //
//----------------------------------------------//

#endif // __hash_hpp
