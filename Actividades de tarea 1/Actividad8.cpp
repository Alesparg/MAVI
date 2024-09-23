/*
#include <iostream>
#include <string>

class Consola {
public:
    // Método para mostrar un mensaje en la consola
    void mostrarMensaje(const std::string& mensaje) {
        std::cout << mensaje << std::endl;
    }

    // Método para leer un comando o string de la consola
    std::string leerComando() {
        std::string comando;
        std::cout << "> ";  // Indicador de espera de comando
        std::getline(std::cin, comando);  // Leer línea completa
        return comando;
    }

    // Método para leer un valor entero de la consola
    int leerEntero(const std::string& mensaje) {
        int valor;
        std::cout << mensaje << ": ";
        std::cin >> valor;
        std::cin.ignore();  // Limpiar el buffer de entrada
        return valor;
    }

    // Método para leer un valor flotante de la consola
    float leerFlotante(const std::string& mensaje) {
        float valor;
        std::cout << mensaje << ": ";
        std::cin >> valor;
        std::cin.ignore();  // Limpiar el buffer de entrada
        return valor;
    }

    // Método para pedir al usuario una confirmación (sí/no)
    bool leerConfirmacion(const std::string& mensaje) {
        std::string respuesta;
        std::cout << mensaje << " (s/n): ";
        std::getline(std::cin, respuesta);

        // Convertir la respuesta a minúscula para mayor flexibilidad
        if (respuesta == "s" || respuesta == "S") {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Consola consola;

    // Mostrar un mensaje en consola
    consola.mostrarMensaje("Bienvenido al sistema de interacción por consola.");

    // Leer un comando ingresado por el usuario
    std::string comando = consola.leerComando();
    consola.mostrarMensaje("Comando ingresado: " + comando);

    // Leer un valor entero
    int entero = consola.leerEntero("Ingrese un valor entero");
    consola.mostrarMensaje("Valor entero ingresado: " + std::to_string(entero));

    // Leer un valor flotante
    float flotante = consola.leerFlotante("Ingrese un valor flotante");
    consola.mostrarMensaje("Valor flotante ingresado: " + std::to_string(flotante));

    // Leer confirmación de sí/no
    bool confirmacion = consola.leerConfirmacion("¿Desea continuar?");
    if (confirmacion) {
        consola.mostrarMensaje("Usted ha confirmado que desea continuar.");
    } else {
        consola.mostrarMensaje("Usted ha cancelado la operación.");
    }

    return 0;
}
*/