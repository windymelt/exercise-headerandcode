// 二重インクルードの防止
#ifndef personal_t_h
#define personal_t_h

/* アドレス帳のデータ型の宣言 */
/* 個人一人分のレコードを示す構造体 */
typedef struct {
    /* 名前 */
    char name[10];
    /* 住所 */
    char address[20];
    /* 電話番号 */
    double phone;
} personal_t;

#endif
