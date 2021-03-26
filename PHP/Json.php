<?php

// 文字列から連想配列へ
$str1 =  "[{\"name\": \"Honda\", \"age\": 21, \"address\": \"Tokyo\"}, {\"name\": \"Yamaha\", \"age\": 35, \"address\": \"Osaka\"}]";
$json1 = json_decode($str1, true); // true = 連想配列形式で
var_dump($json1);

// アクセス
echo $json1[0]["name"].PHP_EOL; // Honda

// 連想配列から文字列へ
$str1 = json_encode($json1, JSON_UNESCAPED_UNICODE);
var_dump($str1);

?>