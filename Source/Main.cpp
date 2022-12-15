#include <iostream>
#include "Header.h"

char Cell[3][3];


int main()
{
	
	const char Player1 = 'O';
	const char Player2 = 'X';


/*	std::cout << " " << Cell[0][0] << " | " << Cell[0][1] << " | " << Cell[0][2] << std::endl;
	std::cout << "--- " << "--- " << "--- " << std::endl;
	std::cout << " " << Cell[1][0] << " | " << Cell[1][1] << " | " << Cell[1][2] << std::endl;
	std::cout << "--- " << "--- " << "--- "<< std::endl;
	std::cout << " " << Cell[2][0] << " | " << Cell[2][1] << " | " << Cell[2][2] << std::endl;  */

	Game_Description();
	Draw_Board();
	Play();

	

	std::cin.get();
}