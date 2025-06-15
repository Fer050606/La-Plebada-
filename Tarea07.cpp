#include <iostream>
#include <string>
#include <memory>

// Clase base abstracta
class Figura {
public:
    virtual void mostrarTipo() const = 0;
    virtual ~Figura() {}
};

// Implementaciones concretas
class Circulo : public Figura {
public:
    void mostrarTipo() const override {
        std::cout << "Soy un Círculo\n";
    }
};

class Cuadro : public Figura {
public:
    void mostrarTipo() const override {
        std::cout << "Soy un Cuadro\n";
    }
};

class Triangulo : public Figura {
public:
    void mostrarTipo() const override {
        std::cout << "Soy un Triángulo\n";
    }
};

// Clase Factory
class FiguraFactory {
public:
    static Figura* crearFigura(char tipo) {
        switch (tipo) {
            case 'C': return new Circulo();
            case 'Q': return new Cuadro();
            case 'T': return new Triangulo();
            default: return nullptr;
        }
    }
};

// Función principal
int main() {
    Figura* figura1 = FiguraFactory::crearFigura('C');
    Figura* figura2 = FiguraFactory::crearFigura('Q');
    Figura* figura3 = FiguraFactory::crearFigura('T');

    if (figura1) figura1->mostrarTipo();
    if (figura2) figura2->mostrarTipo();
    if (figura3) figura3->mostrarTipo();

    // Liberar memoria
    delete figura1;
    delete figura2;
    delete figura3;

    return 0;
}
