//////////////////////////////////////////////////////////////////////////
// various testing function: higher level task
// jiefeng@2014-10-04
//////////////////////////////////////////////////////////////////////////


#pragma once

#include "ObjectRanker.h"
#include "ObjProposalDemo.h"
#include "Common/common_libs.h"
#include "IO/Dataset/RGBDECCV14.h"

using namespace visualsearch;
using namespace visualsearch::io;
using namespace visualsearch::processors;

class ObjectProposalTester {

public:
	void TestRankerLearner();

	void BatchProposal();

private:


};

//////////////////////////////////////////////////////////////////////////

