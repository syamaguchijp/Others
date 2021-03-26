<?php

///////////// 配列 /////////////

// 生成
$array = [10, 20, 30, 40];
print_r($array);

// 要素の変更
$array[0] = 100;
print_r($array);

// 要素の追加（末尾）
$array[] = 50;
array_push($array, 60);
print_r($array);

// 要素の削除
array_splice($array, 2, 1); // 任意のインデックスを削除(index3から数えて1つの要素を削除)
array_shift($array); // 先頭を削除
array_pop($array); // 末尾を削除
print_r($array);

// 要素数
echo count($array)."\n";

// 走査
$array = [10, 20, 30, 40];
for ($i = 0 ; $i < count($array); $i++){
    echo $array[$i]."\n";
}
foreach($array as $s){
    echo $s."\n";
}

// 存在確認
if (in_array(30, $array)) {
    echo "存在確認\n";
}

// ソート
$array = [100, 20, 80, 40];
sort($array); // 昇順
print_r($array);

// コピー
$array = [10, 20, 30, 40];
$array2 = $array; // 代入するだけでコピー
$array2[0] = 100;
print_r($array);
print_r($array2);

// 参照のコピー
$array = [10, 20, 30, 40];
$array2 = &$array; // 参照を渡す
$array2[0] = 100;
print_r($array);
print_r($array2);


///////////// 連想配列 /////////////

// 生成
$array = [
    'Japan'=>1,
    'America'=>2,
    'Germany'=>3
];
print_r($array);

// 要素の変更
$array['Germany'] = 100;

// 要素の追加（末尾）
$array['France'] = 50;
print_r($array);

// 要素の削除
unset($array['Germany']);
print_r($array);

// 要素数
echo count($array)."\n";

// 走査
foreach($array as $key => $value){
    echo "key:{$key} value:{$value}\n";
}

// 存在確認
// Keyの存在
if (array_key_exists("France", $array)) {
    echo "存在確認\n";
}
// Valueの存在
if (in_array(50, $array)) {
    echo "存在確認\n";
}

?>