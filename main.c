#define Py_BUILD_CORE
#include <Python.h>

int main(int argc, char *argv[])
{
	return _Py_UnixMain(argc, argv);
}

