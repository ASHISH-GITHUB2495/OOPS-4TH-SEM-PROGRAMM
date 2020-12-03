namespace n1{
float PI=3.14;
float avg(int arr[],int length){
float total=0;
for(int i=0;i<length;i++)
total+=arr[i];
return (float)total/length;
}
}
