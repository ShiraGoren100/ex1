//
// Created by shira goren on 14/10/2021.
//
#include <iostream>
#include <exception>
#include "anomaly_detection_util.h"

using namespace std;

int main() {
    //1.1) check if N = length of x
    float x1[] = {5,4,7,6,8,9};
    int size1 = 7;
    float sec = var(x1, size1);
    if (sec != sec){
        cout<<"failed test 1.1"<<endl;
    }

    //check if N=0
    float x2[] = {0};
    int size2 = 0;

}