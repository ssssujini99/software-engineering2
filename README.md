## 소프트웨어공학 과제3

### 분담
- 1 - 혁진
    - 채용 정보 등록
    - 채용 정보 조회
- 2 - 채린
    - 채용 정보 통계
    - 채용 정보 검색
- 3 - 수진
    - 회원 가입
    - 회원 탈퇴
    - 로그인
    - 로그아웃
- 4 - 하록
    - 채용 지원
    - 지원 정보 조회
    - 지원 취소
    - 지원 정보 통계


### 깃 사용법

* 프로젝트를 하나 생성하고, IDE에서 원격 저장소를 연결합니다
    * ```git init``` // 원격 저장소 init
    * ```git remove -v https://github.com/ssssujini99/software-engineering2.git``` // 원격 저장소 연결
    * ```git pull origin master``` // 원격 master 브랜치로부터 최신 내용을 업데이트합니다
    * 그리고 받은 내용을 실행해서 테스트합니다
    (본인 로컬 환경에서 cpp 파일이 잘 작동하나 확인해주세요)   

* 이제 자신의 branch 로 checkout 해주세요
    * 브랜치 이름은 본인 깃헙 아이디로 합니다
    * ex) master <- ssssujini99
* ❌ 절대 master 브랜치에서 작업하지 말 것 ❌   

* git repository에 push하기
* 본인이 작업하던 브랜치에서 remote repo에 push를 합니다
    * ```git push origin [본인 브랜치]```
    * ex) ```git push orogin ssssujini99```
* push가 완료되었다면 repository에서 pull request를 진행합니다
    * PR 방향: master <- [개인 브랜치]
    * ex) master <- ssssujini99
    * 🔥 방향을 꼭 지켜주세요 🔥
