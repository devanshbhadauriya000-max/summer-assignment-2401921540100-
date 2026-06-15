 int count=0;
        // count total no. of nodes
        ListNode *temp=head;

        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        };

        count/=2;

        temp=head;
        while(count--)
        temp=temp->next;

        return temp;