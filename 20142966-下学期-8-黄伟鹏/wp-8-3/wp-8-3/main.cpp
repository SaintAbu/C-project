#include "Cat.h"
#include "liebao.h"

void main()
{
	animal *a;
	cat c;
	liebao l;

	a=&c;
	a->speak();

	a=&l;
	a->speak();
}