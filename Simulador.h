//
// Created by Vitinho on 22/03/2021.
//

#ifndef SIMULADOREVENTOS_SIMULADOR_H
#define SIMULADOREVENTOS_SIMULADOR_H

#include <list>
#include <iostream>

using namespace std;

    enum Situacao {ocupado, livre};

// representa um cliente a ser atendido
struct Cliente {
    //int prio; // prioridade do cliente (caso haja)

    // estes atributos servem para que se possam calcular algumas estatísticas
    int chegada; // instante de chegada no sistema
    int atendimento; // instante do inicio do atendimento
    int saida; // instante da saida do sistema
};

enum TipoEvento {Chegada, Saida, Atendimento};

// representa um evento de simulação
struct Evento {
    int instante; // quando deverá ser executado
    TipoEvento tipo; // tipo do evento
    Cliente cliente; // o cliente a ser atendido
};

Evento teste(int TempoSimulacao, int chegacliente, int tempoatendimento);



#endif //SIMULADOREVENTOS_SIMULADOR_H
