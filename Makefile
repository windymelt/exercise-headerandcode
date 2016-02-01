#
# Makefile (sample) #
#

#### 実行方法は % make または % make all #### #はコメントアウト

#
# マクロの定義 #

#### *の部分のファイル名を書き換えて使用すること

# 実行ファイル*
TARGET = execute
#### =はマクロの定義
# ヘッダファイル*
HEADS = 
# ソースファイル*
SRCS = main.c search.c personal_t.c
# オブジェクトファイル
OBJS = $(SRCS:.c=.o)
#### $()はマクロの展開
#### マクロSRCSの文字列.cを文字列.oに置換

 #リンカ

LD = gcc
# リンクオプション LDFLAGS =
# リンクライブラリ LDLIBS =

# コンパイラ
CC = gcc
# コンパイルオプション CFLAGS =

RM = rm -f

#
# 生成規則の定義 #

all: $(TARGET)
#### :は依存関係
#### allは$(TARGET)に依存

$(TARGET): $(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) -o $@ $(LDLIBS)

#### 生成コマンドは必ずTabでインデント #### $@はターゲットファイル名に展開

$(OBJS): $(HEADS) Makefile

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

#### $<はひとつのソースファイル名に展開

clean:
	$(RM) $(TARGET) $(OBJS)
