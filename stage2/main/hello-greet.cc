#include "hello-greet.h"
#include <string>

std::string get_greet(const std::string &who)
{
	std::cout << "hello world!" << std::endl;
	return "Hello " + who;
}
