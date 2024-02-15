#include <iostream>
#include <string>
#include <vector>

void makeLoading(int in_target_value = 100)
{
	std::string main_text {"Loading"};
	int counter {0};
	while(counter <= in_target_value)
	{
		system("clear");
		std::cout << main_text << " " << counter << std::endl;
		counter++;
	}
	
}

class GameMap
{
private:
	int _width;
	int _height;
	int 
	std::vector<MapObject*> _map_objects;
public:
	void addObject(const* MapObject in_map_object);
	const std::vector& getMapObjects
}

class MapObject
{
	int id;
	int x;
	int y;
	char display;
}


int main()
{
	makeLoading();

	return 0;
}
