#include <cstdlib>
#include <ctime>
#include "Engine.hpp"

int				main()
{
	Engine		engine;

	srandom(time(0));
	engine.init();
	engine.loop();
	return (0);
}
