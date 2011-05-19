#include <stdio.h>

#ifdef WIN32
	#include "os\os.h"
#else
	#include "os/os.h"
#endif

int main(int argc, char **argv)
{
	say_hello();
}
