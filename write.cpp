#include"write.h"
#include<iostream>
#include <fstream>

using namespace std;

void Output::output(int num_line, char* filename_out, double* a, double* b)
{

	ofstream ofs;

	ofs.open(filename_out, ios::out);

	ofs << "#include<udf.h>"<< endl;
	ofs << "DEFINE_PROPERTY(superr_density, c, t)" << endl;
	ofs << "{" << endl;
	ofs << "real b;" << endl;
	ofs << "real a = C_T(c, t); " << endl;
	ofs << "if(a==" << a[0] << ")" << endl;
	ofs << "b=" << b[0] << ";" << endl;
	int i;
	for (i = 1; i < num_line;i++)
	{
		ofs << "else if(a==" << a[i] << ")" << endl;
		ofs << "b=" << b[i] << ";" << endl;
	}
	ofs << "return b;" << endl;
	ofs << "}" << endl;
	//ofs << "copyright by suqingji";
	ofs.close();
}
