#pragma once
#include"iostream"
#include <fstream>

using namespace std;
class Output
{
public:
	Output() {};
	~Output() { /*cout << "析构函数调用" << endl;*/ }


	void output(int num_line, char* filename, double* a, double* b);

private:

protected:

};