#include <iostream>
#include <cstdlib> ///rand()
#include <ctime>   ///time()
#include "ListaEncad.h"

using namespace std;

int numAleatorio(int a, int b)
{
    return a + rand()%(b - a + 1) ; /// retorna um numero inteiro aleatório entre a e b
}

int main()
{
    ListaEncad l; /// cria lista vazia
    listaEncad l2;
    int NumNos = 12;

    srand(time(NULL));
    /// ATENCAO: os valores inseridos na lista sao gerados
    /// aleatoriamente e mudam em cada execucao do programa!!!
    cout << "Inserindo valores: ";
    for(int i = 1; i <= NumNos; i++)
    {
        int val =  numAleatorio(0, 50); /// cria um valor aleatório entre 0 e 50
        cout << val << ", ";
        l.insereInicio(val);
    }
    cout << endl;
    l.imprime();
    cout<<endl;
    cout<<l.buscaMaior(40)<<endl;
    cout<<endl;
    cout<<l.calculaMedia()<<endl;

    bool existe = l.busca(25);
    cout << "O valor 20 esta na lista? ";
    if(existe)
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;

    return 0;
};

