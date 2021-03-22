#include "sample.h"
#include <iostream>
using namespace std;
sample::sample()
{
	cout<<"Base constructor"<<endl;
	cout<<"Base constructor1"<<endl;
}

sample::sample(int s) : num(s){}

sample::sample(const sample &ptr)
{
	this->num = ptr.num;
}

sample& sample::operator =(const sample &ptr)
{
	if(this !=&ptr)
	this->num = ptr.num;
	return *this;
}

void sample::show()
{
	cout<<"The value of num is : "<<num<<endl;
	cout<<"The value of num is : "<<num<<endl;
	cout<<"This is extra"<<endl;
}
