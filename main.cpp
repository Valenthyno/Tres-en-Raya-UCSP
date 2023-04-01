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
	
	  std::cout <<  " | " << "/////////////\n";
	  std::cout <<  " | " << a1 << " | " << a2 << " | " << a3 << " | " << "\n";
	  std::cout <<  " | " << b1 << " | " << b2 << " | " << b3 << " | "  << "\n"; 
	  std::cout <<  " | " << c1 << " | " << c2 << " | " << c3 << " | " << "\n";
	  std::cout <<  " | " << "/////////////\n";

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
			simbolo = {'O'};
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
			simbolo = {'O'};
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
			simbolo = {'O'};
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
	  std::cout <<  " | " << "/////////////\n";
	  std::cout <<  " | " << a1 << " | " << a2 << " | " << a3 << " | " << "\n";
	  std::cout <<  " | " << b1 << " | " << b2 << " | " << b3 << " | "  << "\n"; 
	  std::cout <<  " | " << c1 << " | " << c2 << " | " << c3 << " | " << "\n";
	  std::cout <<  " | " << "/////////////\n";


	}
			//if (turno == 1 && turno == 3 && turno == 5 && turno == 7 && turno == 9);
	


	





	return 0;
}
