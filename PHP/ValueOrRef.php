<?php

//////////// 数値 ////////////

// 数値　値渡し
function test1($arg) {
    $arg *= 10;
    var_dump($arg);
}
$val = 10;
test1($val);
var_dump($val); // 元の変数は影響を受けない

// 数値　参照渡し
function test11(&$arg) {
    $arg *= 10;
    var_dump($arg);
}
$val = 10;
test11($val);
var_dump($val); // 元の変数も影響を受ける


//////////// 文字列 ////////////

// 文字列　値渡し
function test2($arg) {
    $arg .= "ZZZ";
    var_dump($arg);
}
$val = "ABCD";
test2($val);
var_dump($val); // 元の変数は影響を受けない

// 文字列　参照渡し
function test12(&$arg) {
    $arg .= "ZZZ";
    var_dump($arg);
}
$val = "ABCD";
test12($val);
var_dump($val); // 元の変数も影響を受ける


//////////// 配列 ////////////

// 配列　値渡し
function test3($arg) {
    array_push($arg, 50);
    var_dump($arg);
}
$val = [10, 20, 30, 40];
test3($val);
var_dump($val); // 元の変数は影響を受けない

// 配列　参照渡し
function test13(&$arg) {
    array_push($arg, 50);
    var_dump($arg);
}
$val = [10, 20, 30, 40];
test13($val);
var_dump($val); // 元の変数も影響を受ける


//////////// クラス ////////////

class User {
    public $name;
}

// クラス　値渡し（クラスはもともと参照型）
function test4($arg) {
    $arg->name = "hoge";
    var_dump($arg);
}
$val = new User("Honda");
test4($val);
var_dump($val); // 元の変数も影響を受ける!

// クラス　参照渡し
function test14(&$arg) {
    $arg->name = "hoge";
    var_dump($arg);
}
$val = new User("Honda");
test14($val);
var_dump($val); // 元の変数も影響を受ける

?>