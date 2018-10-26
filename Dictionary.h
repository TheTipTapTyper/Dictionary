#ifndef _DICTIONARY_H_
#define _DICTIONARY_H_

#include <string>
#include "WordNode.h"

using namespace std;


class Dictionary{
private:
	WordNode * binTree;					//binary search tree of words

public:
	int isWord(string word_input);			//check if word is a word in the english language. return 1 if yes, 0 if no
	Dictionary();						//constructor
	~Dictionary();						//destructor
	int load(string FileName);			//load up tree from text file
	int save(string FileName);			//save data to text file
	int addWord(string word_input);			//add word to binary search tree
	void buildTree(string FileName);	//split and organize alphabatized list of words into binary search tree
	void deleteTree();
};


#endif // _DICTIONARY_H_