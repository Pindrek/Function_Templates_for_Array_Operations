#include "FunctionForArray.hpp"

using Function_For_Array::FunctionForArray;

namespace Function_For_Array
{
	vector<FunctionForArray> get_Array()
	{
		vector<FunctionForArray> MyArray;
		srand(time(NULL));
		array<short, 16> Array;
		array<short, 16> filtering;
		short minValue, maxValue;
		for (int i = 0; i < Array.size(); ++i) Array[i] = rand() % 601 - 300;
		minValue = *std::min_element(Array.begin(), Array.end());
		maxValue = *std::max_element(Array.begin(), Array.end());
		double average = static_cast<double>(accumulate(Array.begin(), Array.end(), 0)) / Array.size();
		filtering = Array;
		sort(filtering.begin(), filtering.end());

		FunctionForArray func;
		func.setArray(Array);
		func.setMinValue(minValue);
		func.setMaxValue(maxValue);
		func.setFiltering(filtering);
		func.setAverage(average);
		MyArray.push_back(func);

		return MyArray;
	}

	void FunctionForArray::setArray(const array<short, 16>& Array)
	{
		this->Array = Array;
	}
	void FunctionForArray::setMinValue(const short& minValue)
	{
		this->minValue = minValue;
	}
	void FunctionForArray::setMaxValue(const short& maxValue)
	{
		this->maxValue = maxValue;
	}
	void FunctionForArray::setFiltering(const array<short, 16>& filtering)
	{
		this->filtering = filtering;
	}
	void FunctionForArray::setAverage(const double& average)
	{
		this->average = average;
	}

	void FunctionForArray::printArray() const
	{
		cout << "\t\t\t\tArray" << endl << endl << "Array: ";
		for (int i = 0; i < Array.size(); ++i) cout << Array[i] << " ";
		cout << endl << "Filtering: ";
		for (int i = 0; i < filtering.size(); ++i) cout << filtering[i] << " ";
		cout << endl << endl << "MinValue: " << minValue << endl << "MaxValue: " << maxValue << endl << "Average: " << average << endl;
	}
}