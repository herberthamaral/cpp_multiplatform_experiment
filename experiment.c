#include <stdio.h>

#ifdef WIN32
	#include "os\windows.h"
#endif

#ifdef __APPLE__ 
	#include "os/macosx.h"
#endif

#ifdef linux
	#include "os/linux.h"
#endif


int main(int argc, char **argv)
{
	say_hello();
}
