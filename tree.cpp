#include <stdio.h>
#include <stdlib.h>

//typedef enum { false , true } bool;
typedef int ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

BinTree BuildTree(); /* 由裁判实现，细节不表 */
bool IsBST ( BinTree T );
void print(BinTree T); 
int main()
{
    BinTree T;

    T = BuildTree();
	 if ( IsBST(T) ) printf("Yes\n");
    else printf("No\n");

    return 0;
}

BinTree BuildTree(){
	BinTree t;
	int c;
	scanf("%d",&c);
	if(c==0)
	t=NULL;
	else{
		t=(BinTree)malloc(sizeof(struct TNode));
		t->Data=c;
		t->Left=BuildTree();
		t->Right=BuildTree();
	}
	return t;	
}


/*bool IsBST ( BinTree T ){
	BinTree L,R;
	L=T->Left;
	R=T->Right;
	if(L&&R)
		if(T->Data<L->Data||T->Data>R->Data)
		return false;
	else if(L&&R==NULL)
		if(T->Data<L->Data)
		return false;
	else if(L==NULL&&R)
		if(T->Data>R->Data)
		return false;
	IsBST (L);
	IsBST (R);
	return true;
}*/


void print(BinTree T){
	if(T!=NULL){
	printf("%d",T->Data);
	print(T->Left);
	print(T->Right);
	}
}
