#pragma once
#include "PointCloud.h"
class GridMap3D :public PointCloud
{
	bool map[5][5][5];
	float gridSize;
	int depth;

	GridMap3D();

	void get() {

	}
	void set() {

	}
	
	void insertPointCloud(PointCloud& pc) {

	}
	void insertPoint(Point& p) {

	}
	bool const getGrid(int x, int y, int z) {

	}
	bool loadMap() {

	}
	bool saveMap() {

	}

};

