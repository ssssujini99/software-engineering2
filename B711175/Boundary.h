#pragma once
#include<iostream>
#include"Control.h"

// ä�� ���� ��� boundary Ŭ����
class AddRecruitmetnUI
{
public:
    void Typing_New_Recruitment(FILE * input_File, FILE * output_File, CompanyMember *mem);
};

// ä�� ���� �˻� boundary Ŭ����
class CheckRecruitmentUI
{
public:
    void Check_Recruitments(FILE * output_File, CompanyMember* mem);

};



// ä�� ���� �˻� boundry Ŭ����
class SearchRecruitmentInfoUI
{
public:
	void selectCompany(FILE* in_fp, FILE* out_fp, vector<Member*> M_List);
};

// ���� ���� ��� boundryŬ����
class StatisticRecruitmentInfoUI
{
public:
	void recruitmentStatistic(FILE* out_fp, CompanyMember* mem);
};