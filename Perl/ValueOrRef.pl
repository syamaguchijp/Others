use Data::Dumper;

# //////////// 数値 ////////////

# 値渡し

my $val1 = 10;
test1($val1);
print $val1."\n"; # 値は変わっていない

sub test1 {
    my $arg1 = $_[0];
    $arg1 = 100;
}

# 参照渡し

my $val11 = 10;
test11(\$val11); # \を付けて参照渡しにする
print $val11."\n"; # 値が変わっている

sub test11 {
    my $arg1 = $_[0];
    $$arg1 = 100;
}

# //////////// 文字列 ////////////

# 値渡し

my $val2 = "ABCD";
test2($val2);
print $val2."\n"; # 値は変わっていない

sub test2 {
    my $arg1 = $_[0];
    $arg1 = "EFG";
}

# 参照渡し

my $val12 = "ABCD";
test12(\$val12); # \を付けて参照渡しにする
print $val12."\n"; # 値が変わっている

sub test12 {
    my $arg1 = $_[0];
    $$arg1 = "EFG";
}

# //////////// 配列 ////////////

# 値渡し

my @array1 = (0, 1, 2);
test3(@array1);
print Dumper(\@array1)."\n"; # 値は変わっていない

sub test3 {
    my $arg1 = $_[0];
    $arg1[1] = 9999;
}

# 参照渡し

my @array2 = (0, 1, 2);
test13(\@array2); # \を付けて参照渡しにする
print Dumper(\@array2)."\n"; # 値が変わっている

sub test13 {
    my $arg1 = $_[0];
    $$arg1[1] = 9999;
}

