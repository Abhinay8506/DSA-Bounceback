int main()
{
    /*int n1,n2;
    cin>>n1>>n2;
    cout<<gcd(n1,n2);*/
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
               flag=1;
               break;
            }
        }
        if(flag==0){
            cout<<i;
        }
    }
    return 0;
}
