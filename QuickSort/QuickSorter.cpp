/*
 * QuickSorter.cpp
 *
 *  Created on: Oct 13, 2011
 *      Author: haddaway
 */

#include "QuickSorter.h"
#include "StandardIncludes.h"

QuickSorter::QuickSorter(int* array, int size) : data(array), size(size) //Used to initialize variables
{
}

QuickSorter::~QuickSorter() //Destructor
{
	delete[] data;
}

void QuickSorter::sort() //Public method for sorting the QuickSorter's data
{
	this->quickSort(0, size); //Initial Quick Sort
}

void QuickSorter::displayContents() // This will show the current contents of QuickSorter
{
	cout << "Contents: ";
	for(int index = 0; index < size; index++)
	{
		cout << data[index] << " ";
	}
	cout << endl;
}

void QuickSorter::quickSort(int left, int right)
{
	if (left < right)
	{
		int pivotPoint = (left + right) / 2;
		int nextPivotPoint = partitionData(left, right, pivotPoint);
		quickSort(left, nextPivotPoint - 1); // Sort recursively down on the left side
		quickSort(nextPivotPoint + 1, right);	// Sort recursively down on the right side
	}
}



int QuickSorter::partitionData(int left, int right, int pivotPoint)
{
	int pivotData = data[pivotPoint];
	while (left < right)
	{
		while (data[left] < pivotData)
		{
			left++;
		}
		while (data[right] > pivotData)
		{
			right--;
		}
		if (left < right && data[left] != data[right])
		{
			std::swap(data[left], data[right]);
		}
		else
		{
			return right;
		}
	}
	return right;
}
