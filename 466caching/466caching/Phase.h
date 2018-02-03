#pragma once
#include <vector>

class Phase {

	std::vector<long long int> mData;

	public:
		long long int getStartAddress();
		long long int getSize();
		std::vector<long long int> const &getData();
		void appendData(const std::vector<long long int>& that);
		void clearData();
};