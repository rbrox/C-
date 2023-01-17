
// Simmilar to node of an SLL
struct element
{
    int x; // Some data x
    struct element *link; // Pointer to another element
};

void shuffle( struct element *head)
{
    // Some structure pointers
    struct element *p , *q;

    int temp;// Used later to swap values

    // Edge case passed list has one or zero ele
    if(!head || ! head -> link ) return;

    p = head ; q = head -> link;

    while(q)
    {
        // Switching data of p and q
        temp =  p -> x;
        p -> x = q -> x;
        p = temp;

        // Fancy coding line coder must be drunk :)
        // Means  q = (p? p : 0);
        // Assign q to p if p != NULL
        // Writting in genral way
        /*
        if(p == NULL)
        {
            q = 0;
        }
        else
        {
            q = p;
        }
        
        */ 
        q = p? p : 0; // DRUNK CODER

        // Increment p to the next element
        p = p -> link 


    }
}
