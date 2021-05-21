#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
#include"cards_pool.h"

using namespace std;
//黑桃--spade   红桃--heart   草花--club   方块--diamond

//typedef pair<string, int> acard;
int myrandom(int i) {
	return rand() % i;
}

void cards_pool::flush() {
	this->res_cards = 51;
	for (int i = 0; i < 52; i++) {
		this->card_map[i] = i;
	}
	this->point = -1;
};

void cards_pool::shuffle() {
	//设置随机数种子
	srand((unsigned)time(NULL));
	std::random_shuffle(this->card_map.begin(), this->card_map.end(),myrandom);
	this->point++;
}

int cards_pool::get_res_card() {
	cout << "剩余牌数" << this->res_cards + 1 << "张" << endl;
	return res_cards+1;
}

acard cards_pool::deal() {
	//监测发牌池，清零则准备重置游戏
	if (this->res_cards < 0) {
		//下面跳转结束游戏，待写
		this->flush();
		cout << "牌发完，GG" << endl;
		return this->card_Joker;
	}
	cout << "TEST this is point " << this->card_map[this->point] << endl;
	num_color = this->card_map[this->point] / 13;
	num_point = this->card_map[this->point] % 13;
	acard this_card = { this->card_color[this->num_color],this->card_point[this->num_point] };
	this->point++;
	this->res_cards--;

	return this_card;
}
 