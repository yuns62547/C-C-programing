#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Back";
    char str2[20] = "Space";
    char str3[20];

    char ch = 'p';
    int n = 3;

    // str1의 길이를 반환한. (널 문자를 제외한 문자열의 개수.)
    int len = strlen(str1);
    printf("str의 길이 : %d\n", len);

    // str1을 str3에 복사한다.
    strcpy(str3, str1);
    printf("str1을 str3에 복사: %s\n", str3);

    // str2에서 최대 n개의 문자를 str3에 복사한다.
    strncpy(str3, str2, n);
    str3[n] = '\0';
    printf("str2의 첫 %d 문자를 ste3에 복사 : %s\n", n, str3);
    
    //str1과 str2의 첫 문자 비교한다.
    printf("str1과 str2 비교 : %d\n", strcmp(str1, str2));

    // str1과 str2를 최대 n개 문자까지만 비교한다.
    printf("str1과 str2의 첫 %d 문자 비교 : %d\n", n, strncmp(str1, str2, n));

    // str2를 str1의 끝에 연결한다. str1의 널 문자를 덮어쓴다.
    strcat(str1, str2);
    printf("str2를 str1에 연결 : %s\n", str1);

    // str1의 최대 n개 문자를 str3 끝에 연결한다.
    strncat(str3, str1, n);
    printf("str1의 첫 %d 문자를 str3에 연결 : %s\n", str3);

    // str1에서 p 문자의 첫 번째 출현을 찾는다.
    char*ptr_ch = strchr(str1, ch);
    printf("str1의 첫 '%c' 의 첫 번째 출현 : %s\n", str3);

    // str1("Backspace")에서 str2("Space")의 첫 번째 출현을 찾기 위한 strstr
    char*ptr_str = strstr(str1, str2);
    printf("str1에서 str2의 첫 번째 출현 : %s\n", ptr_str ? ptr_str : "찾을 수 없음");

    return 0;

    
}