# はじめてのC
学習時に気になった点をまとめる

* 環境
    * gcc version 4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2336.11.00)

## 第1章
### 関数プロトタイプ宣言
* 宣言しないと int 型の関数として認識
    * 他の型の場合はCompile Error
* 引数がない場合でもvoidと記述する
    * 本環境では記述しなくてもErrorは発生しない

## 第2章
### 文字コード
* 例はshift-jisなので、utf-8環境ではバイト数を考慮

## 第3章
### sizeof演算子
* 自分の環境ではprintfのフォーマットは%zdとする必要があった
    * size_t
    * man sprintf






