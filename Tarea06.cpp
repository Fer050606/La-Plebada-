#include <iostream>
#include <string>

class FigPrinter {
private:
    std::string nombre;

public:
    // Constructor
    FigPrinter(const std::string& nombre) : nombre(nombre) {}

    // Método para imprimir texto
    void imprimir(const std::string& texto) {
        std::cout << "Imprimiendo en " << nombre << ": " << texto << std::endl;
    }

    // Método para simular corte de papel
    void cortarPapel() {
        std::cout << "Corte de papel realizado en " << nombre << "." << std::endl;
    }
};

int main() {
    // Crear una instancia de FigPrinter
    FigPrinter impresora("Impresora Térmica De Fernanda");

    // Usar los métodos de la clase
    impresora.imprimir("¡Holi, soy Fer!");
    impresora.cortarPapel();

    return 0;
}
