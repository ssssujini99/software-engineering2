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
class SearchRecruitmentUI
{
public:
    void Search_Recruitments(FILE* input_File, FILE* output_File, CompanyMember* mem);

};
