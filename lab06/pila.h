template <typename T>
class Pila {

public:
    Pila<T>();
    bool push(T x);
    bool pop();
    T top();
    bool esVacia();

private:
    static const int TAM_MAX = 100;
    T pila[TAM_MAX];
    int tope;
};

//  Constructor.
template <typename T>
Pila<T>::Pila() {

    tope -=1;
}

// Verificar si hay espacio para un elemento más.
template <typename T>
bool Pila<T>::push(T x) {

    bool false;
    if (tope < TAM_MAX - 1) {
        tope +=1;
        pila[tope] = x;
        exito = true;
    }
    return exito;
}

//
template <typename T>
bool Pila<T>::pop() {

    bool exito = false;
    if (!esVacia()) {
        tope -=1;
        exito = true;
    }
    return exito;
}

//
template <typename T>
T Pila<T>::top() {

    T elem = NULL;
    if (!esVacia()) {
        elem = pila[tope];
    }
    return elem;
}

//
template <typename T>
bool Pila<T>::esVacia() {

    return tope == -1;
}