#pragma once

#include "IGraphic.h"

#include <iostream>

using namespace std;

class Graphic : public IGraphic
{
public:
	Graphic::Graphic()
	{
	}

	Graphic::~Graphic()
	{
	}

	void Graphic::Draw()
	{
		cout << "Drawing Graphic Object" << endl;
	}
};