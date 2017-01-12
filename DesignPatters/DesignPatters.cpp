#include "stdafx.h"
//THE ABSTRACT FACTORY FOR CREATION OF PLAYERS
#include "AbstractFactory.h"
//THE HANDLE FOR CHARACTER - BRIDGE PATTERN
#include "HandleToCharacter.h"
//API - BRIDGE PATTERN
#include "Character3.h"
//PROXY PATTERNS
#include "GraphicProxy.h"


#include <vector>


using namespace std;


int main()
{
	cout << "ABSTRACT FACOTRY PATTERN DISPLAYING:" << endl << endl;
	///////////////////////////////////////////////////////////
	//ABSTRACT FACTORY
	///////////////////////////////////////////////////////////
	Factory* factory = new CharacterFactory;
	vector<Character*> characters;
	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateOpponents());

	for (int i = 0; i < characters.size(); i++)
	{
		characters[i]->draw();
	}
	///////////////////////////////////////////////////////////
	cout << endl << "ABSTRACT FACOTRY PATTERN FINISHED:" << endl;


	cout << endl << endl << "HANDLE CLASS DISPLAYING:" << endl << endl;
	///////////////////////////////////////////////////////////
	//HADNLE CLASS
	///////////////////////////////////////////////////////////
	HandleToCharacter handle; handle->Print();
	///////////////////////////////////////////////////////////
	cout << endl << "HANDLE CLASS FINISHED:" << endl;


	cout << endl << endl << "BRDIGE PATTERN DISPLAYING:" << endl << endl;
	///////////////////////////////////////////////////////////
	//BRDIGE PATTERN
	///////////////////////////////////////////////////////////
	DrawAPI* api = new DrawImpl();
	Character3* character3 = new Player2(api);
	character3->Draw();
	///////////////////////////////////////////////////////////
	cout << endl << "BRDIGE PATTERN FINISHED:" << endl;


	cout << endl << endl << "PROXY PATTERN DISPLAYING:" << endl << endl;
	///////////////////////////////////////////////////////////
	//PROXY PATTERN
	///////////////////////////////////////////////////////////
	GraphicProxy gp;
	gp.Draw();
	///////////////////////////////////////////////////////////
	cout << endl << "PROXY PATTERN FINISHED:" << endl;


	system("PAUSE");

    return 0;
}

