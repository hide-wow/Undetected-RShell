#include <iostream>
#include <string>
#include <Python.h>
#include "pyCode.h"
using namespace std;

void pyPart()
{
	string strCode;

	for (int index = 0; index < (sizeof(codeArray) / sizeof(codeArray[0])); index++)
	{
		strCode += (codeArray[index] / 9875);
	}

	const char* charCode = strCode.c_str();

	Py_Initialize();
	PyRun_SimpleString(charCode);
	Py_Finalize();
}

int main()
{
	pyPart();
	return 0;
}
