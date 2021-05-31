#include <iostream>

using namespace std;

/**
 * Esta funci�n comprueba si un n�mero entero entre 0 y 100
 * es un n�mero primo, devolviendo "ES PRIMO" en caso afirmativo
 * o "NO ES PRIMO" en caso negativo; si el n�mero est� fuera
 * del rango de 0 a 100, la funci�n devuelve "ERROR".
 *
 * parametro    numero      Cualquier valor entero.
 *
 * retorno      string      Texto que indica cualquier de los resultados
 *                          posibles: es n�mero primo, no lo es, o es error.
 *
 */
string VerificarSiEsNumeroPrimo(int numero)
{
    // Declaramos la variable "resultado" y asumimos
    // desde el principio que vamos a obtener un error.
	string resultado = "ERROR";

    // Verificamos que la condici�n del ejemplo se cumpla,
    // que sea un valor entre 0 y 100 inclusive. En caso de
    // no cumplirse, la variable resultado ya tiene lo que
    // se debe devolver.
	if (numero >= 0 & numero <= 100)
	{
        // Asumimos que el n�mero no es primo.
		resultado = "NO ES PRIMO";

        // Verificamos que el n�mero sea mayor que 1, ya que
        // el 0 y el 1 no son n�meros primos por definici�n.
        // En caso de no cumplirse la condici�n, la variable
        // resultado ya tiene lo que se debe devolver.
		if (numero > 1)
		{
            // Asumimos que el n�mero puede ser primo.
			bool puedeSerPrimo = true;

            // El primer divisor posible es 2.
			int divisor = 2;

            // El ciclo contin�a mientras pueda ser primo
            // y el divisor sea menor que el n�mero que se
            // est� verificando. Usamos un ciclo pre-prueba
            // ya que uan vez que confirmamos que es divisible
            // por un divisor, no es necesario checar los
            // divisores restantes.
			while (puedeSerPrimo & divisor < numero)
			{
                // Si el m�dulo es distinto de cero, todav�a
                // es posible que sea primo.
				puedeSerPrimo = numero % divisor != 0;
				divisor++;

			}

            // Si al final pudo ser primo, entonces es primo.
			if (puedeSerPrimo)
			{
				resultado = "ES PRIMO";
			}
		}
	}

    // Resultado de la funci�n
	return resultado;
}

/**
 * Funci�n principal del programa.
 *
 * parametro    args    Arreglo de argumentos.
 *
 */
int main()
{
    // Ciclo de -10 a 110 para verificar si son n�meros primos.
	for (int numero = -10; numero <= 110; numero++)
	{
        // Imprimimos el resultado de la funci�n.
		cout << numero << " : " << VerificarSiEsNumeroPrimo(numero) << endl;
	}

    return 0;
}
