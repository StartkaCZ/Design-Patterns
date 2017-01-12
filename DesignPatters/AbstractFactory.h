#pragma once

#include "Character.h"

///<summary>
///Abstract factory.
///</summary>
class Factory 
{
public:
	virtual Character* CreatePlayer() = 0;
	virtual Character* CreateOpponents() = 0;
};

///<summary>
///Character factory returning sliced objects. (character objects)
///</summary>
class CharacterFactory : public Factory 
{
public:
	Character* CreatePlayer() 
	{
		return new Player;
	}
	Character* CreateOpponents() 
	{
		return new Boss;
	}
};


