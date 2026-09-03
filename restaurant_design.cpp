#include <iostream>
#include <string>
using namespace std;

// Reminder of the scenario (see "Contexto" above for the full version):
// "A restaurant takes orders from tables. Each order has a list of
//  dishes, each with a name and a price. At the end, the restaurant
//  calculates the order total, including a 10% service charge."
class Dish
{
	private:
	double dish1;
	double dish2;
	double dish3;

}
// TODO (Parte G): Declara la clase Dish.
//   - Miembros privados que necesita saber un plato (piensa en tu
//     respuesta a la pregunta 1 de arriba).
//   - Constructor(es) que consideres necesarios.
//   - Getters para sus atributos.
//   No hace falta implementar el cuerpo de cada funcion - un prototipo
//   dentro de la clase es suficiente para este ejercicio.

// TODO (Parte G): Declara la clase Order.
//   - Como guarda la lista de platos (ver tu respuesta a la pregunta 2).
//   - Necesita un metodo para calcular el total, incluyendo el 10%
//     de cargo de servicio - decide tu si ese calculo vive aqui o
//     en Restaurant (ver tu respuesta a la pregunta 3).

// TODO (Parte G, opcional): Declara Restaurant si decidiste que el
// calculo del cargo de servicio le pertenece a esta clase en vez de
// a Order.

int main() {
    cout << "Esqueletos de diseno - sin logica de ejecucion en este bloque.\n";
    return 0;
}