<?php

// 連結
$str = "Honda";
$str2 = "Yamaha";
echo $str.$str2."\n";

// 変数展開
echo "{$str}-{$str2}\n";

// 一致判定
$str = "Honda";
$str2 = "Honda";
if (strcmp($str, $str2) == 0) echo "Equal\n";
$str2 = "honda";
if (strcasecmp($str, $str2) == 0) echo "CaseInsensitive Equal\n";

// 長さ
echo strlen($str)."\n";

// 切り出し
$str = "ABCDEFG";
echo substr($str, 2)."\n"; // CDEFG
echo substr($str, 3, 2)."\n"; // DE 4番目から2文字

// 検索
if (strpos($str, "B") !== false) {
    echo "find B\n";
}
if (stripos($str, "b") !== false) {
    echo "find caseInsensitive B\n";
}

// 分割
$str = "A,B,C,D,E,F,G";
$ary = explode(",", $str);
foreach($ary as $s){
    echo $s."\n";
}

// 大文字小文字
echo strtoupper("abcd")."\n";
echo strtolower("ABCD")."\n";

// 置換
$str = "abcabcabc";
echo str_replace('a', 'A', $str)."\n"; // "AbcAbcAbc"

// 前後の空白を削除
$str = " ab cd ";
echo trim($str)."\n";
echo ltrim($str)."\n"; // 先頭のみ除去
echo rtrim($str)."\n"; // 末尾のみ除去

// 文字列と数値
$num = intval("123");
$num = (int)"123";
$str = strval($num);
$str = (string)$num;

?>