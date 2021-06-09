#include <iostream>

// 3. Desarrolle un procedimiento que reciba el costo en pesos de un abono telefónico, la
// cantidad de minutos libres que incluye el abono, el cargo en pesos por minuto excedente
// y la cantidad de minutos utilizados por un abonado, retorne la cantidad de minutos
// excedidos y el monto en pesos a abonar(costo del abono mas minutos excedidos por el
// costo de minutos excedidos) mas el 21 % del valor del IVA.
// 	UTILICE FUNCIONES.

void CalcularAbono(float costoAbono, int minutosLibres, float cargoExedente, int minutosUtilizados)
{
	if(minutosUtilizados > minutosLibres)
	{
		std::cout << "Minutos exedidos: " << minutosUtilizados - minutosLibres << std::endl;
		std::cout << "Monto a abonar: " << (costoAbono + cargoExedente * (minutosUtilizados - minutosLibres)) * 1.21 << std::endl;
	}
	else
	{
		std::cout << "No tiene minutos execudidos" << std::endl;
	}
}

int main()
{
	float costoAbono, cargoExedente;
	int minutosLibres, minutosUtilizados;

	std::cout << "Ingrese el costo del abono: ";
	std::cin >> costoAbono;
	std::cout << "Ingrese los minutos libres del abono: ";
	std::cin >> minutosLibres;
	std::cout << "Cargo en pesos por minuto exedente: ";
	std::cin >> cargoExedente;
	std::cout << "Cantidad de minutos utilizados: ";
	std::cin >> minutosUtilizados;

	std::cout << std::endl;

	CalcularAbono(costoAbono, minutosLibres, cargoExedente, minutosUtilizados);
}