//
//  main.c
//  test
//
//  Created by HanXiao on 11/3/15.
//  Copyright © 2015 HanXiao. All rights reserved.
//

// 国光星空 iOS面试题
/*
 汤姆现在要在家里举办家庭宴会，他虽然有很多筷子，但这些筷子的长度并不完全相同。现已知每根筷子的长度，要求每位客人都能拿到两根长度相同的筷子，求最多可邀请的客人数。
 编程实现：int getMax(int arrLength[N])
 
 */



#include <stdio.h>

int array[] = {1,2,1,1,2,3,4,5,6,1,0,1}; // 已知每只筷子的长度
int arrCount = sizeof(array) / sizeof(array[0]); // 数组元素个数

int getMax(int arrLength[arrCount]) {
    int count = 0;
    for (int i = 0; i < arrCount; i++) {
        if (arrLength[i] != 0) {
            for (int j = i + 1; j < arrCount; j++) {
                if (arrLength[i] == arrLength[j] && (arrLength[i] && arrLength[j]) != 0) {
                    count++;
                    arrLength[i] = 0;
                    arrLength[j] = 0;
                }
            }
        }
    }
    for (int l = 0; l < arrCount; l++) {
        printf("%d ", arrLength[l]);
    }
    return count;
}

int main(int argc, const char * argv[]) {

    printf("\n%d 只筷子中最多有 %d 双长度相等的筷子\n", arrCount, getMax(array));
    return 0;
}


