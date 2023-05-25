#include "Boundary.h"

void StatisticRecruitmentInfoUI::recruitmentStatistic(FILE* out_fp, CompanyMember* mem)
{
	StatisticRecruitmentInfo statistic_RecruitmentInfo;
	vector<Recruitment*> v;
	v = statistic_RecruitmentInfo.showRecruitmentStatistic(mem);

	fprintf(out_fp, "5.1. 지원 정보 통계\n");

	for (int i = 0; i < v.size(); i++)
	{
		fprintf(out_fp, "> %s %d", v[i]->getWork(), v[i]->getApplicantNum());
		fprintf(out_fp, "\n");
	}


};