#pragma once
#include <iostream>
#include "CompanyMember.h"

// 채용 정보 등록 control 클래스
class AddRecruitment
{
public:
    Recruitment * Create_Recruitment(CompanyMember* mem, char* job, int num, char* deadline);
};

// 등록 채용 정보 조회 control 클래스
class CheckRecruitment
{
public:
    vector<Recruitment*> Check_Recruitments(CompanyMember* mem);
};



// 채용 정보 검색 control 클래스
class SearchRecruitmentInfo
{
public:
	vector<Recruitment*> showRecruitmentList(vector<Member*> cM_List, char* companyName);
};

// 지원 정보 통계 control 클래스
class StatisticRecruitmentInfo
{
public:
	vector<Recruitment*> showRecruitmentStatistic(CompanyMember* mem);

};