#include "Dictionary.h"
#include <iostram>

Dictionary(){
	binTree = NULL;			//root of binary search tree
}

~Dictionary(){
	deleteTree();

}

//returns 1 if the input string is an english word
//0 otherwise
int isWord(string word_input){

}

//loads tree from file
int load(string FileName){


}

//saves tree to file
int save(string FileName){


}

//adds word to tree
int addWord(string word_input){


}

//builds binary search tree from alphabatized list
void buildTree(string FileName){


}

//frees memory from each node in the tree
void deleteTree(){

}