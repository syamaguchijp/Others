
# インスタンス
my $user = User->new(name => "Honda", age => 21);
print $user->getName."\n";
print $user->getAge."\n";
$user->setName("Yamaha");
$user->setAge(100);
print $user->getName."\n";
print $user->getAge."\n";
print $user->addAge(10, 20)."\n";

# クラス変数へのアクセス
$User::count = 777;
print $User::count."\n";



# ///////////// クラスの定義 /////////////

# 名前空間の宣言（= クラス）
package User;

# クラス変数
$count = 0;

# コンストラクタ
sub new {

  # 第一引数（パッケージ名）はクラス名
  my $class = shift;

  # インスタンスのメンバ
  # デフォルト値
  my $self = {
    name => "",
    age => 0,
    @_,
  };
  
  # bless関数を使って、パッケージにオブジェクト$selfを連携させる。
  bless $self, $class;

  return $self;
}

# デストラクタ
sub DESTROY {
    my($self) = @_;
    print "DESTROY\n";
}

# ゲッター
sub getName { shift->{name} }
sub getAge { shift->{age} }

# セッター
sub setName {
    my($self, $name) = @_;
    $self->{name} = $name;
}
sub setAge {
    my($self, $age) = @_;
    $self->{age} = $age;
}

# インスタンスメソッド
sub addAge {
    # 引数の受け取り
    my ($num1, $num2, $num3) = @_;
    print $num1."\n";
    print $num2."\n";
    print $num3."\n";
    my $self = shift;
    return $self->{age} + $num2 + $num3;
}

