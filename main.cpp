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
	std::cout << "Alum. Freddy Valenthyno Diaz Espino" << std::endl;
	std::cout << "Arequipa 2023 - I" << std::endl; 
	std::cout << "\x1B[3;34m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl;
	std::cout << "\x1B[m";             // Resetear color a valor por defecto 

	
	std::cout<<"\x1B[m";

	int turno{1};
	int a1{1},a2{2},a3{3},b1{4},b2{5},b3{6},c1{7},c2{8},c3{9};
	int jugador1(0);
  int jugador2(0);
  char simbolo (65);
	
	std::cout << "/" << " | " << "/////////////\n";
	std::cout << "_" << " | " << "1" << " | " << "2" << " | " << "3" << " | " << "\n";
	std::cout << "a" << " | " << a1 << " | " << a2 << " | " << a3 << " | " << "\n";
	std::cout << "b" << " | " << b1 << " | " << b2 << " | " << b3 << " | "  << "\n"; 
	std::cout << "c" << " | " << c1 << " | " << c2 << " | " << c3 << " | " << "\n";
	std::cout << "/" << " | " << "/////////////\n";

	if ((turno < 9) && (turno >= 0)){

		if (turno == 1)
		{
			simbolo = {'X'};
			std::cout << " | " << "TURNO DEL JUGADOR 1" << " | \n";
      std::cin >> jugador1;
			turno = turno + 1;
		}

		else if (turno == 2)
		{
			simbolo = {'O'};
			std::cout << " | " << "TURNO DEL JUGADOR 2" << " | \n";
      std::cin >> jugador2;
			turno = turno + 1;
		}
		else if (turno == 3)
		{
			simbolo = {'X'};
			std::cout << " | " << "TURNO DEL JUGADOR 1" << " | \n";
      std::cin >> jugador1;
			turno = turno + 1;
		}
		else if (turno == 4)
		{
			simbolo = {'X'};
			std::cout << " | " << "TURNO DEL JUGADOR 2" << " | \n";
      std::cin >> jugador2;
			turno = turno + 1;
    }
		else if (turno == 5)
		{
			simbolo = {'X'};
			std::cout << " | " << "TURNO DEL JUGADOR 1" << " | \n";
      std::cin >> jugador1;
			turno = turno + 1;
    }
		else if (turno == 6)
		{
			simbolo = {'X'};
			std::cout << " | " << "TURNO DEL JUGADOR 2" << " | \n";
      std::cin >> jugador2;
			turno = turno + 1;
    }
		else if (turno == 7)
		{
			simbolo = {'X'};
			std::cout << " | " << "TURNO DEL JUGADOR 1" << " | \n";
      std::cin >> jugador1;
			turno = turno + 1;
    }
		else if (turno == 8)
		{
			simbolo = {'X'};
			std::cout << " | " << "TURNO DEL JUGADOR 2" << " | \n";
      std::cin >> jugador2;
			turno = turno + 1;
    }
		else if (turno == 9)
		{
			simbolo = {'X'};
			std::cout << " | " << "TURNO DEL JUGADOR 1" << " | \n";
      std::cin >> jugador1;
			turno = turno + 1;
    }
		switch (turno)
		{
		case 1:
      jugador1 || jugador2 == a1;
			a1 = simbolo;
			break;
		case 2:
      jugador1 || jugador2 == a2;
			a2 = simbolo;
			break;
		case 3:
      jugador1 || jugador2 == a3;
			a3 = simbolo;
			break;
		case 4:
      jugador1 || jugador2 == b1;
			b1 = simbolo;
			break;
		case 5:
      jugador1 || jugador2 == b2;
			b2 = simbolo;
			break;
		case 6:
      jugador1 || jugador2 == b3;
			b3 = simbolo;
			break;
		case 7:
      jugador1 || jugador2 == c1;
			c1 = simbolo;
			break;
		case 8:
      jugador1 || jugador2 == c2;
			c2 = simbolo;
			break;
		case 9:
      jugador1 || jugador2 == c3;
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
