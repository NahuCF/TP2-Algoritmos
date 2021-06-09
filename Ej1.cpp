#include <iostream>

// 1.Desarrolle la función
// float CalcularPorcentajeDiferencia(int A, int B) que recibe dos valores y retorne el
// siguiente calculo :
// (B - A) * 100 / (A + B)

float CalcularPorcentajeDiferencia(int A, int B)
{
	return (B - A) * 100 / (A + B);
}

int main()
{
	int a, b;

	std::cout << "Ingrese Valor A: ";
	std::cin >> a;
	std::cout << "Ingrese Valor B: ";
	std::cin >> b;
	
	std::cout << std::endl;

	std::cout << "El resultado del calculo es: " << CalcularPorcentajeDiferencia(a, b) << std::endl;
}