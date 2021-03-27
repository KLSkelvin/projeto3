//
// Created by Vitinho on 22/03/2021.
//

#include "Simulador.h"

bool operator< (const Evento &a1, const Evento &a2){
    return a1.instante<a2.instante;
}
bool operator> (const Evento &a1, const Evento &a2){
    return a1.instante>a2.instante;
}

Evento teste (int TempoSimulacao, int chegacliente, int tempoatendimento){

    Situacao Atendente;

    int instante = 0;
    list<Evento> FilaCliente;

    list<Evento> FilaEvento;

    Evento primeiro{0, Chegada, instante};

    primeiro.cliente.chegada = instante;

    FilaCliente.push_back(primeiro);

    Atendente = livre;
    int multiplo=0;
    //cria todos os eventos de chegada de cliente
    while (multiplo<=TempoSimulacao){
        multiplo+=chegacliente;
        Evento novocliente;
        novocliente.instante=multiplo;
        novocliente.tipo=Chegada;
        novocliente.cliente.chegada=multiplo;
        FilaCliente.push_back(novocliente);
    }

    while (instante <= TempoSimulacao){
        //caso o atendente esteja livre pega o proximo cliente da fila para atender

        if (Atendente==livre){
            //verifica se tem cliente na fila
            if (!FilaCliente.empty()) {
                FilaCliente.front().cliente.atendimento = instante;
                FilaCliente.front().instante=instante+tempoatendimento;
                FilaCliente.front().tipo = Atendimento;
                FilaEvento.push_front(FilaCliente.front());
                FilaCliente.pop_front();
                Atendente = ocupado;
            }

            //caso o atendente esteja ocupado, ele verifica se ja deu tempo para terminar o atendimento
        } else{
            if (FilaEvento.front().cliente.atendimento+tempoatendimento==instante){
                FilaEvento.front().cliente.saida=instante;
                FilaEvento.front().tipo=Saida;
                Atendente=livre;
            }
        }
        Evento VerificaFilaCliente = FilaCliente.front();
        //chegada de clientes
//        if (instante%chegacliente==0 && instante!=0){
//            Evento novocliente;
//            novocliente.instante=instante;
//            novocliente.tipo=Chegada;
//            novocliente.cliente.chegada=instante;
//            FilaCliente.push_front(novocliente);
//        }
        Evento teste=FilaEvento.front();
        //FilaEvento.sort();
        instante=FilaEvento.front().instante;
    }
    cout << "Numero de clientes atendidos: " << FilaEvento.size() << endl;
    cout << "clientes na fila ao final da simulacao: " << FilaCliente.size() << endl;
    cout << "estado do atendente ao final da simulacao: " << Atendente << endl;
}