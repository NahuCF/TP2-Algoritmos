#include <iostream>

// 2. Desarrollar la función
// string Tendencia(int A, int B)que dados dos valores A y B, retorne una cadena de
// acuerdo al siguiente cuadro :
// Link del cuadro: https://prnt.sc/14wplfb (no se por cuanto este link va a funcionar)

std::string Tendencia(int A, int B)
{
	if (B - A < 0)
		return "Decreciente";
	else if (B - A < A * 0.05)
		return "Leve ascenso";
	else if (B - A < A * 0.02)
		return "Estable";
	else
		return "En ascenso";
}

int main()
{
	int a, b;

	std::cout << "Ingrese Valor A: ";
	std::cin >> a;
	std::cout << "Ingrese Valor B: ";
	std::cin >> b;

	std::cout << Tendencia(a, b) << std::endl;
}
