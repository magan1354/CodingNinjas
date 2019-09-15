node* swap_nodes(node* head, int i, int j)
{
    if (i < 0 || j < 0 || i == j)
        return head;

    // order i and j
    if (std::min(i,j) == j)
        std::swap(i,j);

    // find the pointer pointing to i'th node.
    node **pp1 = &head;
    while (*pp1 && i-- > 0)
    {
        pp1 = &(*pp1)->next;
        --j;
    }

    // finish finding the pointer pointing to the j'th node
    node **pp2 = pp1;
    while (*pp2 && j-- > 0)
        pp2 = &(*pp2)->next;

    // if either index was out of range, at least one of these will
    //  be null, and if that's the case, no swap will happen
    if (*pp1 && *pp2)
    {
        // swap the pointers
        std::swap(*pp1, *pp2);

        // and swap *back* their next members
        std::swap((*pp1)->next, (*pp2)->next);
    }

    return head;
}