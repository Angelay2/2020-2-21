#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)

// ʵ�ֺ��� ToLowerCase() ���ú�������һ���ַ������� str ���������ַ����еĴ�д��ĸת����Сд��ĸ
// Сд���д
int ToLowerCase(char* str){
	int len = strlen(str);
	for (int i = 0; i < len; ++i){
		if (str[i] <= 'Z' && str[i] >= 'A'){
			str[i] = str[i] + 32;
		}
	}
	return str;
}
int main2(){
	char str[256] = { 0 };
	scanf("%s", &str);

	printf("%s", ToLowerCase(str));
	system("pause");
	return 0;
}