<?php

date_default_timezone_set('Asia/Tokyo');

// 文字列で取得
echo date("Y/m/d H:i:s").PHP_EOL; // 現在日時「YYYY/mm/dd HH:mm:ss」
echo date("Y/m/d H:i:s", strtotime('2021-01-01 01:02:03')).PHP_EOL; // 指定日時
echo date('Y').PHP_EOL; // 年
echo date('m').PHP_EOL; // 月
echo date('d').PHP_EOL; // 日
echo date('H').PHP_EOL; // 時
echo date('i').PHP_EOL; // 分
echo date('s').PHP_EOL; // 秒

// UNIXタイムスタンプで取得
echo time().PHP_EOL; // 現在
echo strtotime('2021/01/03 08:03:30').PHP_EOL; // 指定日時
echo strtotime("+7 day").PHP_EOL; // 相対日時を指定


// DateTimeオブジェクト

$dt = new DateTime(); // 現在日時
echo $dt->format('Y/m/d H:i:s').PHP_EOL;
$dt = new DateTime('+1 months'); // 指定日時

// 文字列に変換
$str = $dt->format('Y-m-d H:i:s');
echo $str.PHP_EOL; 

// ISO8601形式の文字列へ
$dt = new DateTime("2021-01-02 03:04:05", new DateTimeZone('Asia/Tokyo'));
$str = $dt->format('Y-m-d\TH:i:s').'+09:00';
var_dump($str);  

// 差分
$dt1 = new DateTime('2021-01-01 01:02:10', new DateTimeZone('Asia/Tokyo'));
$dt2 = new DateTime('2021-01-01 01:02:03', new DateTimeZone('Asia/Tokyo'));
$diff = $dt1->diff($dt2);
$diffInSeconds = $dt1->getTimestamp() - $dt2->getTimestamp();
echo $diff->d.PHP_EOL; // 日数の差（d means day）
echo $diffInSeconds.PHP_EOL; // 秒の差

// 比較
if ($dt1 > $dt2) {
    echo "dt1のほうが新しい".PHP_EOL;
}


?>