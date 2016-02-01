/**
 * 1. 文法を統一しましょう。e.g. キーワード間のスペースの数、関数名とブラケットとの間のスペース, etc.
 * 2. ループ変数(iのこと)は、使う直前に宣言し、使い回さないようにしましょう。(使い回すとバグを生むから)
 * 3. インデントをしっかりしましょう。ブロックに入ったら、(文字数は場合によりますが)2スペースきっちり字下げしましょう。
 */

#include <stdio.h>
#include "personal_t.c"
#include "search.h"
#define N 3

int main(int argc, char *argv[]) {
    /*** アドレス帳の構造体配列の定義、初期化とポインタ変数の定義 ***/
    personal_t pd[N] = {
        {"Ai", "Ube", 210},
        {"Ken", "Tsu", 211},
        {"Syu", "Aio", 212}
    };
    personal_t *pd_p;

    if(argc != 2){
        fprintf(stderr,"エラー:引数が一致しません\n");
        return(1); // エラー時は0以外でmain関数からreturnする慣習があります
    }

    pd_p = pd;  /* 構造体配列 argv[1] の先頭アドレスをポインタ変数に代入 */
    personal_t* result = search(argv[1], pd_p, N);

    if(result == NULL) {
        fprintf(stderr,"エラー:名前が合致しませんでした\n");
        return(2);
    }

    printf("住所: %s\n", result->address);      /* 住所を表示 */
    printf("電話番号: %.0f\n", result->phone);  /* 電話番号を表示 */

    return(0);
}

