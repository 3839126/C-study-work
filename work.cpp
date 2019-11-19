//输入字符串判断是否为回文-“对称的字符串”
#include <stdio.h>
int main() {
	int i, length, bool1 = 0, max;
	char a, ch[15];
	for (i = 0;; i++) {//循环输入
		scanf_s("%c", &a);
		if (a != '#') {
			ch[i] = a;
			length = i;
			max = i + 1;
		}
		else
			break;
	}
	printf("%d", max);
	// length--;
	for (i = 0;; i++, length--) {
		if (i>=((max/2)-1)||length<=((max/2)-1))
		{
			break;
		}
		else if (ch[i] != ch[length]) {
			bool1 = 0;
			break;
		}
		else {
			bool1 = 1;
		}
	}
	if (bool1 == 1)
		printf("是");
	else
		printf("不是");
}