
# /////////// 配列 ///////////

# 生成
ary = []
p ary
ary = [1, 2, 3, 4, 5]
p ary
ary = (1..5).to_a
p ary

# アクセス
p ary[2]

# 要素の変更
ary[0] = 10
p ary

# 追加
ary[5] = 6
p ary
ary.push(7) # 末尾に追加
p ary
ary.unshift(1) # 先頭に追加
p ary

# 削除
ary.delete(10) # 要素の値を指定して削除
p ary
ary[0, 2] = [] # インデックス0から2個の要素を削除
p ary
ary.shift # 先頭を削除
p ary
ary. pop # 末尾を削除
p ary

# 挿入
ary.insert(2, 88) # インデックス2に挿入
p ary

# 結合
ary.concat([101, 102, 103])
p ary

# 反転
p ary.reverse

# 重複の削除
ary = [7, 7, 9, 8, 9, 1, 5, 3, 5, 1, 2, 9]
ary = ary.uniq
p ary

# ソート
ary = ary.sort
p ary

# 要素数
ary = [1, 2, 3, 4, 5]
p ary.length

# 走査
for var in ary do
    printf("for %d\n", var)
end
ary.each{|var|
    printf("each %d\n", var)
}

# /////////// ハッシュ ///////////





