#include <Python.h>
#include <stdio.h>

void print_python_list_info(PyObject *p)
{
	/* Use generic size variable from listobject.h */
	Py_ssize_t size, al, i = 0;

	/* Gets the size of the struct object */
	size = PyList_Size(p);
	printf("[*] Size of the Python List = %lu\n", size);

	/* Casts the object to a list object */
	al = ((PyListObject *) p)->allocated;
	printf("[*] Allocated = %lu\n", al);

	while (i < size)
	{
		printf("Element %lu: %s\n", i, Py_TYPE(PyList_GetItem(p, i))->tp_name);
		i++;
	}
}
