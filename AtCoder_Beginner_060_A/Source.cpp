/*
��蕶
������ A, B, C ���^�����܂��B���ꂪ����Ƃ�ɂȂ��Ă��邩���肵�Ă��������B

�܂�A

A �̍Ō�̕����� B �̍ŏ��̕���������
B �̍Ō�̕����� C �̍ŏ��̕���������
���� 2 �������������肵�Ă��������B

�����Ƃ��������Ȃ�� YES�A�����łȂ��Ȃ�� NO ���o�͂��Ă��������B
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
		v[i].substr(v[i].size()-1, 1) == v[i + 1].substr(0, 1) ? flag = true : flag=false; //[������]? [���] : break; �ɂ����������c �������Z�q��break���͖��������c
		if (flag == false) {
			break;
		}
	}

	std::cout << (flag == true ? "YES" : "NO") << std::endl;

	return 0;
}