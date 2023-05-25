// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <iostream>


#include "Boundary.h"

// 상수 선언
#define Max_User 100
#define MAX_STRING 32
#define INPUT_FILE_NAME "inputA.txt"
#define OUTPUT_FILE_NAME "outputA.txt"

// 함수 선언
void DoTask();
void Program_Exit();

// 변수 선언    
FILE* in_fp, * out_fp;

// CompanyMember 객체 포인터 벡터 저장 
vector<CompanyMember*> companyList;
//vector<Member*> memberLists;
CompanyMember* currentMember;

// GeneralMember 객체 포인터 벡터
//vector<GeneralMember*> generalList;


int main()
{
    // 파일 입출력을 위한 초기화
    in_fp = fopen(INPUT_FILE_NAME, "r+");
    out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    DoTask();

    fclose(in_fp);
    fclose(out_fp);

    return 0;
}



void DoTask()
{

    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);


        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
            switch (menu_level_2)
            {
                // "1.1. 회원가입“ 메뉴
            case 1:
                // 유저 타입 (1) - 회사 회원
                int user_type;
                fscanf(in_fp, "%d ", &user_type);

                if (user_type == 1)
                {
                    char name[MAX_STRING], number[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];
                    fscanf(in_fp, "%s %s %s %s", name, number, ID, password);

                    CompanyMember* newMember = new CompanyMember(name, number, ID, password, user_type);
                    companyList.push_back(newMember);

                    fprintf(out_fp, "1.1. 회원가입\n");
                    fprintf(out_fp, "> %s %s %s %s\n",newMember->getCompanyName(), newMember->getBusinessNum(),newMember->getId(), newMember->getPassword());

                }
                else
                {
                    // 유저 타입 (2) - 일반 회원
                }
                break;

            case 2:
                // "1.2. 회원탈퇴" 메뉴

                break;

            }
            break;

        case 2:
            switch (menu_level_2)
            {
                case 1:
                    // 로그인
                    char ID[MAX_STRING], password[MAX_STRING];
                    fscanf(in_fp, "%s %s", ID, password);

                    for (int i = 0; i < companyList.size(); i++)
                    {
                        if (strcmp(companyList[i]->getId(), ID) == 0)
                        {
                            if (strcmp(companyList[i]->getPassword(), password) == 0)
                            {
                                currentMember = companyList[i];

                                fprintf(out_fp, "2.1. 로그인\n");
                                fprintf(out_fp, "> %s %s\n", currentMember->getId(), currentMember->getPassword());

                                break;
                            }
                            else
                            {
                                //... 비밀번호가 틀렸을 경우
                            }
                        }
                        else
                        {
                            //... ID가 존재하지 않는 경우
                        }
                    }
                    break;

                case 2:
                    // 로그아웃
                    fprintf(out_fp, "2.2. 로그아웃\n");
                    fprintf(out_fp, "> %s\n", currentMember->getId());

                    currentMember = NULL;
                    break;
            }
            break;

        case 3:
            switch (menu_level_2)
            {
                // 3.1 채용 정보 등록
            case 1:     
                AddRecruitmetnUI _add_RecruitmentUI;
                _add_RecruitmentUI.Typing_New_Recruitment(in_fp, out_fp, currentMember);
                break;

                // 3.2 등록된 채용 정보 조회
            case 2:
                
                CheckRecruitmentUI _check_RecruitmentUI;
                _check_RecruitmentUI.Check_Recruitments(out_fp, currentMember);
                
                break;
            }
            break;

        case 4:
            switch (menu_level_2)
            {
                // 4.1. 채용 정보 검색
            case 1:
                SearchRecruitmentInfoUI searchRecruitmentUI;
                searchRecruitmentUI.selectCompany(in_fp, out_fp, companyList);
                break;
                // 4.2 채용 지원
            case 2:     
                ApplyUI applyUI;
                applyUI.applyCompany(in_fp, out_fp, companyList, currentMember);
                break;
            }
                // 4.3 지원 정보 조회
            case 3:     
                CheckApplicationUI _check_ApplicationUI;
                _check_ApplicationUI.Check_Applications(out_fp, currentMember);
                break;
            }
                // 4.4 지원 취소
             case 4:     
                CancelApplicationUI cancelApplicationUI;
                cancelApplicationUI.ClickCancelApplication(in_fp, out_fp, currentMember);
                break;
            }
            break;

        case 5:
            switch (menu_level_2) {
            
            case 1:
                //채용 or 지원 정보 통계
                if (currentMember.getType()) {
                    StatisticRecruitmentInfoUI statisticRecruitmentInfoUI;
                    statisticRecruitmentInfoUI.recruitmentStatistic(out_fp, currentMember);
                }
                else {
                    StatisticApplicationInfoUI statisticApplicationInfoUI;
                    statisticApplicationInfoUI.applicationStatistic(out_fp, currentMember);
                }
                break;
            }
            break;
            }
            break;

        case 6:
            switch (menu_level_2)
            {
                case 1:
                    is_program_exit = 1;

                    break;

            }
            break;

        }
    }
}
