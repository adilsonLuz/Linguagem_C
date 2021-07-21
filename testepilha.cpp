void empilha (int *p[], int *topo, int valor){
    if (*topo<10)
    {
        p[*topo] = valor;
        *topo++;
    }
    else
        printf ("Pilha cheia!");
}

int desempilha (int *p[], int *topo){
    if (*topo>0)
    {
        *topo--;
        return *p[*topo];
    }
    else
        printf("Pilha vazia!");
}


int main() {

    int pilha[10], topo=0;
    int i, valor=1020;
    for (i=0; i<10; i++)
    {
        empilha(pilha, &topo, valor);
        valor = valor + i;
    }

    for (i=0; i<10; i++)
    {
        printf("&d\n", desempilha(pilha, &topo));
    }
}
