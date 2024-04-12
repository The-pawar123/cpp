#include<iostream>
using namespace std;
int sortarray(int arr[],int n)
{
	int i,j,temp;
for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(arr[i]>arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}
cout<<"the new array would be"<<endl;
for(int j=0;j<n;j++){
	cout<<arr[j]<<endl;
	
}
int secondhighest=arr[n-2];
int secondlowest=arr[1];
return 0;


}
int sortarray1(int arr2[],int n)
{
	int i,j,temp;
for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(arr2[i]>arr2[j]){
			temp=arr2[i];
			arr2[i]=arr2[j];
			arr2[j]=temp;
		}
	}
}
cout<<"the new array would be"<<endl;
for(int j=n-1;j>=0;j--){
	cout<<arr2[j]<<endl;
}
return 0;
}
int main(){
	int arr1[100],a,arr2[100];
	cout<<"enter the range"<<endl;
	cin>>a;
	cout<<"enter the element into the array"<<endl;
	for(int i=0;i<a;i++)
	cin>>arr1[i];
sortarray(arr1,a);
cout<<"enter the element into the array"<<endl;
for(int j=0;j<a;j++)
cin>>arr2[j];
sortarray1(arr2,a);
return 0;
}
