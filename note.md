# spark's note

## 目次

## std::set

<https://cpprefjp.github.io/reference/set/set.html>

- データの追加・削除・検索がΟ(logN)でできる

## 最大公約数

- ユークリッドの互除法により求められる

```cpp
long long GCD(long long a, long long b) {
  if(b == 0) return a;
  else return GCD(b, a % b);
}

```

## 累積和

<https://qiita.com/drken/items/56a6b68edef8fc605821>

- 愚直だとΟ(N)かかる配列の部分和を求める処理をΟ(N)の前処理によってΟ(1)にする
