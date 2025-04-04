#include "include.hpp"

namespace Function_For_Array
{
	class FunctionForArray
	{
	private:
		array<short, 16> Array;
		array<short, 16> filtering;
		short minValue;
		short maxValue;
		double average;
	public:
		array<short, 16> getArray();
		short getMinValue();
		short getMaxValue();
		short getFiltering();
		short getAverage();

		void setArray(const array<short, 16>& Array);
		void setMinValue(const short& minValue);
		void setMaxValue(const short& maxValue);
		void setFiltering(const array<short, 16>& filtering);
		void setAverage(const double& average);

		void printArray() const;
	};
	vector<FunctionForArray> get_Array();
}