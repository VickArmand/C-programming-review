#ifndef _NODE_H_
#define _NODE_H_
/**
 * A tree node has a data part and references to its left and right child nodes.
*/
struct node
{
    int data;
    struct node *leftChild;
    struct node *rightChild;
};
#endif