#include <stdio.h>
#include <string.h> /* for strcmp */
#include "personal_t.c" /* for personal_t */

/**
 * 名前、電話帳、そのサイズを受け取り、一致したものがあればそのレコードへのポインタを返す。一致しなかったときは、0を返す
 */
personal_t* search(char* name, personal_t* pd_p, int dict_size) { // typo: "search"
    int i = 0;
    for(i=0; i < dict_size; i++){
        int name_matched = strcmp(pd_p->name, name) == 0;
        if(name_matched){ return(pd_p);/*pd_pを返す*/ }
        pd_p++;
    }
    return NULL;
}
