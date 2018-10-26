#ifndef _WORDNODE_H_
#define _WORDNODE_H_

class WordNode{
private:
	string word;

public:
	WordNode(string word_input);			//constructor with word input
	~WordNode();							//destructor

	WordNode* left;
	WordNode* right;

	//getters
	string getWord();

	//setters
	void changeWord();
};

#endif _WORDNODE_H_