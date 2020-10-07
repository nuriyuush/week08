//
//  main.c
//  exe2
//
//  Created by НУРИЯ on 10/7/20.
//  Copyright © 2020 НУРИЯ. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    int *ptr;
    int bytes=100*1057056;
    for(int i=0; i<10; i++)
    {
       ptr=(int*)malloc(bytes);
        memset(ptr, 0, bytes);
        sleep(1);
    }

    exit(0);
}
//Si and So are stay the same 0 due to the process is not swapped
//number of free memory is decreasing
