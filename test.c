#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#pragma warning(disable:4996)
// isalpha����, �ж��ַ�ch�Ƿ�ΪӢ����ĸ����ΪӢ����ĸ����, ���ط�0.��������ĸ������0��
// Сд��ĸ ����1; ��д��ĸ���� 2, ��������ĸ, ���� 0
// isdigit��������Ҫ���ڼ��������Ƿ�Ϊʮ���������ַ���
// ch | 32 = > ��дתСд Сд����
// ch ^ 32 = > ��дתСдͬʱСдת��д
// ch &~32 = > Сдת��д ��д����
//int main1(){
//
//	char ch;
//	while (1){
//		ch = getchar();
//		if (isalpha(ch)){
//			putchar(ch ^ 32);
//		}
//		else if (isdigit(ch)){
//			// do nothing ����ʾ
//		}
//		else{
//			putchar(ch);// ����
//		}
//	}
//	system("pause");
//	return 0;
//}
//





