//
//  DCTest.c
//  CTest
//
//  Created by lic on 16/9/2.
//  Copyright © 2016年 lic. All rights reserved.
//

#include "DCTest.h"

void fasterWayTest(void) {
    const int N = 6;
    int e[2] = { 2, 4 };
    int x[2] = {3, 2 };
    int t[2][N] = {{0, 2, 3, 1, 3, 4}, { 0, 2, 1, 2, 2, 1}};
    int a[2][ N ] = { {7, 9, 3, 4, 8, 4}, {8, 5, 6, 4, 5, 7}};
    
    int f[2][N];
    f[0][0] = e[0]+a[0][0];
    f[1][0] = e[1]+a[1][0];
    
    for (int i=1; i<N; i++) {
        
        if (f[0][i-1]+a[0][i]>=f[1][i-1]+t[1][i]+a[0][i]) {
            
            f[0][i] = f[1][i-1]+t[1][i]+a[0][i];
        }else {
            f[0][i] = f[0][i-1]+a[0][i];
        }
        
        if (f[1][i-1]+a[1][i]>=f[0][i-1]+t[0][i]+a[1][i]) {
            f[1][i] = f[0][i-1]+t[0][i]+a[1][i];
        }else {
            f[1][i] = f[1][i-1]+a[1][i];
        }
        
    }
    
    printf("\n");
    for (int i=0; i<2; i++) {
        for (int j=0; j<N; j++) {
            printf("%d\t",f[i][j]);
        }
        printf("\n");
    }
    
    int min = f[0][N-1]+x[0]>=f[1][N-1]+x[1]?f[1][N-1]+x[1]:f[0][N-1]+x[0];
    printf("result: %d\n",min);
}