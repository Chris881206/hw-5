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
		printf ("��ܤ@�ӼҦ��G(�Q�i��:d,�G�i��:b,�Q���i�쬰:h):");
		scanf ("%c",&input);
		if (input==100)
		{
			printf ("�п�J�@�ӤQ�i��ơG"); 
			scanf ("%d",&number); 
			char s[10];
			itoa(number, s, 2);
			printf ("�A��J���Q�i�Ƭ� %d�A�ഫ���G�i� %s�C\n",number,s);
			printf ("�A��J���Q�i�Ƭ� %d�A�ഫ���K�i� %o�C\n",number,number); 
			printf ("�A��J���Q�i�Ƭ� %d�A�ഫ���Q���i� %x�C\n",number,number);
			break;
		}
		else if (input==98)
		{
			long long b;
			printf ("�п�J�@�ӤG�i��ơG");
			scanf ("%lld",&b); 
			printf ("�A��J���G�i�Ƭ� %lld�A�ഫ���Q�i� %d�C\n",b,convertBinaryToDecimal(b)); 
			printf ("�A��J���G�i�Ƭ� %lld�A�ഫ���K�i� %o�C\n",b,convertBinaryToDecimal(b));
			printf ("�A��J���G�i�Ƭ� %lld�A�ഫ���Q���i� %x�C\n",b,convertBinaryToDecimal(b)); 
			break;
		}
		else if (input==104)
		{
			printf ("�п�J�@�ӤQ���i��ơG");
			scanf ("%x",&number);
			char s[10]; 
			itoa(number, s, 2);
			printf ("�A��J���Q���i�Ƭ� %x�A�ഫ���G�i� %s�C\n",number,s);
			printf ("�A��J���Q���i�Ƭ� %x�A�ഫ���K�i� %o�C\n",number,number);
			printf ("�A��J���Q���i�Ƭ� %x�A�ഫ���Q�i� %d�C\n",number,number);
			break;
		}
		else
		printf ("��J���~�A�Э��s��J�C\n");
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
