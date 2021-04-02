use utf8;

# 変数展開
my $str = "Japan";
my $str2 = "I am in $str";
print $str2."\n";

# 結合
$str = "ABCD";
$str = $str."EFG";
print $str."\n";

# 置換 パターンマッチ演算子
$str = "ABCABCABC";
$str =~ s/B/X/g; # AXCAXCAXC（すべて置換）
print $str."\n"; 
$str =~ s/C/Z/; # AXZAXCAXC（最初のみ）
print $str."\n";

# 切り出し
$str = "ABCDEFG";
print substr($str, 1, 3)."\n"; # BCD
print substr($str, 1)."\n"; # BCDEFG
print substr($str, -2)."\n"; # FG

# 分割
$str = "A,B,C,D,E,F,G";
my @list = split(/,/, $str);
foreach my $s (@list) {
  print $s."\n";
}

# 検索
$str = "ABCDEFG";
my $pos = index($str, "CD");
print $pos."\n";

# 長さ
my $length = length "ABCDEFG";
print $length."\n";

# フォーマット
$str = sprintf("Temp is %03d", 7); # 007
print $str."\n";

# ヒアドキュメント
my $str = <<EOS;
あいうえお
かきくけこ
さしすせそ
EOS
print $str."\n";