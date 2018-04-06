#ifndef _DHYPER_HPP_
#define _DHYPER_HPP_

#include "DDataTypes.hpp"

bool AddHyperPoint(double x, double y, char iCtrl, PDPointList pPoints, int iInputLines);
bool BuildHyperCache(PDPoint pTmpPt, int iMode, PDPointList pPoints, PDPointList pCache,
    PDLine pLines, double *pdDist);
int BuildHyperPrimitives(PDPoint pTmpPt, int iMode, PDRect pRect, PDPointList pPoints,
    PDPointList pCache, PDPrimObject pPrimList, PDLine pLines, PDRefPoint pBounds, double dOffset,
    double *pdDist, PDPoint pDrawBnds, bool bQuadsOnly = false);
double GetHyperDistFromPt(CDPoint cPt, CDPoint cRefPt, PDPointList pCache, PDLine pPtX);
bool HasHyperEnoughPoints(PDPointList pPoints, int iInputLines);
double GetHyperRadiusAtPt(CDPoint cPt, PDPointList pCache, PDLine pPtR, bool bNewPt);
bool GetHyperPointRefDist(double dRef, PDPointList pCache, double *pdDist);
void AddHyperSegment(double d1, double d2, PDPointList pCache, PDPrimObject pPrimList, PDRect pRect);
bool GetHyperRefPoint(double dRef, PDPointList pCache, PDPoint pPt);
bool GetHyperRestrictPoint(CDPoint cPt, int iMode, double dRestrictValue, PDPoint pSnapPt,
    PDPointList pCache);
bool GetHyperRefDir(double dRef, PDPointList pCache, PDPoint pPt);
bool GetHyperReference(double dDist, PDPointList pCache, double *pdRef);

#endif