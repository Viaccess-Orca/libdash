/*
 * AbstractAdaptationLogic.cpp
 *****************************************************************************
 * Copyright (C) 2012, bitmovin Softwareentwicklung OG, All Rights Reserved
 *
 * Email: libdash-dev@vicky.bitmovin.net
 *
 * This source code and its use and distribution, is subject to the terms
 * and conditions of the applicable license agreement.
 *****************************************************************************/

#include "AbstractAdaptationLogic.h"

using namespace libdash::framework::adaptation;
using namespace dash::mpd;

AbstractAdaptationLogic::AbstractAdaptationLogic                         (dash::mpd::IAdaptationSet *adaptationSet, dash::mpd::IMPD *mpd, uint32_t startSegment) : 
            mpd(mpd), 
            adaptationSet(adaptationSet),
            segmentNumber(startSegment)
{
}
AbstractAdaptationLogic::~AbstractAdaptationLogic                        () 
{

}
uint32_t     AbstractAdaptationLogic::GetSegmentNumber           ()
{
    return this->segmentNumber;
}
void         AbstractAdaptationLogic::SetSegmentNumber           (uint32_t segmentNumber)
{
    this->segmentNumber = segmentNumber;
}