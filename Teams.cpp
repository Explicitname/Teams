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

void Team::addTeam(std::string newName,
		std::string newSport,
		std::string newLoc,
		std::string newColor,
		std::string newMascot,
		int newWins,
		int newLoss,
		int newTie)
{
	nameTeam = newName;
	sportOfTeam = newSport;
	locTeam = newLoc;
	colorTeam = newColor;
	mascotTeam = newMascot;
	winTeam = newWins;
	lossTeam = newLoss;
	tiesTeam = newTie;
}

void Team::printTeam()
{
	std::cout << "The name of the team is: " << nameTeam << std::endl;
	std::cout << "The sport of the team is: " << sportOfTeam << std::endl;
	std::cout << "The team is located in: " << locTeam << std::endl;
	std::cout << "The team colors are: " << colorTeam << std::endl;
	std::cout << "The team mascot is: " << mascotTeam << std::endl;
	std::cout << "The team's record is: " << winTeam << " - ";
	std::cout << lossTeam << " - ";
	std::cout << tiesTeam << std::endl;
}

int main()

{

	Team Cowboys;
	Cowboys.addTeam("Cowboys", "Football", "Dallas, Texas", "Blue, White, and Silver", "A Cowboy", 12, 5, 0);



	Cowboys.printTeam();




	return(0);
}


