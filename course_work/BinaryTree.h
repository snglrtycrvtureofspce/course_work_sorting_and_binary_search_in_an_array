#pragma once
#include <vector>
#include <string>
/*
BinaryTree.h - представляет класс бинарного дерева, включая его методы визуализации
*/
template <class T>
class BinaryTree
{
private:
    struct Node
    {
        T     Data;
        int   Count;
        int   theX, theY;
        Node* Left, * Right;
        bool  testRoot;

        Node(T _Data) : Data(_Data), testRoot(false)
        {
            Count = theX = theY = 0;
            Left = Right = NULL;
        }
    };

    Node* Root;
    void Insert(T _Data, Node*& paramnode, int _theX, int _theY)
    {

        if (paramnode == NULL)
        {
            paramnode = new Node(_Data);
            paramnode->testRoot = true;
            paramnode->Count = 1;
            paramnode->theX = _theX;
            paramnode->theY = _theY;
        }
        else
        {
            if (_Data == paramnode->Data)
                paramnode->Count++;
            else if (_Data < paramnode->Data)
            {
                paramnode->testRoot = false;
                Insert(_Data, paramnode->Left, paramnode->theX - 70, paramnode->theY - 30);
            }
            else if (_Data > paramnode->Data)
            {
                paramnode->testRoot = false;
                Insert(_Data, paramnode->Right, paramnode->theX + 70, paramnode->theY - 30);
            }
        }
    }

    std::vector<Node*>  PrintTree(Node* paramnode)
    {
        std::vector<Node*> myvector, othervector;
        if (paramnode != NULL)
        {
            myvector.push_back(paramnode);
            othervector = PrintTree(paramnode->Left);
            myvector.insert(myvector.begin(), othervector.begin(), othervector.end());
            othervector = PrintTree(paramnode->Right);
            myvector.insert(myvector.begin(), othervector.begin(), othervector.end());
        }
        return myvector;
    }

    Node* Search(T _Data, Node* paramNode)
    {
        if (paramNode != NULL)
        {
            if (_Data == paramNode->Data)
                return paramNode;
            if (_Data < paramNode->Data)
                return Search(_Data, paramNode->Left);
            else
                return Search(_Data, paramNode->Right);
        }
        else return NULL;
    }

public:

    BinaryTree()
        :Root(NULL)
    {
    }

    ~BinaryTree()
    {
        DestroyTree(Root);
    }

    void Clear()
    {
        DestroyTree(Root);
    }
    void  AddItem(T value)
    {
        int startX = 250;
        int startY = 250;
        Insert(value, Root, startX, startY);
    }


    std::vector<Node*>   PrintTree()
    {
        return PrintTree(Root);
    }

    bool Search(T _Data)
    {
        return Search(_Data, Root);
    }

    void  DestroyTree(Node* paramnode)
    {
        if (paramnode != NULL)
        {
            DestroyTree(paramnode->Left);
            DestroyTree(paramnode->Right);
            delete paramnode;
            paramnode = NULL;
        }
        Root = NULL;
    }
};