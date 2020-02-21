#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#pragma warning(disable:4996)
// isalpha函数, 判断字符ch是否为英文字母，若为英文字母，真, 返回非0.若不是字母，返回0。
// 小写字母 返回1; 大写字母返回 2, 若不是字母, 返回 0
// isdigit函数，主要用于检查其参数是否为十进制数字字符。
// ch | 32 = > 大写转小写 小写不变
// ch ^ 32 = > 大写转小写同时小写转大写
// ch &~32 = > 小写转大写 大写不变
//int main1(){
//
//	char ch;
//	while (1){
//		ch = getchar();
//		if (isalpha(ch)){
//			putchar(ch ^ 32);
//		}
//		else if (isdigit(ch)){
//			// do nothing 不显示
//		}
//		else{
//			putchar(ch);// 不变
//		}
//	}
//	system("pause");
//	return 0;
//}
//





