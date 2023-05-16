#include <bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)

using namespace std;


ll n;
ll a[105];
ll sx[105],c[105],l[105];
int main()
{
    cin>>n;
    FOR(i,1,n)
        cin>>a[i];
    cout<<"Day so:";
    FOR(i,1,n)
        cout<<a[i]<<" ";
    cout<<endl;
    ll sum=0;
    FOR(i,1,n)
        sum+=a[i];
    cout<<"Tong: "<<sum<<endl;
    ll mi=a[1],vti=1,mx=a[1],vtx=1;
    FOR(i,2,n)
    {
        mi=min(mi,a[i]);
        mx=max(mx,a[i]);
    }
    cout<<"Lon nhat: "<<mx<<" vi tri: ";
    FOR(i,1,n)
    if(a[i]==mx) cout<<i<< " ";
    cout<<endl;
    cout<<"Nho nhat: "<<mi<<" vi tri: ";
    FOR(i,1,n)
    if(a[i]==mi) cout<<i<< " ";
    cout<<endl;
    FOR(i,1,n)
        sx[i]=a[i];
    sort(sx+1,sx+n+1);
    cout<<"Day sap xep :";
    FOR(i,1,n)
    cout<<sx[i]<<" ";
    cout<<endl;
    ll dem=1,temp=a[1];
    FOR(i,2,n)
    if(a[i]!=a[i-1])
    {
        dem++;
        temp=a[i];
    }
    cout<<"So phan tu khac biet: "<<dem<<endl;
    dem=0;
    FOR(i,1,n)
    if(a[i]%2==0)
        c[++dem]=a[i];
    cout<<"Day chan:";
    FOR(i,1,dem)
        cout<<c[i]<<" ";
    cout<<endl;
    dem=0;
    FOR(i,1,n)
    if(a[i]%2!=0)
        l[++dem]=a[i];
    cout<<"Day le:";
    FOR(i,1,dem)
        cout<<l[i]<<" ";
    cout<<endl;
    cout<<"them mot so vao vi tri: ";
    ll t,k;
    cin>>t>>k;
    FORD(i,n,k)
        a[i+1]=a[i];
    a[k]=t;
    cout<<"Day sau khi them:";
    n++;
    FOR(i,1,n)
    cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Xoa phan tu thu :";
    cin>>k;
    cout<<"Day sau xoa: ";
    FOR(i,k,n)
    a[i]=a[i+1];
    n--;
    FOR(i,1,n)
    cout<<a[i]<<" ";
    ll mx2=a[1];
    FOR(i,2,n)
    if((a[i]>mx2)&&(a[i]<mx))
        mx2=a[i];
    cout<<endl<<"Gia tri lon thu 2: "<<mx2<<endl;
    ll mix=mx;
    ll vt1=1,vt2=1;
    FOR(i,1,n-1)
    FOR(j,i+1,n)
    if((abs(a[i]+a[j])<mix)&&(i!=j))
    {
        vt1=i;
        vt2=j;
        mix=abs(a[i]+a[j]);
    }
    cout<<"Vi tri cong lai gan 0 nhat :"<<vt1<<" va "<<vt2;
}
