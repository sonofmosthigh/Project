#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include <string>
#include <cstddef>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h> 
#include <bits/stdc++.h>
#define  LINE_MAX 1024
using namespace std;

class Node { 
public: 
    int data; 
    Node* next; 
};

void printList(Node *node)  
{  
    while (node != NULL)  
    {  
        cout<<" "<<node->data;  
        node = node->next;  
    }  
} 
void append(Node** head_ref, int new_data)  
{  
    /* 1. allocate node */
    Node* new_node = new Node(); 
  
    Node *last = *head_ref; /* used in step 5*/
  
    /* 2. put in the data */
    new_node->data = new_data;  
  
    /* 3. This new node is going to be  
    the last node, so make next of  
    it as NULL*/
    new_node->next = NULL;  
  
    /* 4. If the Linked List is empty, 
    then make the new node as head */
    if (*head_ref == NULL)  
    {  
        *head_ref = new_node;  
        return;  
    }  
  
    /* 5. Else traverse till the last node */
    while (last->next != NULL)  
        last = last->next;  
  
    /* 6. Change the next of last node */
    last->next = new_node;  
    return;  
} 
int GetNth(Node* head, int index) 
{ 
  
    Node* current = head; 
  
    // the index of the 
    // node we're currently 
    // looking at 
    int count = 0; 
    while (current != NULL) { 
        if (count == index) 
            return (current->data); 
        count++; 
        current = current->next; 
    }
	}
	
	void findWaitingTime(int n, int bt, int wt[])
{
		Node* temp = NULL;
    append(&temp, bt);
    // waiting time for first process will be 0
    wt[0] = 0;
 
    // calculating waiting time
   for(int i=1; i<n; i++){
        wt[i] =  GetNth(temp, i-1) + wt[i-1];
}
}
// function to calculate turn around time
void findTurnAroundTime( int n, int bt, int wt, int tat)
{
    // calculating turnaround time by adding
    // bt[i] + wt[i]

        tat = bt+ wt;
}
 
// function to calculate average time
void findAverageTime(int n, int bt)
{
	Node* temp = NULL;
    append(&temp, bt);
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
    for(int i=0; i<=n; i++){
	findWaitingTime(n, GetNth(temp, i), wt);
}
    for(int i=0; i<n; i++){
    	total_wt = total_wt + wt[i];
    	cout<<"P"<<i+1<<":"<< wt[i]<<endl;
	}
	cout<<"Average"<< (float)total_wt/(float)n;

}

int main()
{
	Node* head = NULL; 
    Node* second = NULL; 
    Node* third = NULL;  
    second = new Node();
    third = new Node();
int x;
int option;
FILE *fp;
char line[LINE_MAX];
unsigned int num[3];
 cout<<"Please Choose a simulation method. "<<endl;
cout<<"1) Scheduling Method "<<endl;
cout<<"2) Preemptive Mode"<<endl;
cout<<"3) Non Preemptice Mode "<<endl;
cout<<"4) Show Result "<<endl;
cout<<"5) End Program"<<endl ;
cout<<"Option >"<<endl ;
cin>>option;

if ((fp = fopen("project.txt", "r")) == NULL)
        return 0;
while (fgets(line, LINE_MAX, fp) != NULL) {
        sscanf(line,"%d:%d:%d\n",&num[0],&num[1],&num[2]);
        append(&head, num[0]);
        second->data = num[1];
        second->next=third;
        third->data = num[2];
        third->next=NULL;

}
if(option==1){
	int x;
for(int i=0; i<=sizeof(head->data); i++){
	x = GetNth(head, i)
}
findAverageTime(sizeof(head->data), x);
}

else if(option==2){
	
}

else if(option==3){
	
}

else if(option==4){
	
}

else if(option==5){
	
}

else
cout<<"WRONG OPTION  "<<"Please enter a valid option"<<endl ;
fclose(fp);
return 0;
}
	
