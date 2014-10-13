//////////////////////////////////////////////////////////////////////////
// main proposal class
// jiefeng@2014-08-15
//////////////////////////////////////////////////////////////////////////


#pragma once

#include "Processors\Segmentation\IterativeSegmentor.h"
#include "Common\common_libs.h"
#include "ObjectRanker.h"
#include "Common/Tools/RGBDTools.h"

namespace objectproposal
{
	using namespace visualsearch::common;
	using namespace visualsearch::processors::segmentation;

	class ObjSegmentProposal
	{
	private:
		visualsearch::processors::segmentation::IterativeSegmentor iter_segmentor;
		visualsearch::processors::attention::ObjectRanker seg_ranker;


	public:
		ObjSegmentProposal(void);

		bool Run(const Mat& cimg, const Mat& dmap, int topK, vector<SuperPixel>& res);

		bool Compute3DDistMap(const Mat& dmap, Mat& distmap);

		//////////////////////////////////////////////////////////////////////////

		bool VisProposals(const Mat& cimg, const vector<SuperPixel>& res);
	};
}



