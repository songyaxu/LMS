// BSTree.cpp: implementation of the CBSTree class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "lms.h"
#include "BSTree.h"
#include "BinaryTreeNode.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
CBSTree::CBSTree()
{
	root=NULL;
}
CBSTree::~CBSTree()
{

}
CBinaryTreeNode *CBSTree::Search(CString key,CBinaryTreeNode*& pr,CBinaryTreeNode*& parents)
{
    CBinaryTreeNode *p=root;
    pr=root;
    while(p)
    {
        parents=p;
        if(key<p->data)
        {
            pr=p;
            p=p->leftchild;
        }
        else if(key>p->data)
        {
            pr=p;
            p=p->rightchild;
        }
        else
            return p;
    }
        return NULL;
}

void CBSTree::Insert(CString a)
{
    CBinaryTreeNode *pr,*p,*pp=NULL;
    p=Search(a,pr,pp);
    if(p!=NULL)
    {
        return;
    }
    CBinaryTreeNode *r=new CBinaryTreeNode(a);
    if(!root)
        root=r;
    else if(a<pp->data)
        pp->leftchild=r;
    else
        pp->rightchild=r;
}