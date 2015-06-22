/*
 * Teams.h
 *
 *  Created on: Jan 13, 2015
 *      Author: Explicitness
 */
#include <stdio.h>
#include <iostream>
#include <string>

#ifndef TEAMS_H_
#define TEAMS_H_

class Team
{
private:
	std::string nameTeam;
	std::string sportOfTeam;
	std::string locTeam;
	std::string colorTeam;
	std::string mascotTeam;
	int* winTeam;
	int* lossTeam;
	int* tiesTeam;

public:
	Team(std::string newName, std::string newSport, std::string newLoc, std::string newColor, std::string newMascot, int newWins, int newLoss, int newTie)
	{
		nameTeam = newName;
		sportOfTeam = newSport;
		locTeam = newLoc;
		colorTeam = newColor;
		mascotTeam = newMascot;
		winTeam = &newWins;
		lossTeam = &newLoss;
		tiesTeam = &newTie;
		std::cout << "Class Intialized!" << std::endl << std::endl;
	};
	Team createTeam();
	void printTeam();



};

#endif /* TEAMS_H_ */
