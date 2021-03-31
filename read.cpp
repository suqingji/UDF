#include"read.h"
#include<iostream>
#include <fstream>
using namespace std;

void Read::read(int num_line, char* filename, double* a, double* b)
{
	ifstream ifs;
	ifs.open(filename, ios::in);

	if (!ifs.is_open())
	{
		cout << "你大爷的，没有这个文件" << endl;
		return;
	}
	int i;
	for (i = 0; i < num_line; i++)
	{
		ifs >> a[i];
		ifs >> b[i];
	}
	ifs.close();
}
