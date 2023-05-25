#pragma once
#include<iostream>
#include"Control.h"

// 채용 지원 boundary 클래스
class ApplyUI
{
public:
  void applyCompany(FILE* in_fp, FILE* out_fp, vector<CompanyMember*> cM_List, GeneralMember *mem);
}; 

// 지원 정보 조회 boundary 클래스
class CheckApplicationUI
{
public:
    void Check_Applications(FILE * output_File, GeneralMember* mem);
};

// 지원 취소 boundary 클래스

class CancelApplicationUI
{
public:
  void ClickCancelApplication(FILE* in_fp, FILE* out_fp, vector<CompanyMember*> cM_List, GeneralMember *mem);
}; 



















// 지원 정보 조회 boundary 클래스
class SearchApplicationUI
{
public:
  void SearchApplication(FILE* input_File, FILE* output_File, GeneralMember* mem);
};

// 지원 취소 boundary 클래스
class CancelApplicationUI
{
  public:
  void ClickCancelApplication(FILE* input_File,FILE* output_File, GeneralMember* mem);
};

// 지원 정보 통계 boundary 클래스
class StatisticApplicationInfoUI
{
public:
  void applicationStatistic(FILE* output_File, GeneralMember* mem);
};

