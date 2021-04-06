# 出力
str = "ABCDE"
p str
puts str
print str + "\n"

# 変数展開
print("文字列は#{str}\n")

# 連結
puts str + "EFG"

# 繰り返し
puts str * 3

# 文字列長
str = "あいうえお"
puts str.length
puts str.size

# 文字列の中の特定の文字数
str = "あいうえおあいう"
puts str.count("い")

# 比較
str = "あいうえお"
str2 = "あいうえお"
if str == str2 then
    puts "same"
end
if "ABC".casecmp("abC") then
    puts "same caseInsensitive"
end

# 分割
str = "Honda, Yamaha, Kawasaki"
ary = str.split(",")
p ary

# スライス
str = "ABCDEFG"
puts str.slice(1, 3) # 2番目から3文字分

# 置換
str = "ABCDE"
puts str.tr("ABC", "ZZZ")

# 大文字小文字
puts "ABC".upcase
puts "abc".downcase
puts "abc".capitalize

# trim
str = "  ab cd  "
puts str.strip
puts str.lstrip # 先頭のみ
puts str.rstrip # 末尾のみ

# 改行を取り除く
str = " ab cd \n"
puts str.chomp

# 文字列、数値の変換
puts "1234".to_i
puts 1234.to_s
