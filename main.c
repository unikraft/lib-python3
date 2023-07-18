#define Py_BUILD_CORE
#include <Python.h>

int main(int argc, char *argv[])
{
	return Py_BytesMain(argc, argv);
}

