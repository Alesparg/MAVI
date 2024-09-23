/*
#include <iostream>
#include <string>

class Unidad {
protected:
    std::string nombre;  // Nombre de la unidad
    int salud;           // Puntos de vida
    std::string color;   // Color que diferencia al bando (Docente o Alumno)

public:
    // Constructor
    Unidad(std::string nombre, int salud, std::string color) : nombre(nombre), salud(salud), color(color) {}

    // Métodos
    virtual void actuar(Unidad& objetivo) = 0; // Método virtual puro para actuar (atacar o curar)
    
    void recibirDanio(int cantidad) {
        salud -= cantidad;
        std::cout << nombre << " (" << color << ") ha recibido " << cantidad << " puntos de daño. Salud restante: " << salud << ".\n";
    }

    void curar(int cantidad) {
        salud += cantidad;
        std::cout << nombre << " (" << color << ") ha sido curado. Salud actual: " << salud << ".\n";
    }

    bool estaVivo() const {
        return salud > 0;
    }

    std::string obtenerNombre() const {
        return nombre;
    }
};

class Atacante : public Unidad {
private:
    int poderAtaque; // Cantidad de daño que inflige el ataque

public:
    // Constructor
    Atacante(std::string nombre, int salud, std::string color, int poderAtaque)
        : Unidad(nombre, salud, color), poderAtaque(poderAtaque) {}

    // Implementación del método actuar
    void actuar(Unidad& objetivo) override {
        std::cout << nombre << " (" << color << ") lanza un libro a " << objetivo.obtenerNombre() << ".\n";
        objetivo.recibirDanio(poderAtaque);
    }
};

int main() {
    // Crear unidades para los bandos

    // Bando Docente
    Atacante docenteAtacante("Profe de Matemáticas", 100, "Rojo", 20);
    Curador docenteCurador("Profe de Ciencias", 80, "Rojo", 15);

    // Bando Alumno
    Atacante alumnoAtacante("Estudiante de Historia", 90, "Azul", 25);
    Curador alumnoCurador("Estudiante de Biología", 70, "Azul", 10);

    // Simulación de acciones
    docenteAtacante.actuar(alumnoAtacante); // El docente ataca al alumno
    alumnoCurador.actuar(alumnoAtacante);   // El alumno curador sana al alumno atacante
    alumnoAtacante.actuar(docenteAtacante); // El alumno ataca al docente

    return 0;
}
*/