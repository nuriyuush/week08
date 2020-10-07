//
//  main.c
//  exe4.c
//
//  Created by НУРИЯ on 10/7/20.
//  Copyright © 2020 НУРИЯ. All rights reserved.
//
#include <stdio.h>
#include <memory.h>
#include <unistd.h>
#include <sys/resource.h>
#include <stdlib.h>
int main(void) {
    int *ptr;
    int bytes=10*1024*1024;
    struct rusage* usage=malloc(sizeof(struct rusage));
    for(int i=1; i<=10; i++)
    {
        ptr = calloc(i*bytes, 10);
        memset(ptr, 0, bytes);
        getrusage(RUSAGE_SELF, usage);
        printf("maximal: %ld\n", usage->ru_maxrss);
        sleep(1);
    }
    exit(0);
}
/* Output:
maximal: 55078912
maximal: 65572864
maximal: 76058624
maximal: 86544384
maximal: 97030144
maximal: 107515904
maximal: 118001664
maximal: 128487424
maximal: 138973184
maximal: 149458944
*/
