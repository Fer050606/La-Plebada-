 Ejemplo 1: Declaración básica y uso de punteros
cpp
Copiar
Editar
int x = 10;
int* p = &x;
std::cout << "Valor de x: " << x << ", dirección: " << p << ", valor en p: " << *p << std::endl;

 Ejemplo 2: Modificar una variable mediante un puntero
cpp
Copiar
Editar
int x = 5;
int* p = &x;
*p = 20;
std::cout << "Nuevo valor de x: " << x << std::endl;

 Ejemplo 3: Puntero a arreglo
cpp
Copiar
Editar
int arr[] = {1, 2, 3};
int* p = arr;
for (int i = 0; i < 3; ++i)
    std::cout << *(p + i) << " ";

 Ejemplo 4: Intercambiar valores usando punteros
cpp
Copiar
Editar
void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
cpp
Copiar
Editar
int a = 3, b = 5;
intercambiar(&a, &b);
std::cout << "a: " << a << ", b: " << b << std::endl;

 Ejemplo 5: Puntero a puntero
cpp
Copiar
Editar
int x = 42;
int* p = &x;
int** pp = &p;
std::cout << "Valor de x a través de pp: " << **pp << std::endl;

 Ejemplo 6: Punteros y funciones
cpp
Copiar
Editar
void cuadrado(int* n) {
    *n = (*n) * (*n);
}
cpp
Copiar
Editar
int x = 4;
cuadrado(&x);
std::cout << "Cuadrado de x: " << x << std::endl;

 Ejemplo 7: Memoria dinámica con new y delete
cpp
Copiar
Editar
int* p = new int;
*p = 100;
std::cout << *p << std::endl;
delete p;

 Ejemplo 8: Punteros con estructuras
cpp
Copiar
Editar
struct Punto {
    int x, y;
};
Punto pt = {3, 4};
Punto* ptr = &pt;
std::cout << "Punto: (" << ptr->x << ", " << ptr->y << ")" << std::endl;

 Ejemplo 9: Punteros a funciones
cpp
Copiar
Editar
int suma(int a, int b) { return a + b; }
int (*fptr)(int, int) = suma;
std::cout << "Resultado: " << fptr(2, 3) << std::endl;

 Ejemplo 10: Arreglo dinámico
cpp
Copiar
Editar
int n = 5;
int* arr = new int[n];
for (int i = 0; i < n; ++i)
    arr[i] = i * 10;
for (int i = 0; i < n; ++i)
    std::cout << arr[i] << " ";
delete[] arr;
