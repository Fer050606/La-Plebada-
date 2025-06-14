#include <iostream>
#include <iomanip>
using namespace std;

// Clase repositorio para guardar áreas de tipo float
class RepoArrFloat {
private:
    float datos[100];  // Arreglo para guardar hasta 100 áreas
    int contador;      // Cantidad de áreas guardadas

public:
    // Constructor
    RepoArrFloat() {
        contador = 0;
    }

    // Método para guardar un área
    void save(float valor) {
        if (contador < 100) {
            datos[contador] = valor;
            contador++;
            cout << fixed << setprecision(2);
            cout << "[Guardado] Área #" << contador << ": " << valor << " unidades²" << endl;
        } else {
            cout << "[Error] Repositorio lleno. No se puede guardar más áreas." << endl;
        }
    }

    // Método para obtener y mostrar todas las áreas guardadas
    void getArea() {
        if (contador == 0) {
            cout << "[Aviso] No hay áreas guardadas aún." << endl;
            return;
        }

        cout << "\n📋 Áreas guardadas en el repositorio:\n";
        cout << "-------------------------------------\n";
        for (int i = 0; i < contador; i++) {
            cout << "Área #" << (i + 1) << ": " << fixed << setprecision(2) << datos[i] << " unidades²" << endl;
        }
        cout << "-------------------------------------\n";
        cout << "Total de áreas guardadas: " << contador << "\n" << endl;
    }

    // Método adicional para limpiar el repositorio
    void clear() {
        contador = 0;
        cout << "[Reiniciado] Repositorio limpiado correctamente." << endl;
    }
};

// Función para calcular el área de un rectángulo
float calcularAreaRectangulo(float base, float altura) {
    return base * altura;
}

// Función principal
int main() {
    RepoArrFloat repo;

    cout << "=== Sistema de Registro de Áreas ===\n" << endl;

    // Ejemplo de cálculos de área y guardado
    float base1 = 5.0, altura1 = 3.2;
    float area1 = calcularAreaRectangulo(base1, altura1);
    repo.save(area1);

    float base2 = 7.8, altura2 = 4.1;
    float area2 = calcularAreaRectangulo(base2, altura2);
    repo.save(area2);

    float base3 = 6.4, altura3 = 2.5;
    float area3 = calcularAreaRectangulo(base3, altura3);
    repo.save(area3);

    // Mostrar todas las áreas guardadas
    repo.getArea();

    // Limpiar el repositorio (opcional)
    // repo.clear();

    return 0;
}
