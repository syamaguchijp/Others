# ////////// Timeクラス //////////
# （通常は、DateTimeではなくTimeを利用すればOK）

require "time"

# 生成
tm = Time.new
p tm
tm = Time.now
p tm
tm = Time.local(2021, 1, 2, 3, 4, 5)
p tm
tm = Time.parse('2021-04-01T02:03:04')
p tm
tm = tm + 10 # 10秒後
p tm

# アクセス
tm = Time.new
p tm.year
p tm.month
p tm.day
p tm.wday
p tm.yday
p tm.zone
p tm.hour
p tm.min
p tm.sec

# 文字列 <-> Time
tmStr = tm.strftime('%Y/%m/%d %H:%M:%S') 
p tmStr
tm = Time.parse('2021-04-01T02:03:04')
p tm

# ISO8601
tmStr = Time.now.iso8601
p tmStr
tm = Time.parse(tmStr)
p tm

# 比較
require "active_support/time"
time = Time.now
puts time.yesterday < time # true



# ////////// DateTimeクラス //////////

require "date"

# 生成
dt = DateTime.new
p dt
dt = DateTime.new(2021, 4, 1, 2, 3, 4)
p dt
dt = DateTime.parse('2021-04-01T02:03:04')
p dt

# アクセス
p dt.year
p dt.month
p dt.day
p dt.wday
p dt.yday
p dt.zone
p dt.hour
p dt.min
p dt.sec

# 文字列 <-> DateTime
dtStr = dt.strftime('%Y/%m/%d %H:%M:%S') 
p dtStr
dt = DateTime.parse(dtStr)
p dt
