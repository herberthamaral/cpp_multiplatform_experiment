#include <stdio.h>

#ifdef WIN32
	#include "os\windows.h"
#endif

int main(int argc, char **argv)
{
	say_hello();
}
