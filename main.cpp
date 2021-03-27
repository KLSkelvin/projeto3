#include <iostream>
#include "Simulador.h"


//bool operator< (const Evento &a1, const Evento &a2){
//    return a1.instante<a2.instante;
//}


int main() {

    teste(2000, 11, 12);
//    float HoraAtual;
//    Situacao Atendente;
//
//    HoraAtual = Inicio;
//    float aux = HoraAtual;
//    int NumeroCliente = 1;
//    list<Evento> FilaEvento;
//    Evento primeiro{Inicio, Chegada, HoraAtual};
//    primeiro.cliente.chegada = HoraAtual;
//    FilaEvento.push_back(primeiro);
//    Atendente = livre;
//    while (HoraAtual!=24) {
//        Evento teste = FilaEvento.front();
//        HoraAtual = FilaEvento.front().instante;
//        if (Atendente == livre) {
//            if (FilaEvento.front().tipo == Chegada) {
//
//                Atendente = ocupado;
//                FilaEvento.front().tipo = Atendimento;
//                FilaEvento.front().cliente.chegada = HoraAtual;
//
//            }else if (FilaEvento.front().tipo == Saida) {
//
//                HoraAtual += 0.50; // como so ocorre evento de 30m em 30m eu ja coloquei pra passar a hora em 30m
//                FilaEvento.front().cliente.saida = HoraAtual;
//                aux = HoraAtual + 0.50;
//                Evento Novo{aux, Chegada};
//                FilaEvento.push_front(Novo);
//            }
//        } else if (FilaEvento.front().tipo == Atendimento) {
//
//            Atendente = livre;
//            FilaEvento.front().instante=HoraAtual;
//            FilaEvento.front().cliente.atendimento = HoraAtual;
//            FilaEvento.front().tipo = Saida;
//        }
//        Evento final = FilaEvento.front();
//        //funcao que ordena a FilaEvento
//        FilaEvento.sort();
//    }
//
//    for (auto it=FilaEvento.begin(); it != FilaEvento.end(); it++)
//        cout << it->cliente.chegada << endl;
    return 0;
}
