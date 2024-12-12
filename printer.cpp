#include "printer.h"
#include "head.h"
#include <cstdlib>
#include <ctime> 



perinter::perinter(int size1)
{	
	
	this->maxSize = size1;
	 arr =  new peopl[maxSize];
	 arr2 =  new peopl[maxSize];
	 size = 0;
}

perinter::~perinter()
{
	if (arr != nullptr) {
	delete[] arr;
	arr = nullptr;
	}
	if ( arr2 != nullptr) {
		delete[] arr2;
		arr2 = nullptr;
	}

}

bool perinter::full()
{
	return size == maxSize;
}

bool perinter::post()
{
	return size == 0;
}

void perinter::add(string name, int prioretet)
{
	if (!full())
	{
		arr[size++] = peopl(name, prioretet);
		
	}

}

int perinter::cherga()
{
	int  size1 = 0;
	int cl = 0;
	for (int j = 0; j < maxSize; j++)
	{
		if (!post()) {
			peopl temp = arr[0];
			for (int i = 1; i < size; i++)
			{
				if (cl >=1)
				{
					if (arr[1 - i].pri() < arr[i].pri()) {
						peopl temp1 = arr[i - 1];
						arr[i - 1] = arr[i];
						arr[i] = temp1;
						cl++;
					}
				}


			}
			for (int i = 1; i < maxSize; i++)
			{

				arr[i - 1] = arr[i];

			}
			--size;
			chergastatistic(temp,size1);

		}
		size1++;
	}

	return 0;
}

void perinter::chergastatistic(peopl sd,int size)
{

	arr2[size] = sd;
	
}
 ostream & operator<<(ostream & os,  peopl& obj) {
	 os << obj.name1();
	 return os;
}
void perinter::osnresul()
{
	int rnd = 0;
	int num = 0;
	
	srand(time(NULL));

		for (int i = 0; i < maxSize; i++)
		{
			num = rand() % 60 + 1;
			rnd = rand() % num + 1;
			
			cout  << arr2[i].name1()  << " time:" << rnd << "sc" << "\n";
	
		}
		return;
}


