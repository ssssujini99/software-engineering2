#pragma once
#include<iostream>
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

// 지원 정보 통계 boundry클래스
class StatisticRecruitmentInfoUI
{
public:
	void recruitmentStatistic(FILE* out_fp, CompanyMember* mem);
};