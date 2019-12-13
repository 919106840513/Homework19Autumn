using namespace std;
#include <iostream>
struct node{ //�������
	unsigned num; //���
	node *next; //ָ����һ������ָ��
};
node *create(int a[]){ //���� n ������γɵ�����
	node *head = NULL,*rear = NULL;
	int n = sizeof(a);
	for(unsigned i = 0; i < n; i++){
		node *p = new node{a[i], head};
		if(head == NULL){ //�Ƿ�Ϊ��һ�����
			head = p;
			rear = p;
		}
		else{
			rear -> next = p;
			rear = p;
		}
	}
	rear -> next = NULL;
	return head;
}
void print(node *head){
	node *rear=NULL;
	rear=head;
	while(rear!= NULL){
		cout << rear->num <<endl;
		rear = rear -> next;
	}
//	int n=sizeof(a);
//	for(unsigned i = 0; i < n; i++){
//		cout << rear->num <<endl;
//		rear = rear -> next;
//	}
//	
}
void del(node *head, unsigned n){
	node *fore = head, *hind = head;
	node *p = fore; //fore ָ��Ҫ�Ƴ��Ľ��
	hind->next = fore->next; //����Ҫ���Ƴ��Ľ��
	fore = fore->next; //fore ǰ��
	delete p; //�Ƴ���㣬����������
}
void destroy(node *head){
	node *fore = head, *hind = head;
	while(fore->next!=NULL){
		hind = fore->next;
		delete(fore);
		fore = hind;
	}
	delete(fore);
} 
int main(){
	int a[100];    //int���������ڴ洢�������
	int i=0;
	int n,m;
	cin >> n;
	while (i<n){
	    cin >> a[i];
	    i++;
	}
	node * head = NULL;
	head = create(a);
	print(head);
	cout <<"����Ҫɾ����������ţ�"<<endl;
	cin >> m; 
	del(head,m);
	destroy(head);
	
	return 0;
}
