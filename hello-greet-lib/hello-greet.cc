#include "hello-greet.h"
#include <string>

std::string get_greet(const std::string &who)
{
	return "in hello-greet-lib Hello " + who;
}
