#include "Phase.h"

class Phase {

	std::vector<long long int> mData;

public:
	long long int getStartAddress() //TODO: Might want to get the value here 
	{
		return mData.at(0);
	}

	long long int getSize()
	{
		return mData.size();
	}

	std::vector<long long int> const &getData()
	{
		return mData; //TODO: Is this correct?
	}

	void appendData(const std::vector<long long int>& that)
	{
		mData.insert(mData.end(), that.begin(), that.end());
	}

	void clearData()
	{
		mData.clear();
	}
};
