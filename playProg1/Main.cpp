#include <iostream>
#include <string>
//function declarations
void arm();
void selectWarhead(std::string t_warhead);
void generateEnemyPath();



struct Missile
{
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
		coordinates.x += 1;
		coordinates.y += 2;
	}
};

typedef struct Position
{
	int x;
	int y;
	
	void print()
	{
		std::cout << x << y << std::endl;
	}
}Coordinates;

enum Warhead
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
	std::cout << "please select a warhead: Nuclear (n), Explosive (e)" << std::endl;
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
		Warhead :: EXPLOSIVE;
	}
	else
	{
		Warhead :: NUCLEAR;
	}
}

void generateEnemyPath()
{
	
}