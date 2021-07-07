﻿#include <stdio.h>
#include <stdlib.h>
#include <string>	//stringを使うためのヘッダー
#include <iostream>	//c++で拡張された入出力用のヘッダー

int main()
{
	// c言語の文字、文字列
	char word = 'a';					//　１文字
	char name[] = "hokuto takasu";		//	文字配列
	const char* cstr = "Hello World";	//	const char ポインター型

	printf("%c\n", word);
	printf("%s\n", name);
	printf("%s\n", cstr);

	//　string型の書き方
	//std::string str = "文字列";
	//string型初期化
	//std::string str;			//""(空）
	//std::string str = "";		//""(空）
	//std::string str = "ABC";	//"ABC"
	//std::string str("ABC");	//"ABC"
	std::string str2(3, 'A');	//"AAA"
	std::string str = str2;		//"AAA"

	//c言語の関数でstring型に入力されている文字列を使うには
	//.c_str()という関数で、文字列のポインタを受け取る必要がある
	//printf("str = %s\n", str.c_str());

	//c++的な書き方(iostreamとstrinigのインクルードが必要)
	std::cout << str << std::endl;

	// 文字サイズを取得.size()　or .length()
	std::cout << "str size ="  << str.size() << std::endl;

	//	文字の挿入 += push_back(), append(), insert()
	str += "BBC";				//"AAABBC"		末尾に文字列を追加
	str.push_back('D');			//"AAABBCD"		末尾に１文字を追加
	str.append("EE");			//"AAABBCDEE"	末尾に文字列を追加
	str.insert(1, "FG");		//"AFGAABBCDEE"指定の場所に、文字列を追加
	std::cout << str << std::endl;
	
	//文字の検索　.find()
	str = "ABC ABC";
	int index = str.find('C');	//2 先頭から１文字を探す
	index = str.find("BC"   );	//1 先頭から文字列を探す
	index = str.find("BC", 2);	//5 指定の位置(2)から文字列を探す
	index = str.find("Z"    );	//-1　だがstd::string::nposを使って判定する
	//他にも
	//.rfind()
	//.find_first_of()
	//.find_last_of()
	//.find_first_not_of()
	//.find_last_not_of()

	//文字の置き換え　.replace(何文字目、何文字分、置き換え文字列)
	std::string from = "BC";
	std::string to	 = "X" ;
	str.replace(str.find(from), from.size(), to); //"AX ABC"
	std::cout << str << std::endl;

	//文字の削除 .clear()
	str.clear();
	std::cout << str << std::endl;

	system("pause");
	return 0;
}
