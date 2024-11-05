#ifndef LISTAE_CLIENTE_H_INCLUDED
#define LISTAE_CLIENTE_H_INCLUDED
#include "Cliente.h"

#define MAX_SIZE 100

typedef struct {
    TDA_Cliente data[MAX_SIZE];
    int ultimo;
    int cursor;
} List_of_Cliente;

void init_lC(List_of_Cliente *l) {
    l->ultimo = 0;
    l->cursor = -1;
}

int isemptyC(List_of_Cliente l) {
    return l.ultimo == 0;
}

int isfullC(List_of_Cliente l) {
    return l.ultimo == MAX_SIZE - 1;
}
TDA_Cliente copyyC(List_of_Cliente l) {
    return l.data[l.cursor];
}
void forwardsC(List_of_Cliente *l) {
    if (l->cursor <= l->ultimo ) l->cursor++;
}

void resetC(List_of_Cliente *l) {
    l->cursor = 0;
}

int inserteC(List_of_Cliente *l, TDA_Cliente NuevoCliente) {
        for (int i = 0 ; i >= l->cursor;i--){
            l->data[i+1] = l->data[i];
        }
            l->data[l->cursor] = NuevoCliente;
            l->ultimo++;
            return 1;
}

int supressC(List_of_Cliente *l) {
        for (int i = l->cursor; i < l->ultimo; i++) {
            l->data[i] = l->data[i + 1];
        }
        l->ultimo--;
        return 1;

}

int isOosC(List_of_Cliente l) {
    return l.cursor > l.ultimo;
}


#endif // LISTAE_CLIENTE_H_INCLUDED
