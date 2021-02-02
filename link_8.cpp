Node * removeDuplicates( Node *root) 
{
    unordered_map<int,int> m;

    Node *prev = root;
    Node *temp = root;
    while(temp !=NULL)
    {
        if(m.find(temp->data) == m.end())
        {
            m[temp->data]++;
            prev = temp;
        }
        else
        {
            prev -> next = temp -> next;
        }
        temp = temp -> next;
    }
    return root;
}
