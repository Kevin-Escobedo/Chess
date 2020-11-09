#include "Chess.h"
#include <cstring>

int main(int argc, char** argv)
{
	Chess c;

	if(argc == 2)
	{
		if(strcmp(argv[1], "debug") == 0)
		{
			std::cout<<c<<std::endl;
		}
	}
	return 0;
}
