//2025_10_10__24516029
/**コメント**/
#include<stdio.h>

int main(void)                              //メイン関数main、引数void
{
    int one = 2;                            //整数型int。関数"one"になんと"2"を代入する。
    printf("Good morning world");           //printfは文字を出力する関数。ここではGood morning worldを表示する。
    printf("\none is %d",one);              //"\n"で改行。"%d"は整数型のフォーマット指定子。oneで関数oneの値をもってくる。
    return 0;                               //戻り値を0として返す。終了。
}