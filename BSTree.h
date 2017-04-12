// BSTree.h: interface for the CBSTree class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BSTREE_H__7CF9FFF2_B3B7_416C_A8AD_29348A79566A__INCLUDED_)
#define AFX_BSTREE_H__7CF9FFF2_B3B7_416C_A8AD_29348A79566A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "BinaryTreeNode.h"
class CBSTree  
{
public:
	CBinaryTreeNode *root;
    CBSTree();
    void Insert(CString a);
    CBinaryTreeNode *Search(CString key,CBinaryTreeNode*& pr,CBinaryTreeNode *&parent);
	virtual ~CBSTree();

};

#endif // !defined(AFX_BSTREE_H__7CF9FFF2_B3B7_416C_A8AD_29348A79566A__INCLUDED_)


