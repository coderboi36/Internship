int main() {
  int n;
    cin>>n;  //size
    int a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];  //array
    sort(a,a+n);
    cout<<"Smallest "<<a[0];
    if(a[0]==a[1])
        cout<<"\nSecond Smallest "<<a[2];
    else
    cout<<"\nSecond Smallest "<<a[1];
}
