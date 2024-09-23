 /*
  #include <iostream>

class FPSCharacter {
private:
    char name[20];        // Arreglo para el nombre del personaje
    int health;           // Puntos de salud del personaje
    int ammo;             // Cantidad de munición
    int position[3];      // Posición X, Y, Z en el mundo 3D
    bool isReloading;     // Si el personaje está recargando su arma
    bool isAlive;         // Estado de vida o muerte

public:
    // Constructor
    FPSCharacter(const char* charName) : health(100), ammo(30), isReloading(false), isAlive(true) {
        int i = 0;
        while (charName[i] != '\0' && i < 20) {
            name[i] = charName[i];
            i++;
        }
        name[i] = '\0'; // Terminar el nombre con carácter nulo

        // Inicializar la posición
        position[0] = 0; // X
        position[1] = 0; // Y
        position[2] = 0; // Z
    }

    // Mover al personaje en el espacio 3D
    void move(int x, int y, int z) {
        position[0] += x;
        position[1] += y;
        position[2] += z;
    }

    // Disparar el arma
    void shoot() {
        if (isReloading || !isAlive) {
            return;
        }

        if (ammo > 0) {
            ammo--;
        } else {
            // No hay munición, recargar
            reload();
        }
    }

    // Recargar el arma
    void reload() {
        if (!isReloading) {
            isReloading = true;
            ammo = 30;  // Supongamos que el cargador tiene 30 balas
            isReloading = false;
        }
    }

    // Recibir daño
    void takeDamage(int damage) {
        if (isAlive) {
            health -= damage;
            if (health <= 0) {
                die();
            }
        }
    }

    // El personaje muere
    void die() {
        isAlive = false;
        health = 0;
    }

    // Método para mostrar el estado del personaje
    void status() const {
        // Imprimir el estado del personaje (nombre, salud, munición, posición, etc.)
        // Se puede eliminar si no tienes acceso a `std::cout`
    }
};

int main() {
    FPSCharacter player("Soldier");

    player.move(10, 0, 5); // Mover al personaje
    player.shoot();        // Disparar
    player.takeDamage(50); // Recibir daño
    player.reload();       // Recargar el arma
    player.status();       // Mostrar estado (opcional)

    return 0;
}
*/