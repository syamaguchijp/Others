// クロージャの基本形
/*
var メソッド名 = function(引数) {
   // 処理
}
*/

var hoge = " hoge"

// コールバック関数
var myClosure = function(param) {
    // クロージャでは、クロージャが定義された外側のスコープを使用することができる
    console.log(param + hoge)
}

// hogeに文字列が代入された後にコールバック関数を実行する関数
function executeCallback(callback) {
    callback("コールバックしました")
}

// 実行
executeCallback(myClosure)

// なお、以下のように、無名関数をコールバック関数として渡すこともできる
executeCallback(function(param) {
    console.log(param + hoge + hoge)
});
  