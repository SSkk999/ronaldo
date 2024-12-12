#pragma once
#include <iostream>
using namespace std;
class peopl 
{
	string name;
	struct prioritet
	{
		int hi  = 1;
		int midl = 2 ;
		int lite  = 3;

	};
	int rnd = 0;
	int prio = 0;
	int c = 0;
public:
	peopl()  ;
	peopl(string, int);
	~peopl();
	int pri();
	int time1(int v);
	int name1();

};

