#pragma once
#include<iostream>
#include"Control.h"

// ä�� ���� ��� boundary Ŭ����
class AddRecruitmetnUI
{
public:
    void Typing_New_Recruitment(FILE * input_File, FILE * output_File, CompanyMember *mem);
};

// ä�� ���� ��ȸ boundary Ŭ����
class SearchRecruitmentUI
{
public:
    void Search_Recruitments(FILE* input_File, FILE* output_File, CompanyMember* mem);

};

//ä������ �˻� boundry Ŭ����
class SearchRecruitmentInfoUI
{
	SearchRecruitmentInfo* SearchRecruitmentInfoPtr;
	Recruitment* selectedRecruitment;

public:
	void selectCompany(FILE* companyname, FILE* out_fp);
};

// ä������ ��� boundryŬ����
class StatisticRecruitmentInfoUI
{
public:
	void recruitmentStatistic(FILE* out_fp,CompanyMember* mem);
};

