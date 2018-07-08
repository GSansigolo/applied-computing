#ifndef __arvore_hpp__
#define __arvore_hpp__

//-------------------------
//Estrutura Arvore
//-------------------------
struct ArvoreTrie{
    struct ArvoreTrie *filhos[26];
    bool final;
};

//-------------------------
//Função Criar Nova Arvore
//-------------------------
struct ArvoreTrie *criaArvore(void){
    struct ArvoreTrie *ponteiroArvore = new ArvoreTrie;
    ponteiroArvore->final = false;
    for (int i = 0; i < 26; i++)
        ponteiroArvore->filhos[i] = NULL;
    return ponteiroArvore;
}

//-------------------------
//Função Escreve
//-------------------------
void escreve(struct ArvoreTrie *raiz, std::string palavra){
    struct ArvoreTrie *ponteiroArvore = raiz;
    for (int i = 0; i < palavra.length(); i++){
        int indice = palavra[i] - 'A';
        if (!ponteiroArvore->filhos[indice])
            ponteiroArvore->filhos[indice] = criaArvore();
        ponteiroArvore = ponteiroArvore->filhos[indice];
    }
    ponteiroArvore->final = true;
}

//-------------------------
//Função Busca
//-------------------------
bool busca(struct ArvoreTrie *raiz, std::string palavra){
    struct ArvoreTrie *ponteiroArvore = raiz;
    for (int i = 0; i < palavra.length(); i++){
        int indice = palavra[i] - 'A';
        if (!ponteiroArvore->filhos[indice])
            return false;
        ponteiroArvore = ponteiroArvore->filhos[indice];
    }
    return (ponteiroArvore != NULL && ponteiroArvore->final);
}

#endif // __arvore_hpp
