#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int convertBinaryToDecimal(long long b);
int main() 
{
	char input;
	int number;
	for (;;)
	{
		printf ("選擇一個模式：(十進位:d,二進位:b,十六進位為:h):");
		scanf ("%c",&input);
		if (input==100)
		{
			printf ("請輸入一個十進位數："); 
			scanf ("%d",&number); 
			char s[10];
			itoa(number, s, 2);
			printf ("你輸入的十進數為 %d，轉換成二進制為 %s。\n",number,s);
			printf ("你輸入的十進數為 %d，轉換成八進制為 %o。\n",number,number); 
			printf ("你輸入的十進數為 %d，轉換成十六進制為 %x。\n",number,number);
			break;
		}
		else if (input==98)
		{
			long long b;
			printf ("請輸入一個二進位數：");
			scanf ("%lld",&b); 
			printf ("你輸入的二進數為 %lld，轉換成十進制為 %d。\n",b,convertBinaryToDecimal(b)); 
			printf ("你輸入的二進數為 %lld，轉換成八進制為 %o。\n",b,convertBinaryToDecimal(b));
			printf ("你輸入的二進數為 %lld，轉換成十六進制為 %x。\n",b,convertBinaryToDecimal(b)); 
			break;
		}
		else if (input==104)
		{
			printf ("請輸入一個十六進位數：");
			scanf ("%x",&number);
			char s[10]; 
			itoa(number, s, 2);
			printf ("你輸入的十六進數為 %x，轉換成二進制為 %s。\n",number,s);
			printf ("你輸入的十六進數為 %x，轉換成八進制為 %o。\n",number,number);
			printf ("你輸入的十六進數為 %x，轉換成十進制為 %d。\n",number,number);
			break;
		}
		else
		printf ("輸入錯誤，請重新輸入。\n");
	}
	
	system ("pause");
	return 0;
}
int convertBinaryToDecimal(long long b)
{
    int decimalNumber = 0, i = 0, remainder;
    while (b!=0)
    {
        remainder = b%10;
        b /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
