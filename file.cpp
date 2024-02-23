#include<iostream>
#include<string>

using namespace std;
int oneoperation(int *a,int *b , char *sign){
    if(*sign == '+'){
    int sum = *a + *b;
    return sum;}
    else if ( *sign == '-'){
        int sum = *a - *b;
        return sum;
    }
    else if(*sign == '*'){
        int product = *a * *b;
        return product;
    }
    else if(*sign == '%'){
        int product = *a % *b;
        return product;
    }
   
  
}
int squareroot (int *a){
     int start = 1;
      int end = *a;
      int ans = 0;
      while(start <= end){
        int mid = (start + end)/2;
        if(mid*mid == *a){
            return mid;
        }
        else if(mid*mid < *a){
            ans = mid;
            start = mid + 1;
        }
        else if(mid*mid > *a){
            end = mid - 1;
        }

      }
    return ans;

}
void sort_ascending_order(int arr[] , int *n){
       for(int i = 0;i<*n;i++){
        for(int j = 0 ;j<*n-1 - i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}
void sort_descending_order(int arr[] , int *n){
     for(int i = 0;i<*n;i++){
        for(int j = 0 ;j<*n-1 - i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}

int main (){
    
    string str;
    cout<<"If you have to find square root enter SQ" <<endl<<"For arranging numbers in ascending order enter AS" <<endl
    <<"For arranging numbers in descending order enter DS"<<endl<<"For other arithmetic operations enter CT"<<endl;
    cin>>str;
    if(str ==  "CT"){
    int a, b;
    char sign;
    cout<<"Operations for two numbers."<<endl;
    cout<<"Enter the number 1"<<endl;
    cin>>a;
    cout<<"Enter the number 2"<<endl;
    cin>>b;
    
    cout<<"Enter Operator"<<endl;
        cin>>sign;
        if(sign == '/'){
            float x = (float)a;
            float y = (float)b;
            cout<<"Required answer:"<<" "<<x/y<<endl;
        }
            if(sign != '/'){
        float sum =  oneoperation(&a,&b,&sign);
                cout<<"Required answer: "<<sum;
               }
    }
    else if(str == "SQ"){
        int a;
        cout<<"Enter the number ";
        cin>>a;
        int square_root = squareroot(&a);
        cout<<"Required answer:"<<" "<<square_root<<endl;
    }
    // for ascending order sorting
    else if(str == "AS"){
    int n;
    cout<<"Enter the total numbers"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter "<<(i+1)<<"st number"<<endl;
        cin>>arr[i];
    }
    sort_ascending_order(arr , &n);
    cout<<"Required order: ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }
    else if(str=="DS"){
    int n;
    cout<<"Enter the total numbers"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter "<<(i+1)<<"st number"<<endl;
        cin>>arr[i];
    }
    sort_descending_order(arr , &n);
    cout<<"Required order: ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    }

     /*
     sorting ascending order
     bubble sort
     4 5 8 9 6
     int arr[n]
        for(int i = 0;i<n;i++){
        for(int j = 0 ;j<n-1 - i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout arr

     */

      
       
      
        
    


    return 0;
}