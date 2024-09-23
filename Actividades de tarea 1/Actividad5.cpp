/*
#include <iostream>
#include <string>
#include <vector>

class Heroe {
private:
    int salud;
    int x, y;  // Posición en el mundo
    std::vector<std::string> *princesasRescatadas;  // Lista dinámica de princesas rescatadas

public:
    // Constructor por defecto
    Heroe() : salud(500), x(0), y(0) {
        princesasRescatadas = new std::vector<std::string>();  // Inicializa la lista dinámica
    }

    // Destructor
    ~Heroe() {
        delete princesasRescatadas;  // Libera la memoria asignada a la lista dinámica
    }

    // Métodos de acceso y modificación de la salud (getter y setter)
    int getSalud() const {
        return salud;
    }

    void setSalud(int nuevaSalud) {
        salud = nuevaSalud;
    }

    // Método para agregar una princesa a la lista
    void rescatarPrincesa(const std::string& nombrePrincesa) {
        princesasRescatadas->push_back(nombrePrincesa);
        std::cout << "Heroe ha rescatado a la princesa " << nombrePrincesa << ".\n";
    }

    // Método para mostrar todas las princesas rescatadas
    void mostrarPrincesasRescatadas() const {
        if (princesasRescatadas->empty()) {
            std::cout << "El héroe no ha rescatado a ninguna princesa aún.\n";
        } else {
            std::cout << "Princesas rescatadas:\n";
            for (const auto& princesa : *princesasRescatadas) {
                std::cout << "- " << princesa << "\n";
            }
        }
    }

    // Método para mostrar el estado del héroe
    void mostrarEstado() const {
        std::cout << "Estado del héroe:\n";
        std::cout << "Salud: " << salud << "\n";
        std::cout << "Posición: (" << x << ", " << y << ")\n";
        mostrarPrincesasRescatadas();
    }

    // Método para mover al héroe
    void mover(int nuevaX, int nuevaY) {
        x = nuevaX;
        y = nuevaY;
        std::cout << "Heroe se ha movido a la posición (" << x << ", " << y << ").\n";
    }
};

int main() {
    // Crear un héroe
    Heroe heroe;

    // Mostrar el estado inicial del héroe
    heroe.mostrarEstado();

    // Mover al héroe a una nueva posición
    heroe.mover(10, 20);

    // Modificar la salud del héroe
    heroe.setSalud(450);
    std::cout << "La salud del héroe ahora es: " << heroe.getSalud() << "\n";

    // El héroe rescata a algunas princesas
    heroe.rescatarPrincesa("Ariel");
    heroe.rescatarPrincesa("Bella");

    // Mostrar el estado final del héroe
    heroe.mostrarEstado();

    return 0;
}
*/