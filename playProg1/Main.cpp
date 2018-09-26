#include <iostream>
#include <string>
//function declarations

void selectWarhead(std::string t_warhead);
void generateEnemyPos();
void enterCode();

std::string nucCode{ "q30IuDVw" };
std::string expCode{ "bTx7GPij" };
std::string inpCode{ "" };

struct Missile
{
public:
	Warhead payload;
	Coordinates position;
	Target target;
	bool armed = false;
	void arm()
	{
		if (armed)
		{
			armed = false; 
		}
		else
		{
			armed = true;
		}
	}
	void update()
	{
		position.x += 1;
		position.y += 2;
	}
};

typedef struct Position
{
public:
	int x;
	int y;
	
	void print()
	{
		std::cout << x << y << std::endl;
	}
}Coordinates;

enum class Warhead
{
	EXPLOSIVE,
	NUCLEAR
};

typedef struct Enemy
{
public:
	Coordinates coordinates;
}Target;






int main()
{
	std::string warheadType{ "" };
	std::cout << "WELCOME TO MISSILE COMMAND" << std::endl;
	std::cout << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "Nuclear code: " << nucCode << std::endl;
	std::cout << "Explosive code: " << expCode << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;
	std::cout << "please select a warhead: Nuclear (n), Explosive (e)" << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;
	std::cin >> warheadType;
	selectWarhead(warheadType);
	system("pause");

	return 0;
}

void selectWarhead(std::string t_warhead)
{
	while (t_warhead != "n" && t_warhead != "e")
	{
		std::cout << "please select a warhead: Nuclear (n), Explosive (e)" << std::endl;
		std::cin >> t_warhead;
	}
	if (t_warhead == "e" )
	{
		
	}
	else
	{
		Warhead :: NUCLEAR;
	}
}

void generateEnemyPos()
{
	
}

void enterCode()
{
	if (true)
	{

	}
	else
	{

	}
}
