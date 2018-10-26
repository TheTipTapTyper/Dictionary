#include "WordNode.h"
#include "Word.h"
#include <iostream>

using namespace std;

WordNode::WordNode(string word_input){
	word = word_input;
	left = NULL;
	right = NULL;
}

WordNode::~WordNode(){
	cout << "destructing: " << word << endl;
}