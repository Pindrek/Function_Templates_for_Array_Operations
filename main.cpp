#include "FunctionForArray.hpp"

using Function_For_Array::FunctionForArray;

int main()
{
	vector<Function_For_Array::FunctionForArray> Function = Function_For_Array::get_Array();
	for (int i = 0; i < Function.size(); ++i)
	{
		Function[i].printArray();
	}
}