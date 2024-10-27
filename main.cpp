#include <iostream>
#include <vector>
#include "linkedlist.h"

using namespace std;

int main(){
	// ARRAY
	int new_list[] = {1,2,3};
	bool result = false;
    
    	for(int i = 0; i < 5; i++){
        	if(new_list[i]==1){
            		result = true;
        	}
    	}
    
    	cout<<"Vector result = "<<result<<endl;
	
    	// LINKEDLIST
    	Node N1 = Node();
    	Node N2 = Node(10);
    
    	cout<<"Node 1 = "<<N1.GetData()<<endl;
    	cout<<"Node 2 = "<<N2.GetData()<<endl;
    
    	return 0;
}

