#include <iostream>
#include <string>

std::string nucCode{ "q30IuDVw" };
std::string expCode{ "bTx7GPij" };
std::string inpCode{ "" };

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

void selectWarhead(std::string t_warhead, Warhead &t_type);
void generateEnemyPos(Enemy &enemy);
void enterCode(Warhead &t_type);
void showEnemyRange(Enemy &enemy);
void enterMissileCoord(Missile &t_missile);
void checkCollision(Enemy &enemy, Missile &missile, Warhead &type);










int main()
{
	Missile missile{};
	Warhead type{};
	Enemy enemy;
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
	selectWarhead(warheadType,type);
	enterCode(type);
	generateEnemyPos(enemy);
	showEnemyRange(enemy);
	enterMissileCoord(missile);
	checkCollision(enemy,missile,type);
	system("pause");

	return 0;
}

void selectWarhead(std::string t_warhead, Warhead &t_type)
{
	while (t_warhead != "n" && t_warhead != "e")
	{
		std::cout << "please select a warhead: Nuclear (n), Explosive (e)" << std::endl;
		std::cin >> t_warhead;
		std::cout << "------------------------------------------------------------" << std::endl;
		
	}
	if (t_warhead == "e" )
	{ 
		t_type = Warhead::EXPLOSIVE;
	}
	else
	{
		t_type = Warhead :: NUCLEAR;
	}
	
}

void generateEnemyPos(Enemy &enemy)
{
	enemy.coordinates.x = rand() % 1000;
	enemy.coordinates.y = rand() % 100;
}

void enterCode(Warhead &t_type)
{
	std::string code;
	if (t_type == Warhead::EXPLOSIVE)
	{
		std::cout << "Enter explosive code" << std::endl;
		std::cin >> code;
		std::cout << "------------------------------------------------------------" << std::endl;
		while (code != expCode)
		{
			std::cout << "incorrect code try again" << std::endl;
			std::cin >> code;
			std::cout << "------------------------------------------------------------" << std::endl;
		}
		std::cout << "Missile will be armed" << std::endl;
		std::cout << "------------------------------------------------------------" << std::endl;
	}
	else if (t_type == Warhead::NUCLEAR)
	{
		std::cout << "Enter nuclear code" << std::endl;
		std::cin >> code;
		std::cout << "------------------------------------------------------------" << std::endl;
		while (code != nucCode)
		{
			std::cout << "incorrect code try again" << std::endl;
			std::cin >> code;
			std::cout << "------------------------------------------------------------" << std::endl;
		}
		std::cout << "Missile will be armed" << std::endl;
		std::cout << "------------------------------------------------------------" << std::endl;
	}
}

void showEnemyRange(Enemy &enemy)
{
	int xRange1 = enemy.coordinates.x + rand() % 50;
	int xRange2 = enemy.coordinates.x - rand() % 50;
	int yRange1 = enemy.coordinates.y + rand() % 20;
	int yRange2 = enemy.coordinates.y - rand() % 20;
	std::cout << "Approx x range of enemy :" << xRange2 << " - " << xRange1 << std::endl;
	std::cout << "Approx y range of enemy :" << yRange2 << " - " << yRange1 << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;
}

void enterMissileCoord(Missile &t_missile)
{
	std::cout << "enter x then why coord of missile fire" << std::endl;
	std::cin >>t_missile.position.x >> t_missile.position.x;
}

void checkCollision(Enemy &enemy, Missile &missile, Warhead &type)
{
	/*int nucRad = 5;
	int exprange = 3;
	if (type == Warhead::EXPLOSIVE)
	{
		if (enemy.coordinates.x - missile.position.x <= 5 )
		{
			if (enemy.coordinates.y - missile.position.y <= 5)
			{

			}
			else if (enemy.coordinates.y - missile.position.y >= -5 && enemy.coordinates.y - missile.position.y <= 0)
			{

			}
		}
		else if ( enemy.coordinates.x - missile.position.x >= -5 &&  enemy.coordinates.x - missile.position.x <= 0)
		{
			if (enemy.coordinates.y - missile.position.y <= 5)
			{

			}
			else if (enemy.coordinates.y - missile.position.y >= -5 && enemy.coordinates.y - missile.position.y <= 0)
			{

			}
		}
	}
	else
	{
		if (enemy.coordinates.x - missile.position.x <= 5)
		{
			if (enemy.coordinates.x - missile.position.x <= 5)
			{

			}
			else if (enemy.coordinates.x - missile.position.x >= -5 && enemy.coordinates.x - missile.position.x <= 0)
			{

			}
		}
		else if (enemy.coordinates.x - missile.position.x >= -5 && enemy.coordinates.x - missile.position.x <= 0)
		{
			if (enemy.coordinates.x - missile.position.x <= 5)
			{

			}
			else if (enemy.coordinates.x - missile.position.x >= -5 && enemy.coordinates.x - missile.position.x <= 0)
			{

			}
		}
	}*/
}