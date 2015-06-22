/*
 * Teams.cpp
 *
 *  Created on: Jan 13, 2015
 *      Author: Explicitness
 */
#include <stdio.h>
#include <iostream>
#include <string>
#include "Teams.h"

void Team::printTeam()
{
	std::cout << "The name of the team is: " << nameTeam << std::endl;
	std::cout << "The sport of the team is: " << sportOfTeam << std::endl;
	std::cout << "The team is located in: " << locTeam << std::endl;
	std::cout << "The team colors are: " << colorTeam << std::endl;
	std::cout << "The team mascot is: " << mascotTeam << std::endl;
	std::cout << "The team's record is: " << *winTeam << " - ";
	std::cout << *lossTeam << " - ";
	std::cout << *tiesTeam << std::endl;
}

Team Team::createTeam()
{
	std::string name;
	std::string sprot;
	std::string location;
	std::string color;
	//std::string 
	std::cout << "Enter the name of the team: " << std::endl;
	//std::cin >> ;
}

int main()

{
	Team Cowboys("Cowboys", "Football", "Dallas, Texas", "Blue, White, and Silver", "A Cowboy", 12, 5, 0);
	//Team Giants("","","","","",0,0,0);

	

	Cowboys.printTeam();




	return(0);
}


