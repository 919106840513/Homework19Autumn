/* 
2�ο�8.22�����⣬ ����һ�����������ڵ�Ľṹ struct node{ 
unsigned num; //���
node *next; //ָ����һ������ָ��
};    ���һ�¼��������� 
1�� create��������������ͨ����������һ��������ÿ���ڵ���һ��������
2��print��������������������  
3��del()����������������������ж�Ӧ�Ľڵ�ɾ���� 
4��destroy() �ͷ���������Ŀռ䡣   ÿ���������β��Լ���ơ�  
*//*�������� 
6
1 3 5 3 7 8
*/
#include<iostream>
using namespace std;
struct node{
	unsigned num; //���
	node *next; //ָ����һ������ָ��
};
node* create(unsigned n){
	cout<<"�������ݣ�" ;
	node *head=new node;
	node *rear=head;
	rear->next=NULL;
	for(int i=0;i<n;i++){
		node*p=new node;
		cin>>p->num;
		rear->next=p;
		rear=p;	
	}
	rear->next=NULL;
	return head;
}
void print(node*L){
	cout<<"������������:"<<endl;
	node *p=L->next;
	if(!p){
		cout<<"���κ�����"<<endl;
		return;
	}
	while(p){
		cout<<p->num<<" ";
		p=p->next;
	}
	cout<<endl;
}
node *del(node *head, int num)
{
	node *p1=new node;
	node *rear=head;
	while(num!=rear->num&&rear->next!=NULL){

		p1=rear;
		rear=rear->next;
	}
	if(num==rear->num){		
		if(rear==head){
			head=rear->next;
			delete rear;
		}
		else{
			p1->next=rear->next;
			delete rear;
		}
	}
	else{
		cout<<"�����Ҳ���"<<num<<endl;
	}
	return head;
}
void destroy(node *head){
	if(head!=NULL){
		delete[] head;
	}
}
int main(){
	cout<<"�������ݸ�����";
	unsigned n;	cin>>n;
	node*List=NULL;
	if(n>0)List=create(n);
	else cout<<"����Ϊ0"<<endl;
	cout<<"ԭʼ��"<<endl;
	print(List);
	List=del(List,5);
	cout<<"�±�"<<endl;
	print(List);
} 
