#pragma once
#include<iostream>




using namespace std;

class Read
{
public:

	Read(){}
	~Read(){ /*cout << "析构函数调用" << endl;*/ }


	void read(int num_line, char* filename, double* a, double* b);

protected:

private:

};