#include <stdio.h>
#nclude <stdlib.h>

#include "FirstClass.h"

using namespace std;

void FirstClass::someFunction()
{
	printf("test of FirstClass"); 
}

FirstClass::FirstClass()
{
	m_someInt = 13;
}
