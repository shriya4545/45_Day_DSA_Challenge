class solution {
  public:
    #define ll long long
    int mod = 1e9+7;
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        ll num1 = 0, num2 = 0;
        Node* tmp = first;
        while(tmp!=NULL)
        {
            num1 = ((num1*10)%mod + tmp->data)%mod;
            tmp=tmp->next;
        }
        tmp = second;
        while(tmp!=NULL)
        {
            num2 = ((num2*10)%mod + tmp->data)%mod;
            tmp=tmp->next;
        }
        return (num1*num2)%mod;
    }
};