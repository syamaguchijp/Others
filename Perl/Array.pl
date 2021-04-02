use Data::Dumper;

# ////////// 配列 //////////

# 宣言
my @ary = (1, 2, 3); # スカラ変数 @

# 要素へのアクセス
print $ary[0]."\n";

# 要素の変更
$ary[0] = 10;

# 要素の追加
$ary[3] = 99;

# 長さ
my $cnt = @ary;
print $cnt."\n";

# 末尾に要素を追加
push @ary, 777;

# 末尾から要素を除去する
pop @ary;

# 走査
for (my $i = 0; $i < @ary; $i++){
    print $ary[$i]."\n";
}
foreach my $s (@ary) {
    print $s."\n";
}
print Dumper(\@ary)."\n";

# ソート（昇順）
@ary = (50, 100, 25, 1, 10);
@ary = sort {$a <=> $b} @ary;
foreach my $s (@ary) {
    print $s."\n";
}

# ソート（降順）
@ary = (50, 100, 25, 1, 10);
@ary = sort {$b <=> $a} @ary;
foreach my $s (@ary) {
    print $s."\n";
}

# 配列の参照
my $ref = \@array;
print $ref."\n";


# ////////// ハッシュ //////////

# 宣言
my %hash = ('tokyo' => 10, 'yokohama' => 20);

# 要素へのアクセス
print $hash{'tokyo'}."\n";

# 要素の変更
$hash{'tokyo'} = 1;
print $hash{'tokyo'}."\n";

# すべてのキーを取得
@keys = keys %hash;
print "@keys\n";

# すべての値を取得
@vals = values %hash;
print "@vals\n";

# すべてのハッシュを走査
while (my ($key, $val) = each %hash) {
    print "$key : $val\n";
}


