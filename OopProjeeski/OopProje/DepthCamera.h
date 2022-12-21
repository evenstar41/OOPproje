#pragma once
#include "PointCloud.h"
#include<iostream>
using namespace std;

class DepthCamera :public PointCloud
{
	string filename;

	DepthCamera();

	void get() {

	}
	void set() {

	}
	PointCloud capture();

};

