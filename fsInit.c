/**************************************************************
* Class:  CSC-415-02 Fall 2021
* Names: Jaime Guardado, Guangyi Jia, Renee Sewak, Daniel Moorhatch
* Student IDs: 920290979, 920757003, 920875901, 922033512
* GitHub Name: Jmg047, GuangyiJia, rsewak, dmoorhatch
* Group Name: 415
* Project: Basic File System
*
* File: fsInit.c
*
* Description: Main driver for file system assignment.
*
* This file is where you will start and initialize your system
*
**************************************************************/


#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>

#include "fsLow.h"
#include "mfs.h"


int initFileSystem (uint64_t numberOfBlocks, uint64_t blockSize)
	{
	printf ("Initializing File System with %ld blocks with a block size of %ld\n", numberOfBlocks, blockSize);
	/* TODO: Add any code you need to initialize your file system. */

	return 0;
	}
	
	
void exitFileSystem ()
	{
	printf ("System exiting\n");
	}