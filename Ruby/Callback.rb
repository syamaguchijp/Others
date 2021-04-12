# コールバック関数（ブロックオブジェクト）
block = Proc.new { |val| print(val + " callback!") }

# コールバック関数を実行する関数
def executeCallback(callback)
    callback.call("Hoge")
end

# 実行
executeCallback(block)
