
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int opc, i, opc2, a;
string nom_vid[3], desc_vid[3], lanz_vid[3], clas_vid[3], carac_vid[3], gen_vid[3];

int main()
{

	do {

		cout << "\n\tBIENVENIDO A LA TIENDA DE VIDEOJUEGOS " << endl;
		cout << "\n1.Agregar articulo " << endl;
		cout << "\n2.Mostrar articulo " << endl;
		cout << "\n3.Limpiar pantalla " << endl;
		cout << "\n4.Salir " << endl;
		cout << "Tecle una opcion para continuar: ";
		cin >> opc;

		switch (opc)
		{
		case 1:
			for (i = 1; i < 3; i++) {
				cout << "\nIngrese nombre del videojuego: " << endl;
				cin >> nom_vid[i];
				cout << "\nIngrese descripcion del videojuego: " << endl;
				cin >> desc_vid[i];
				cout << "\nIngrese anio de lanzamiento del videojuego: " << endl;
				cin >> lanz_vid[i];
				cout << "\nIngrese clasificacion del videojuego: " << endl;
				cin >> clas_vid[i];
				cout << "\nIngrese caracteristicas del videojuego: " << endl;
				cin >> carac_vid[i];
				cout << "\nIngrese genero del videojuego: " << endl;
				cin >> gen_vid[i];
			}
			cout << "Teclee 1 para volver al menu o 0 para salir: "<<endl;
			cin >> opc2;
			break;

		case 2:
			cout << "Juegos vigentes: " << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << nom_vid[i] << ":" << desc_vid[i] << endl;
				cout << lanz_vid[i] << "," << clas_vid[i] << "," << carac_vid[i] << "," << gen_vid[i] << endl;
			}
			cout << "Teclee 1 para volver al menu o 0 para salir: " << endl;
			cin >> opc2;
			break;

		case 3:
			cout << "Se limpiara su pantalla..." << endl;
			system("cls");
			cout << "Teclee 1 para volver al menu o 0 para salir: "<<endl;
			cin >> opc2;
			break;

		case 4:
			return 0;

		default:
			cout << "Ha elegido una opcion invalida";
			cout << "\n\tTeclee 1 para volver al menu o 0 para salir: ";
			cin >> opc2;
		}
	} while (opc2 == 1);
}
