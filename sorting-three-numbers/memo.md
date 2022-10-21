## vector

### インクルード

```cpp
#include <vector>
```

### `vector`のメリット

- `var.size()`で配列要素数を参照できる
- `var.resize(n)`で要素数を変更できる
- `var.push_back(d)`で末尾に要素を追加できる
- `＝`でコピーできる
- `algorithm`でソートできる
- `erase`で指定要素のみ削除できる

### 昇順ソート

```cpp
sort(v.begin(), v.end());
```

### 降順ソート

```cpp
sort(v.begin(), v.end(), greater<int>());
```

### 指定要素の削除

```cpp
v.erase(v.begin());
```

## sort

### インクルード

```cpp
#include <algorithm>
```

### 使い方

```cpp
int main() {
    std::vector<int> v = { 3, 5, 2, 4, 7 };

    std::sort(v.begin(), v.end());

    for (const auto &i: v) {
        std::cout << i << ' ';
    }

    return 0;
}

// output -> 2 3 4 5 7
```

## 参考記事

- [C++の vector まとめ](https://qiita.com/ysuzuki19/items/df872d91c9c89cc31aee)
- [「ソートも、サーチも、あるんだよ」～標準 C++ライブラリにみるアルゴリズムの面白さ](https://codezine.jp/article/detail/6020)
- [配列をソートする | Programming Place Plus 　 C++編　逆引き](https://programming-place.net/ppp/contents/cpp/rev_res/array002.html)
