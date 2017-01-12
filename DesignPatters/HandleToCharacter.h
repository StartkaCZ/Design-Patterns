#pragma once

#include "Character2.h"

///<summary>
///Acts like a handle for the player.
///</summary>
class HandleToCharacter
{
public:
	HandleToCharacter() : character(new Character2()) 
	{
	}
	
	Character2* operator->() 
	{ //overloaded ->
		return character; 
	}

private:
	Character2* character;
};