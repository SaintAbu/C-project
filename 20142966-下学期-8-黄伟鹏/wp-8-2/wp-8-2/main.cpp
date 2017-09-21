#include "people.h"
#include "student.h"
#include "teacher.h"

void main()
{
	student s;
	teacher t;

	s.set_vale(29,"wang");
	s.set_ids(20142966);
	s.display();

	t.set_vale(14,"zhuang");
	t.set_idt(20142960);
	t.display();
}