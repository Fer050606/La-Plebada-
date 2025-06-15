#include <iostream>
#include <vector>
#include <cmath>

// Interfaz de la Figura
class Figura {
public:
    virtual ~Figura() = default;
    virtual double GetArea() const = 0;
};

// Implementación concreta: Círculo
class Circulo : public Figura {
private:
    double radio;
public:
    explicit Circulo(double r) : radio(r) {}
    double GetArea() const override {
        return M_PI * radio * radio;
    }
};

// Implementación concreta: Cuadrado
class Cuadrado : public Figura {
private:
    double lado;
public:
    explicit Cuadrado(double l) : lado(l) {}
    double GetArea() const override {
        return lado * lado;
    }
};

// Implementación concreta: Triángulo
class Triangulo : public Figura {
private:
    double base, altura;
public:
    Triangulo(double b, double h) : base(b), altura(h) {}
    double GetArea() const override {
        return (base * altura) / 2;
    }
};

// Repositorio de Figuras
class RepoVector {
private:
    std::vector<Figura*> figuras;
public:
    ~RepoVector() {
        for (Figura* fig : figuras) {
            delete fig;
        }
    }

    void Save(Figura* figura) {
        figuras.push_back(figura);
    }

    double GetArea(int index) const {
        if (index >= 0 && index < figuras.size()) {
            return figuras[index]->GetArea();
        }
        return 0.0;
    }
};

int main() {
    RepoVector repo;

    // Guardar figuras
    repo.Save(new Circulo(5.0));
    repo.Save(new Cuadrado(4.0));
    repo.Save(new Triangulo(3.0, 6.0));

    // Obtener áreas
    std::cout << "Área del Círculo: " << repo.GetArea(0) << std::endl;
    std::cout << "Área del Cuadrado: " << repo.GetArea(1) << std::endl;
    std::cout << "Área del Triángulo: " << repo.GetArea(2) << std::endl;

    return 0;
}
