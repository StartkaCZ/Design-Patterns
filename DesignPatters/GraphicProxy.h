#pragma once

#include "Graphic.h"
#include "IGraphic.h"

///<summary>
///Acts as a proxy for the graphics object.
///User interface, contains all the methods that 
///can be called on Graphic and deals with it without
///user needing to know about other resources etc.
///</summary>
class GraphicProxy : public IGraphic
{
public:
	GraphicProxy::GraphicProxy()
	{
		this->graphic = 0;
	}

	GraphicProxy::~GraphicProxy()
	{
		if (graphic)
		{
			delete graphic;
		}
	}

	///<summary>
	///Draws the graphic by the use of instance.
	///</summary>
	void GraphicProxy::Draw()
	{
		getInstance()->Draw();
	}

private:
	///<summary>
	///Singleton like method
	///</summary>
	Graphic* GraphicProxy::getInstance(void)
	{
		if (!graphic)
		{
			graphic = new Graphic();
		}

		return graphic;
	}

private:
	Graphic* graphic;
};
