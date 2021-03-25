# coding: utf-8

# コールバック関数
def myCallback(val):
    print(val + " callback!")

# コールバック関数を実行する関数
def executeCallback(callback):
    callback("hoge")

# 実行
executeCallback(myCallback) # 関数名に()をつけないことで関数ポインタとなる

