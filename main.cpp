#include<iostream>
#include"read.h"
#include"write.h"
//#include""
//#include<UDF.h>
using namespace std;
int main(int argc, char* argv[])
{
	int num_line;
	cout << "请输入数据行数" << endl;
	cin >> num_line;
	char* filename;
	char* filename_out;
	filename = argv[1];
	filename_out = argv[2];
	cout << "输入文件为： "<<filename << endl <<"输出文件为： " <<filename_out << endl;
	double a[10000];
	double b[10000];
	Read UDF_R;
	UDF_R.read(num_line, filename, a, b);
	Output UDF_O;
	UDF_O.output(num_line, filename_out, a, b);
	return 0;
}