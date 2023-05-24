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
class SearchRecruitmentUI
{
public:
    void Search_Recruitments(FILE* input_File, FILE* output_File, CompanyMember* mem);

};
