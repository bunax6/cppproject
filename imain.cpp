#include<iostream>
using namespace std;
#include "sample.h"
#include "other/myother.h"

int main()
{
	sample s(19);
	sample s1 =s;
	sample s2;
	s2=s1;
	s2.show();
	other o;
	o.dis();
	return 0;
}

