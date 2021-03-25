# coding: utf-8

import datetime
import calendar
import time

# 日付

today = datetime.date.today()
print(today)
print(datetime.date(2021, 3, 4))

# 文字列へ変換
str1 = today.strftime('%Y-%m-%d')
print(str1)

# 文字列からオブジェクトへ
str1 = '2021-01-07'
date1 = datetime.datetime.strptime(str1, '%Y-%m-%d')
print(date1)


# 日時

current = datetime.datetime.now()
print(current)
print(datetime.datetime(year=2021, month=1, day=30, hour=3, minute=0, second=1))
print("year=%s month=%s day=%s week=%s hour=%s, minute=%s, second=%s" % 
    (current.year, current.month, current.day, current.weekday(),
    current.hour, current.minute, current.second))

# 文字列へ変換
str2 = current.strftime('%Y-%m-%d %H:%M:%S')
print(str2)

# 文字列からオブジェクトへ
str2 = '2021-03-01 07:05:01'
date2 = datetime.datetime.strptime(str2, '%Y-%m-%d %H:%M:%S')
print(date2)

# 加算
date2 = current + datetime.timedelta(hours=1) # 1時間プラス
print(date2)

# 比較
a = datetime.datetime(2021, 3, 10)
b = datetime.datetime(2021, 3, 11)
if b > a:
    print("bの方が新しいです")

