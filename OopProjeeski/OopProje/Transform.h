#pragma once
#include "PointCloud.h"
class Transform :public PointCloud
{
	double angles[3];
	double trans[3];
	double transMatrix[4][4];

	Transform();

	void get() {

	}
	void set() {

	}

	void setRotation(double angles) {

	}

	void setTranslation(double trans) {

	}
	Point doTransform(Point p) {

	}
	PointCloud doTransform(PointCloud pc) {

	}


};

