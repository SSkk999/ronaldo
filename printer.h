#pragma once
#include <iostream>
#include "head.h"


using namespace std;

class perinter {
	peopl* arr;
	peopl* arr2;
	int size;
	int maxSize;
public:
	perinter() = delete;
	perinter(int size);
	~perinter();
	bool full();
	bool post();
	void add(string name,int prioretet);
	int cherga();
	void chergastatistic(peopl sd,int ddd);
	void osnresul();
















};