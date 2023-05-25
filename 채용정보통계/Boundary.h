#pragma once
#include<iostream>
#include"Control.h"

// 채용 정보 통계 boundary클래스
class StatisticRecruitmentInfoUI
{
public:
    void recruitmentStatistic(FILE* out_fp, CompanyMember* mem);
};
