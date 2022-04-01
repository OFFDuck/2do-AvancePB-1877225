/*
* Datos del alumno:
* Rodriguez Rodriguez Adrian Patricio
* 1877225
* GPO:006
*
* -Segundo Avance Programacion Basica-
*
* Lo que contiene el menu:
* 1.- alta paciente (NSS , nombre del paciente, municipio, clinica)
  2.- alta de cita (numcita, NSS,especialista, hora)
  3.-modificacion paciente
  4.- modificacion cita
  5.- citas vigentes
  6.-lista de pacientes
  7.- limpiar pantalla
  8.- salir
*
*/


#include <iostream>
using namespace std;
struct info
{
	int id;
	int numeroCita;
	char name[50];
	char hora[6];
	char nombreTrata[50];
	char Descr[100];
	float CostoUnitTrata, CostoTrata, CostoUnit, total;
	int idpaciente;

};
int main()
{
	info altacita[3];
	int i;
	int j;
	int opcion;
	int salir, exit;
	


	do
	{
		cout << "////CITAS DENTALES////" << endl;
		cout << "   //OPCIONES//" << endl;

		cout << " 1. Agendar una cita " << endl;

		cout << " 2. Modificar una cita " << endl;

		cout << " 3. Eliminar una cita " << endl;

		cout << " 4. Lista de citas vigentes " << endl;

		cout << " 5. Limpiar pantalla " << endl;

		cout << " 6. Salir " << endl;

		cout << "\n";


		cout << " :Digite una Opcion a Continuacion:" << endl;
		cin >> opcion;

		switch (opcion)
		{

		case 1:
			for (i = 0; i < 3; i++)
			{
				cout << "Su id es:" << i + 1 << "\n";
				cout << "Digite el consecutivo numero de cita " << endl;
				cin >> altacita[i].numeroCita;

				cout << "Escriba el nombre del paciente" << endl;
				cin >> altacita[i].name;

				cout << "Digite la hora del tratamiento (En formato 24hrs.)" << endl;
				cin >> altacita[i].hora;

				cout << "Escriba el Nombre del tratamiento" << endl;
				cin >> altacita[i].nombreTrata;

				cout << "Escriba la Descripcion" << endl;
				cin >> altacita[i].Descr;

				cout << "Digite el Precio unitario del tratamiento" << endl;
				cin >> altacita[i].CostoUnitTrata;

				cout << "Digite cantidad del tratamiento" << endl;
				cin >> altacita[i].CostoTrata;

				cout << "Digite el Precio unitario" << endl;
				cin >> altacita[i].CostoUnit;

				cout << "Digite el total \n";
				cin >> altacita[i].total;
				cout << "\n";

			}

			break;
		case 2:
			cout << "ingrese el id de la cita a modificar \n";
			cin >> j;
			j = j - 1;
			for (i = j; i <= j; i++)
			{

				altacita[i].numeroCita = i + 1;
				cout << "Numero de cita: " << altacita[i].numeroCita << endl;

				cout << "ingrese el Nuevo consecutivo numero de cita \n";
				cin >> altacita[i].numeroCita;

				cout << "Escriba el nombre del paciente \n";
				cin >> altacita[i].name;

				cout << "Digite el horario del tratamiento (en formato 24hrs.) \n";
				cin >> altacita[i].hora;

				cout << "Escriba el nombre del tratamiento \n";
				cin >> altacita[i].nombreTrata;

				cout << "Escriba la descripcion \n";
				cin >> altacita[i].Descr;

				cout << "Digite el Precio unitario del tratamiento \n";
				cin >> altacita[i].CostoUnitTrata;

				cout << "Digite cantidad del tratamiento \n";
				cin >> altacita[i].CostoTrata;

				cout << "Digite el Precio unitario \n";
				cin >> altacita[i].CostoUnit;

				cout << "Digite el total \n";
				cin >> altacita[i].total;
				cout << "\n";

			}
			break;
		case 3:
			cout << "Eliminar la cita" << endl;
			break;
		case 4:
			cout << "\t" << "***LISTA DE CITAS VIGENTES***" << endl;
			for (i = 0; i < 3; i++)
			{

				cout << "\t" << " El id de alta es:" << i + 1 << "\n";
				cout << "\t" << "-Consecutivo Numero de Cita: " << altacita[i].numeroCita << endl;

				cout << "\t" << "-Nombre del Paciente: " << altacita[i].name << endl;

				cout << "\t" << "-Horario: " << altacita[i].hora << endl;

				cout << "\t" << "-Nombre del Tratamiento : " << altacita[i].nombreTrata << endl;

				cout << "\t" << "-Descripcion: " << altacita[i].Descr << endl;

				cout << "\t" << "-Precio unitario del tratamiento: " << altacita[i].CostoUnitTrata << endl;

				cout << "\t" << "-Cantidad del tratamiento: " << altacita[i].CostoTrata << endl;

				cout << "\t" << "-Precio Unitario: " << altacita[i].CostoUnit << endl;

				cout << "\t" << "-Total: " << altacita[i].total << endl;
				cout << "\n";
				cout << "\t****************************************" << endl;
				cout << "\t" << "\n";
			}
			break;
			break;
		case 5:
			system("cls"); //"clear"
			return main();
			break;
		case 6:
			cout << "Estas Seguro que Quieres salir?" << endl;
			cout << "1. Si" << endl;

			cout << "2. No" << endl;
			cin >> exit;
			if (exit == 1)
			{
				return 0;
			}
			else
			{
				return main();
			}
			break;

		default:
			cout << "La opcion elegida no es valida" << endl;
		}
		cout << "Ingrese 1 Para Volver al menu" << endl;

		cout << "Ingrese 2 Para Salir" << endl;
		cin >> salir;

	} while (salir == 1);

}
