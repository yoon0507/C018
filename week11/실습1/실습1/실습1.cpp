#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[100];
	char* p;
	int count = 0;
	printf("영문 문장을 입력하시오 : ");
	if (fgets(str, sizeof(str), stdin) != NULL) {
		int i = 0;
		while (str[i] != '\0') {
			if (str[i] == '\n') {
				str[i] = '\0';
				break;
			}
			i++;
		}
	}
	p = str;

	while (*p != '\0') {
		if (*p >= 'a' && *p <= 'z') {
			*p = *p - 32;
		}
		if (*p != ' ') {
			count++;
		}
		p++;
	}
	printf("대문자:%s\n", str);
	printf("글자 수 (공백 제외):%d\n", count);

	return 0;
}