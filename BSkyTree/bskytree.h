#ifndef BSKYTREE_H_INCLUDED
#define BSKYTREE_H_INCLUDED

#include "../common/common.h"


#define BITSIZE			20
#define TDS_THRESHOLD		10
#define RAND_PARAMETER		1
#define MEASURE

// Synthetic dataset parameters
#define NUM_OF_DATA		1
#define NUM_OF_DIM		12
#define NUM_OF_DIST		2
#define DEFAULT_CAR		100000
#define DEFAULT_DIM		10
#define INITIAL_CAR		100000
#define INITIAL_DIM		4
#define TOTAL_REPEAT	1

#define NUM_OF_REAL		2

struct SNode{
	int nLatticeID;
	vector<Point> NodePointList;

	int nNumChild;
	SNode* ChildNode;

	SNode() { }
	SNode (int nLatticeID){
		this->nLatticeID = nLatticeID;
	}
};
/*
void ExecuteSSkyline(vector<int>& AttList, vector<Point>& PointList, vector<Point>& Skyline);
void InsertSkyline(vector<Point>& SkylineList, SNode& SkyNode);
void ClearSkyTree(SNode& SkyTree);
void PushStack(stack<SNode>& Stack, SNode& SkyNode);
void SelectPivotPoint(vector<int>& AttList, vector<Point>& PointList);
int ComputeDistance(vector<int>& AttList, Point CPoint);
bool EvaluatePoint(vector<int>& AttList, int nCPos, vector<Point>& PointList);
extern int nGlobalAtt;
extern unsigned long long nGMeasure;
extern vector<int> GlobalAttList;
bool ComparePointID(Point FirPoint, Point SecPoint);
bool CompareAtt(Point FirPoint, Point SecPoint);
bool CompareMultipleAtt(Point FirPoint, Point SecPoint);
void SetSubspaceList(int nNumAtt, vector<int>* SubspaceList);
void SortPointList(int nNumAtt, vector<Point>& PointList, vector<vector<Point> >& SPointList);
int ExecuteBSkyTree(vector<int>& AttList, vector<Point>& PointList, vector<Point>& Skyline);*/
//void ComputeSubBSkyTree(vector<int>& AttList, vector<Point>& PointList, SNode& SkyTree);
//void MapPointToRegion(vector<int>& AttList, vector<Point>& PointList, map<int, vector<Point> >& PointMap, SNode& SkyTree);
//void PartialDominance(vector<int>& AttList, int nBase, vector<Point>& PointList, SNode& SkyTree);
//bool FilterPoint(Point& CPoint, vector<int>& AttList, SNode& SkyNode);


int ComputeDistance(vector<int>& AttList, Point CPoint);


bool EvaluatePoint(vector<int>& AttList, int nCPos, vector<Point>& PointList);

void SelectPivotPoint(vector<int>& AttList, vector<Point>& PointList, bool* notSkyline);

void MapPointToRegion(vector<int>& AttList, vector<Point>& PointList, map<int, vector<Point> >& PointMap, SNode& SkyTree, bool* notSkyline);


bool FilterPoint(Point& CPoint, vector<int>& AttList, SNode& SkyNode);


void PartialDominance(vector<int>& AttList, int nBase, vector<Point>& PointList, SNode& SkyTree, bool* notSkyline);


void ComputeSubBSkyTree(vector<int>& AttList, vector<Point>& PointList, SNode& SkyTree, bool* notSkyline);


void InsertSkyline(vector<int>& SkylineList, SNode& SkyNode);


void PushStack(stack<SNode>& Stack, SNode& SkyNode);


void ClearSkyTree(SNode& SkyTree);


void ExecuteBSkyTree(Config *cfg, vector<int>& AttList, vector<Point>& PointList, vector<int>& skyline);


void ExecuteBSkyTree_bis(vector<int>& AttList, vector<Point>& PointList, bool* notSkyline);


vector<int> subspaceSkylineSize_TREE(Config *cfg, vector<int>& AttList, vector<Point>& PointList);

#endif // BSKYTREE_H_INCLUDED
