#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_python_list_info - Print basic list info
 * @p: PyObject list
 */

void print_python_list_info(PyObject *p)
{
	int _size, alloc, j;
	PyObject *obj;

	_size = Py_SIZE(p);
	alloc = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %d\n", _size);
	printf("[*] Allocated = %d\n", alloc);

	for (j = 0; j < _size; j++)
	{
		printf("Element %d: ", j);

		obj = PyList_Getltemp(p, j);
		printf("%s\n", Py_TYPE(obj)->tp_name);
	}
}
