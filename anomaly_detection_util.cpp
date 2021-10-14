/*
 * animaly_detection_util.cpp
 *
 * Author: write your ID and name here
 */

#include <math.h>
#include "anomaly_detection_util.h"

float avg(float* x, int size){
	return 0;
}

// returns the variance of X and Y
float var(float* x, int size){
    //initialize variables for sums and return value
    float squaredSum = 0;
    float expectedValue = 0;
    float inverseSize = (float (1) / float (size));
    float varReturn = 0;

    /*
     * this loop adds all floats from x
     * to create a sum and a squared sum.
     * */
    for(int i = 0; i < size; i++) {
        expectedValue += *x;
        squaredSum += pow(*x, 2);
        x++;
    }
    expectedValue = pow((inverseSize * expectedValue), 2);
    varReturn = (inverseSize * squaredSum) - expectedValue;
    return varReturn;
}

// returns the covariance of X and Y
float cov(float* x, float* y, int size){
	return 0;
}


// returns the Pearson correlation coefficient of X and Y
float pearson(float* x, float* y, int size){
	//create copies of x, y
    float* xCopy = x;
	float* yCopy = y;
    // calculate covariance of x, y
    float covariance = cov(xCopy, yCopy, size);
    // calculate square root of x,y's variances
	float varianceX = sqrt(var(x, size));
	float varianceY = sqrt(var(y, size));
	//calculate pearson
	float returnPearson = covariance / (varianceX * varianceY);
	return returnPearson;
}

// performs a linear regression and returns the line equation
Line linear_reg(Point** points, int size){
	return Line(0,0);
}

// returns the deviation between point p and the line equation of the points
float dev(Point p,Point** points, int size){
	//create line
    Line line = linear_reg(points, size);
    //find distance between line and point
    return dev(p, line);
}

// returns the deviation between point p and the line
float dev(Point p,Line l){
    //find distance between line and point
    float devReturn = abs(l.f(p.x) - p.y);
    return devReturn;
}




