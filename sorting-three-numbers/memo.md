## vector

#### インクルード

```cpp
#include <vector>
```

#### `vector`のメリット

- `var.size()`で配列要素数を参照できる
- `var.at(i)`で i 番目の要素にアクセスできる
- `var.resize(n)`で要素数を変更できる
- `var.push_back(d)`で末尾に要素を追加できる
- `var.pop_back()`で末尾の要素を削除できる
- `＝`でコピーできる
- `algorithm`でソートできる
- `erase`で指定要素のみ削除できる

#### 初期値の指定

`vector<型> 配列名(要素数, 初期値);`で配列の各要素の初期値を指定できます。
例えば `vector<int> vec(3, 5);`と書いた場合、配列変数 `vec は{5, 5, 5}`で初期化されます。

#### 昇順ソート

```cpp
sort(v.begin(), v.end());
```

#### 降順ソート

```cpp
sort(v.begin(), v.end(), greater<int>());
```

#### 指定要素の削除

```cpp
v.erase(v.begin());
```

#### vector 以外の配列

C++には vector 以外にも配列の書き方があります。次の 3 つの配列の書き方はほとんど同じ意味です。
基本的には vector による配列を使った方が良いです。

```cpp
vector<int> data(3); // vectorによる配列
int data[3]; // Cの配列
array<int, 3> data; // arrayによる配列
```

## sort

#### インクルード

```cpp
#include <algorithm>
```

#### 使い方

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
