## include

`#include <bits/stdc++.h>`は C++の機能を「全て」読み込むための命令です。
例えばすでに紹介した `cout` や `endl` は`#include <bits/stdc++.h>`によって読み込まれた機能です。
`cout` と `endl` だけであれば、`#include <iostream>`と書くことによって読み込めます。

## キーポイント

- 文字列を扱うには **string 型**を使う
- 文字を扱うには **char 型**を使う
- `文字列変数.size()`で文字列の長さを取得できる
- `文字列変数.at(i)`で i 文字目にアクセスできる -> 取得されるデータは **char 型**です。

## 文字（char 型）

string 型は「文字列型」ですが、「文字型」というのもあります。それは char 型です。
char 型を表すためには`' '`で囲います。

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  char c = 'a';
  cout << c << endl; // a
}
```

## 全角文字の扱い

string 型や char 型は全角文字を正しく扱えません。
C++で全角文字を扱う場合、string 型ではない別の文字列型（u32string 等）が用いられます。

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "こんにちは";
  cout << s.at(0) << endl;

  char c = 'あ';
  cout << c << endl;
}

// output -> � �
```

## 文字列のメンバ関数や演算子を利用するとき

`.size()`や後述する`==`演算子等を利用する場合、一度変数に格納するか、`"文字列"s.size()`のように`" "`の末尾に `s` をつける必要があります。

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  string str = "Hello";
  cout << str.size() << endl; // 5
  cout << "Hello"s.size() << endl; // 5（sを末尾につける）
  cout << "Hello".size() << endl; // できない
}
```

## string と char の比較

string 型と char 型は==で比較できません。

## 文字列と文字の連結

string 型と char 型を+すると、文字列同士と同様に連結できます。

## 行単位での入力

`cin` を使うと空白や改行区切りの入力を簡単に扱えますが、空白で区切らずに行単位で入力を受け取りたいこともあります。
その場合は `getline` を使います。

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  getline(cin, s); // 変数sで入力を一行受け取る
  getline(cin, t); // 変数tで入力を一行受け取る

  cout << "一行目 " << s << endl;
  cout << "二行目 " << t << endl;
}
```

input

```bash
I have a pen.
I have an apple.
```

output

```bash
一行目 I have a pen.
二行目 I have an apple.
```
