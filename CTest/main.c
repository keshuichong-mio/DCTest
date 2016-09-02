//
//  main.c
//  CTest
//
//  Created by lic on 16/9/2.
//  Copyright © 2016年 lic. All rights reserved.
//

#include <stdio.h>
#include "DCTest.h"
void scanTest1(void);

int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
//    scanTest1();
    fasterWayTest();
    return 0;
}

void scanTest1(void) {
    int x,y;
    for (int i=0; i<4; i++) {
        printf("请输入数字:  ");
        scanf("%d %d",&x,&y);
        printf("result: %d\n",x+y);
    }
    
}