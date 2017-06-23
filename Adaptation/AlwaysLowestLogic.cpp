/*
 * AlwaysLowestLogic.cpp
 *****************************************************************************
 * Copyright (C) 2012, bitmovin Softwareentwicklung OG, All Rights Reserved
 *
 * Email: libdash-dev@vicky.bitmovin.net
 *
 * This source code and its use and distribution, is subject to the terms
 * and conditions of the applicable license agreement.
 *****************************************************************************/

#include "AlwaysLowestLogic.h"
#include<stdio.h>

using namespace libdash::framework::adaptation;
using namespace libdash::framework::input;
using namespace libdash::framework::mpd;
using namespace dash::mpd;

AlwaysLowestLogic::AlwaysLowestLogic(viper::managers::StreamType type, MPDWrapper *mpdWrapper, struct AdaptationParameters *params) :
    AbstractAdaptationLogic(type, mpdWrapper)
{
}

AlwaysLowestLogic::~AlwaysLowestLogic()
{
}

LogicType AlwaysLowestLogic::getType()
{
    return adaptation::AlwaysLowest;
}

bool AlwaysLowestLogic::isUserDependent()
{
    return false;
}

bool AlwaysLowestLogic::isRateBased()
{
    return false;
}

bool AlwaysLowestLogic::isBufferBased()
{
    return false;
}

void AlwaysLowestLogic::bitrateUpdate(uint64_t bps, uint32_t segNum)
{
}

void AlwaysLowestLogic::bufferUpdate(uint32_t bufferfill, int maxC)
{
}

void AlwaysLowestLogic::setMultimediaManager(viper::managers::IMultimediaManagerBase *mmM)
{
}

void AlwaysLowestLogic::onEOS(bool value)
{
}

void AlwaysLowestLogic::dLTimeUpdate(double time)
{
}

void AlwaysLowestLogic::checkedByDASHReceiver()
{
}
