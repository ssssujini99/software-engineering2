#pragma once
#include<iostream>
#include"Control.h"

// 채용 정보 등록 boundary 클래스
class AddRecruitmetnUI
{
public:
    void Typing_New_Recruitment(FILE * input_File, FILE * output_File, CompanyMember *mem);
};

// 채용 정보 조회 boundary 클래스
class SearchRecruitmentUI
{
public:
    void Search_Recruitments(FILE* input_File, FILE* output_File, CompanyMember* mem);

};

//채용정보 검색 boundry 클래스
class SearchRecruitmentInfoUI
{
	SearchRecruitmentInfo* SearchRecruitmentInfoPtr;
	Recruitment* selectedRecruitment;

public:
	void selectCompany(FILE* companyname, FILE* out_fp);
};

// 채용정보 통계 boundry클래스
class StatisticRecruitmentInfoUI
{
public:
	void recruitmentStatistic(FILE* out_fp,CompanyMember* mem);
};

