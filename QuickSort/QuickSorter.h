/*
 * QuickSorter.h
 *
 *  Created on: Oct 13, 2011
 *      Author: haddaway
 */

#ifndef QUICKSORTER_H_
#define QUICKSORTER_H_

class QuickSorter
{
public:
	QuickSorter(int* array, int size);
	void sort();
	void displayContents();
	virtual ~QuickSorter();
private:
	void quickSort(int left, int right);
	int partitionData(int left, int right, int pivotPoint);
	unsigned int size;
	int* data;
};

#endif /* QUICKSORTER_H_ */
