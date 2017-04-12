// BinaryTreeNode.cpp: implementation of the CBinaryTreeNode class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "lms.h"
#include "BinaryTreeNode.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
CBinaryTreeNode::~CBinaryTreeNode()
{

}
CBinaryTreeNode::CBinaryTreeNode(CString a)
{
    data=a;
    leftchild=NULL;
    rightchild=NULL;
    parent=NULL;
}
