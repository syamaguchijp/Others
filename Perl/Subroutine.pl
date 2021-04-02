
$result = &makeAverage(99, 33);
print $result."\n";

sub makeAverage {
    # 引数の受け取り
    my ($num1, $num2) = @_;
    
    my $ave = ($num1 + $num2) / 2;

    # 引数はそれぞれ、$_[0] $_[1]とも表現できる
    #my $ave = ($_[0] + $_[1]) / 2;

    return $ave;
}
