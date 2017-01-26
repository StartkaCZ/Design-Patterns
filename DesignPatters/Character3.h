#pragma once

#include "DrawAPI.h"

class Character3
{
public:
	~Character3()
	{

	}
	virtual void Draw() = 0;
};

///<summary>
///Draws a player inddepended of the implementation
///</summary>
class Player2 : public Character3
{
public:
	Player2(DrawAPI* api) 
	{ 
		this->api = api; 
	}
	~Player2()
	{
		if (api)
			delete api;
	}

	void Draw() 
	{ 
		api->Draw(); 
	}

private:
	DrawAPI* api;
};
