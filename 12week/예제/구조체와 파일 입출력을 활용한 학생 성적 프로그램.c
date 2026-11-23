#include <stdio.h>

struct Students {
    char name[50];
    int score;
};

int main() {

    struct Students s;

    FILE *fp;
    FILE *pass;
    FILE *fail;

    int count;

    fp = fopen("students.txt", "w");

    if(fp == NULL) {
        printf("파일 열기 실패\n");

        return 1;
    }

    printf("학생 수 입력");
    scanf("%d", &count);

    for(int i = 0; i < count; i++) {

        printf("\n%d번째 학생 이름", i+1);
        scanf("%49s", s.name);

        printf("점수: ");
        scanf("%d", &s.score); // 앞에 & 붙음 !!

        fprintf(fp, "%s %d\n", s.name, s.score); // 이름과 점수를 확실하게 구분할 수 있음 !

    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    pass = fopen("pass.txt", "w");

    fail = fopen("fail.txt", "w");

    if(fp == NULL || pass == NULL || fail == NULL) {

        printf("파일 열기 실패 \n");

        if(fp != NULL) fclose(fp);
        if(pass != NULL) fclose(pass);
        if(fail != NULL) fclose(fail);

        return 1;

    } 

    while(fscanf(fp, "%49s %d", s.name, &s.score) == 2) {

        if(s.score >= 80) {

            fprintf(pass, "%s %d\n", s.name, s.score);

        }
        else {

            fprintf(fail, "%s %d\n", s.name, s.score);

        }
    }

    fclose(fp);
    fclose(pass);
    fclose(fail);
    printf("파일 저장 및 분류 완료");

    return 0;
}
