#include <iostream>
#include <string>
using namespace std;

// Definición de la interfaz como clase abstracta
class IAnimal {
public:
    virtual void hacerSonido() const = 0;  // Función virtual pura
    virtual string obtenerNombre() const = 0;
    virtual ~IAnimal() = default;  // Destructor virtual por defecto
};

// Implementación de la interfaz en la clase Perro
class Perro : public IAnimal {
public:
    void hacerSonido() const override {
        cout << "¡Guau!" << endl;
    }

    string obtenerNombre() const override {
        return "Perro";
    }
};

// Implementación de la interfaz en la clase Gato
class Gato : public IAnimal {
public:
    void hacerSonido() const override {
        cout << "¡Miau!" << endl;
    }

    string obtenerNombre() const override {
        return "Gato";
    }
};

int main() {
    IAnimal* animal1 = new Perro();
    IAnimal* animal2 = new Gato();

    cout << animal1->obtenerNombre() << " dice: ";
    animal1->hacerSonido();

    cout << animal2->obtenerNombre() << " dice: ";
    animal2->hacerSonido();

    delete animal1;
    delete animal2;

    return 0;
}
