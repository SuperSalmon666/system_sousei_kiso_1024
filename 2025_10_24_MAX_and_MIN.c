//24516029_S_Y
//2025/10/24
//符号なし最大値、最大値、最小値、精度の出力
//char,short,int,long,long long,float,double,long double

#include <stdio.h>
#include <float.h>
#include <limits.h>
#include <string.h>

int main(void){

	printf("unsigned char maximum: %d\n", UCHAR_MAX);
	printf("char maximum:          %d\n", CHAR_MAX);
	printf("char minimum:          %d\n\n", CHAR_MIN);
	printf("unsigned short maximum: %lu\n", USHRT_MAX);
	printf("short maximum:          %d\n", SHRT_MAX);
	printf("short minimum:          %d\n\n", SHRT_MIN);
	printf("unsigned int maximum: %lu\n", UINT_MAX);
	printf("int maximum:          %d\n", INT_MAX);
	printf("int minimum:          %d\n\n", INT_MIN);
	printf("unsigned long maximum: %lu\n", ULONG_MAX);
	printf("long maximum:          %ld\n", LONG_MAX);
	printf("long minimum:          %ld\n\n", LONG_MIN);
	printf("unsigned long long maximum: %llu\n", ULLONG_MAX);
	printf("long long maximum:          %lld\n", LLONG_MAX);
	printf("long long minimum:          %lld\n\n\n", LLONG_MIN);
	
	printf("float maximum:   %g\n", FLT_MAX);
	printf("float minimum:   %g\n", FLT_MIN);
	printf("float precision: %d\n\n", FLT_DIG);
	printf("double maximum:   %lg\n", DBL_MAX);
	printf("double minimum:   %lg\n", DBL_MIN);
	printf("double precision: %d\n\n", DBL_DIG);
	printf("long double maximum:   %Le\n", LDBL_MAX);
	printf("long double minimum:   %Le\n", LDBL_MIN);
	printf("long double precision: %d\n", LDBL_DIG);
	return 0;
}
