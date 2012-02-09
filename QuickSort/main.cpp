/*
 * main.cpp
 *
 *  Created on: Oct 13, 2011
 *      Author: haddaway
 */
#include "StandardIncludes.h"
#include "QuickSorter.h"
#include <algorithm>

int main() {
	int unsorted[] = {14, 10, 11, 13, 10, 16, 12, 15, 18, 10};
	QuickSorter sorter = QuickSorter(unsorted, 10);
	sorter.sort();
	sorter.displayContents();
	return 0;
}




