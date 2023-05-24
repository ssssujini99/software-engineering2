#include "Control.h"


vector<Recruitment*> StatisticRecruitmentInfo::showRecruitmentStatistic(CompanyMember* mem) {
	return mem->Get_RecruitmentList();
}