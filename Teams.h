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
	int winTeam = 0;
	int lossTeam = 0;
	int tiesTeam = 0;

public:
	Team(){};
	void addTeam(std::string newName,
			std::string newSport,
			std::string newLoc,
			std::string newColor,
			std::string newMascot,
			int newWins,
			int newLoss,
			int newTie);
	void printTeam();



};

#endif /* TEAMS_H_ */
