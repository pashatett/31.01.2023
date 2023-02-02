#pragma once
#include <iostream>
using namespace std;

#include "Pokupatel.h"
#include "ShopAsistant.h"

class Obshiy{
public:
	void Menu() {
		srand(time(0));

		ShopAsisstant* obj[3]{
			new ShopAsisstant,
			new ShopAsisstant,
			new ShopAsisstant
		};

		Pokupatel* pok[20];
		
		string p = { "pokupatel" };
		for (int i = 0; i < 20; i++) 
			pok[i] = new Pokupatel{p+to_string(i),100000000};

		int a;
		cout << "Do you want to purchase anything(1(y)/0(n))" << endl; cin >> a;
		while (a != 0) {
			cout << "What would you like to purchase?" << endl;
			obj[0]->display(cout);
			for (int i = 0; i < 20; i++) {
				pok[i]->Sale(/*468434753094570349*/123, (char*)"dfhdh");
				cout << "tovar "<<i <<" : " << pok[i]->ShowSaleProduct() << endl;
				cout << "money " << i << " : " << pok[i]->showMyMoney() << endl;
				/*pok[i]->Sale(5646, (char*)"ugugugugyu");
				obj[0]->sale(4, 4564546);
				pok[i]->Sale(obj[1]->getCount(obj[1]), obj[rand() % 3]->getName(obj[1]));
				obj[1]->sale(1249, -4564546);
				pok[i]->Sale(obj[2]->getCount(obj[2]), obj[rand() % 3]->getName(obj[2]));
				obj[3]->sale(-200, 45645429653049);
				cout << pok[i]->ShowSaleProduct() << endl;*/
				cout << "potracheno " << i << " : " << obj[0]->getMoney() << endl;
				cout << endl;
			}cout << endl;
			
			cout << "Do you want to buy something else(1/0) " << endl; cin >> a; 
			system("cls");			
		}
		if (a == 0) 
			cout << "Your bill came out on " << obj[0]->getMoney() << endl;
	}
};

