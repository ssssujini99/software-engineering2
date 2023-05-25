#pragma once
#include<iostream>
#include<map>
#include<algorithm>
#include"Control.h"

// 채용 정보 등록 boundary 클래스
class AddRecruitmetnUI
{
public:
    void Typing_New_Recruitment(FILE * input_File, FILE * output_File, CompanyMember *mem);
};

// 채용 정보 검색 boundary 클래스
class CheckRecruitmentUI
{
public:
    void Check_Recruitments(FILE * output_File, CompanyMember* mem);

};



// 채용 정보 검색 boundry 클래스
class SearchRecruitmentInfoUI
{
public:
	void selectCompany(FILE* in_fp, FILE* out_fp, vector<Member*> M_List);
};

// (회사)채용 정보 통계 boundry클래스
class StatisticRecruitmentInfoUI
{
public:
	void recruitmentStatistic(FILE* out_fp, CompanyMember* mem);
};



// (일반)지원 정보 통계 boundary 클래스
class StatisticApplicationInfoUI
{
public:
	void applicationStatistic(FILE* out_fp, GeneralMember* mem);
};

// 채용 지원 boundary 클래스
class ApplyUI
{
public:
	void clickApply(FILE* in_fp, FILE* out_fp, vector<Member*> M_List, GeneralMember* currentMem);
};

// 지원 취소 boundary 클래스
class CancelApplicationUI
{
public:
	void clickCancelApplication(FILE* in_fp, FILE* out_fp, GeneralMember* currentMem);
};

// 지원 정보 조회 boundary 클래스
class SearchApplicationUI
{
public:
	void searchApply(FILE* out_fp, GeneralMember* currentMem);
};