/*
#include <iostream>
#include <string>
#include <vector>

class PersonajePlataformas {
private:
    std::string nombre;        // Nombre del personaje
    int vida;                  // Solo un punto de vida
    bool cansado;              // Indica si el personaje está cansado
    int posicionX, posicionY;   // Posición del personaje en el mapa
    std::vector<std::string> hechizosAprendidos; // Lista de hechizos aprendidos

public:
    // Constructor
    PersonajePlataformas(std::string nombre, int posicionX = 0, int posicionY = 0)
        : nombre(nombre), vida(1), cansado(false), posicionX(posicionX), posicionY(posicionY) {}

    // Métodos

    // Mover al personaje
    void mover(int dx, int dy) {
        if (!cansado) {
            posicionX += dx;
            posicionY += dy;
            std::cout << nombre << " se movió a la posición (" << posicionX << ", " << posicionY << ").\n";
        } else {
            std::cout << nombre << " está demasiado cansado para moverse.\n";
        }
    }

    // Saltar
    void saltar() {
        if (!cansado) {
            std::cout << nombre << " saltó.\n";
        } else {
            std::cout << nombre << " está demasiado cansado para saltar.\n";
        }
    }

    // Aprender un hechizo
    void aprenderHechizo(const std::string& hechizo) {
        hechizosAprendidos.push_back(hechizo);
        std::cout << nombre << " aprendió el hechizo: " << hechizo << ".\n";
    }

    // Usar un hechizo
    void usarHechizo(const std::string& hechizo) {
        auto it = std::find(hechizosAprendidos.begin(), hechizosAprendidos.end(), hechizo);
        if (it != hechizosAprendidos.end()) {
            std::cout << nombre << " usó el hechizo: " << hechizo << ".\n";
            cansado = true; // Usar un hechizo cansa al personaje
        } else {
            std::cout << nombre << " no ha aprendido el hechizo: " << hechizo << ".\n";
        }
    }

    // Recuperar energía
    void descansar() {
        cansado = false;
        std::cout << nombre << " ha descansado y ya no está cansado.\n";
    }

    // Recibir daño (pierde la vida)
    void recibirDanio() {
        vida = 0;
        std::cout << nombre << " ha recibido daño y ha perdido su vida.\n";
    }

    // Verificar si está vivo
    bool estaVivo() const {
        return vida > 0;
    }

    // Mostrar estado del personaje
    void mostrarEstado() const {
        std::cout << "Personaje: " << nombre << "\nVida: " << (vida > 0 ? "1" : "0") 
                  << "\nPosición: (" << posicionX << ", " << posicionY << ")\nCansado: " 
                  << (cansado ? "Sí" : "No") << "\nHechizos aprendidos: ";
        for (const auto& hechizo : hechizosAprendidos) {
            std::cout << hechizo << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    // Crear un personaje
    PersonajePlataformas personaje("Aventurero");

    // Acciones
    personaje.mostrarEstado();
    personaje.mover(2, 5);
    personaje.saltar();
    personaje.aprenderHechizo("Fuego");
    personaje.usarHechizo("Fuego");
    personaje.mostrarEstado();
    personaje.descansar();
    personaje.mover(-1, 2);
    personaje.recibirDanio();
    personaje.mostrarEstado();

    return 0;
}
*/
