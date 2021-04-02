
use DateTime;

# DateTime オブジェクト

my $dt = DateTime->now; # UTC
print $dt."\n";

$dt = DateTime->now(time_zone => 'local'); # ローカル
print $dt."\n";

$dt = DateTime->now(time_zone => 'Asia/Tokyo'); # JST 
print $dt."\n";

$dt = DateTime->new( # 日時を指定
  year => 2021,
  month => 01,
  day => 02,
  hour => 03,
  minute => 04,
  second => 05,
);
print $dt."\n";

$dt = DateTime->from_epoch(epoch => $dt->epoch); # エポック秒から
print $dt."\n";

# アクセス
my $year = $dt->year;
print $year."\n";

# DateTimeから文字列へ変換
my $str = $dt->strftime('%Y/%m/%d %H:%M:%S');
print $str."\n";

# 日時の加算減算
$dt = DateTime->now;
my $dt1 = $dt->add(days => 4);
print $dt."\n";
my $dt2 = $dt->subtract(days => 1);
print $dt."\n";
my $duration = $dt1->delta_days($dt2);
