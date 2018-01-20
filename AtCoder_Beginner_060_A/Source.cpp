/*
問題文
文字列 A, B, C が与えられます。これがしりとりになっているか判定してください。

つまり、

A の最後の文字と B の最初の文字が同じ
B の最後の文字と C の最初の文字が同じ
この 2 つが正しいか判定してください。

両方とも正しいならば YES、そうでないならば NO を出力してください。
*/

#include<iostream>
#include<vector>
#include<string>

int main() {
	std::vector<std::string> v;
	bool flag = false;
	v.resize(3);

	for (auto&& x : v) {
		std::cin >> x;

	}


	for (int i = 0; i < 2; i++) {
		v[i].substr(v[i].size()-1, 1) == v[i + 1].substr(0, 1) ? flag = true : flag=false; //[条件式]? [代入] : break; にしたかった… 条件演算子でbreak文は無理そう…
		if (flag == false) {
			break;
		}
	}

	std::cout << (flag == true ? "YES" : "NO") << std::endl;

	return 0;
}