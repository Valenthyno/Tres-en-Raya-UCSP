// Hello World program 
// ANSI Codes
// https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797

#include <iostream>

int main() 
{   
	std::system("cls");
	std::system("cls");            // Comando para borrar todo el contenido de la pantalla
    std::cout << "\x1B[H";          // Codigo para colocar el cursor en el canto superior izquierdo

    std::cout << "\x1B[3;34m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl; 
	std::cout << "\x1B[m";             // Resetear color a valor por defecto
	std::cout << "Universidad Catolica San Pablo" << std::endl; 
	std::cout << "Escuela Profesional de Ciencia de la Computacion I" << std::endl; 
	std::cout << "Curso de Ciencia de la Computacion I" << std::endl; 
	std::cout << "Prof. D.Sc. Manuel Eduardo Loaiza Fernandez" << std::endl;
	std::cout << "Alum. Jose Alberto Ordonez Lopez" << std::endl; 
	std::cout << "Arequipa 2023 - I" << std::endl; 
	std::cout << "\x1B[3;34m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl;
	std::cout << "\x1B[m";             // Resetear color a valor por defecto 

	
	std::cout<<"\x1B[m";

	int turno{1};
	char a1{'1'},a2{'2'},a3{'3'},b1{'4'},b2{'5'},b3{'6'},c1{'7'},c2{'8'},c3{'9'};
	char simbolo{'/'};

	while (turno <= 9)
	{
		std::cout << "/" << " | " << "/////////////\n";
		std::cout << "_" << " | " << "1" << " | " << "2" << " | " << "3" << " | " << "\n";
		std::cout << "a" << " | " << a1 << " | " << a2 << " | " << a3 << " | " << "\n";
		std::cout << "b" << " | " << b1 << " | " << b2 << " | " << b3 << " | "  << "\n"; 
		std::cout << "c" << " | " << c1 << " | " << c2 << " | " << c3 << " | " << "\n";
		std::cout << "/" << " | " << "/////////////\n";

		if ((turno < 9) && (turno >= 0));

			if (turno == 2 && turno == 4 && turno == 6 && turno == 8)
			{
				char simbolo{'X'};
				std::cout << " | " << "TURNO DEL JUGADOR 1" << " | \n";
			}

			else
			{
				char simbolo{'O'};
				std::cout << " | " << "TURNO DEL JUGADOR 2" << " | \n";
			}

			switch (1 - 9)
			{
			case 1:
				a1 = simbolo;
				break;
			case 2:
				a2 = simbolo;
				break;
			case 3:
				a3 = simbolo;
				break;
			case 4:
				b1 = simbolo;
				break;
			case 5:
				b2 = simbolo;
				break;
			case 6:
				b3 = simbolo;
				break;
			case 7:
				c1 = simbolo;
				break;
			case 8:
				c2 = simbolo;
				break;
			case 9:
				c3 = simbolo;
				break;
			
			default:
				std::cout << "No se ingreso una opcion correcta";
				break;
			}

			turno = turno + 1; 
			

	}
	
			//if (turno == 1 && turno == 3 && turno == 5 && turno == 7 && turno == 9);
	


	





	return 0;
}
