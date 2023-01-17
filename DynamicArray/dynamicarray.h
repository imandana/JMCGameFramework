/*
 *  Copyright 2022 Imandana Rahimaswara
 *
 * Released under the MIT license. See the accompanying LICENSE file
 * or visit <https://opensource.org/licenses/MIT>
 */
 
#ifndef __DYNAMIC_ARRAY_H__
#define __DYNAMIC_ARRAY_H__

// equation
// (i*blockCount)/(size*blockCount) = get index data ptr
// i - ( i*blockCount*(size*blockCount) ) = get index real data

struct DynamicArray
{
	int** ptrToBuffer;
	int size;
	int blockCount;
	int totalReservedIndex;
};

// DynamicArray test;
// test.blockCount = 5;
// test.size = 0;

//
// int* data
// data = (int*)malloc( blockCount*(sizoeof(int)) );
// (ptrToBuffer + size) = &data;
// size += 1;

// int* data
// data = (int*)malloc( blockCount*(sizoeof(int)) );
// (ptrToBuffer + size) = &data;
// size += 1;
// 
//
// How to access
//
// (*test.ptrToBuffer + test.size
//


#endif /// __DYNAMIC_ARRAY_H__

