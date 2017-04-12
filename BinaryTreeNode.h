// BinaryTreeNode.h: interface for the CBinaryTreeNode class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BINARYTREENODE_H__147C6478_D965_4093_B5F3_4C1AD5DAC6F8__INCLUDED_)
#define AFX_BINARYTREENODE_H__147C6478_D965_4093_B5F3_4C1AD5DAC6F8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CBinaryTreeNode  
{
public:
	CString data;
    CBinaryTreeNode *leftchild;
    CBinaryTreeNode *rightchild;
    CBinaryTreeNode *parent;
    CBinaryTreeNode(CString a);
	virtual ~CBinaryTreeNode();

};

#endif // !defined(AFX_BINARYTREENODE_H__147C6478_D965_4093_B5F3_4C1AD5DAC6F8__INCLUDED_)
