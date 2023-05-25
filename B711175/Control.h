#pragma once
#include <iostream>
#include <map>
#include "CompanyMember.h"
#include "GeneralMember.h"

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

// (회사) 채용 정보 통계 control 클래스
class StatisticRecruitmentInfo
{
public:
	map<char*, int> showRecruitmentStatistic(CompanyMember* mem);

};

// (일반) 지원 정보 통계 control 클래스
class StatisticApplicationInfo
{
public:
	map<char*, int> showApplicationStatistic(GeneralMember* mem);
};


// 채용 지원 control 클래스
class ApplyControl
{
public:
	Recruitment* apply(char* name, vector<Member*> mem, GeneralMember* gMem);
};

// 지원 취소 control 클래스
class CancelApplication
{
public:
	Recruitment* cancelApply(char* number, GeneralMember* mem);
};

// 지원 정보 조회 control 클래스
class SearchApplication
{
public:
	vector<Recruitment*> getApplicationList(GeneralMember* currentMem);
};