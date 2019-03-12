//
//  main.c
//  D2B_divition
//
//  Created by 周吉安 on 2019/3/11.
//  Copyright © 2019 周吉安. All rights reserved.
//

#include <stdio.h>

int main(){
    float test1;
    float test2;
    printf("p");
    scanf("%f",&test1);
    while (test1>0.0001) {
        test2=test1;
        test1=test1*2;
        printf("%.3f*2=%.3f\n",test2,test1);
        if (test1>=1) {
            test1=test1-1;
        }
    }
    return 0;
}
