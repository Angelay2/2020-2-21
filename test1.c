#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)

// 实现函数 ToLowerCase() ，该函数接收一个字符串参数 str ，并将该字符串中的大写字母转换成小写字母
// 小写变大写
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