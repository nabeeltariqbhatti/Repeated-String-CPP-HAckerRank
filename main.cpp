
#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
   
   long counter=0;
   long i=0;
   long size=s.length();




char newS[n];

while(i<size){
    newS[i]=s[i];
    i++;
}
long k=0;

for(int j=size; j<n;j++ ){
    
  
    if(s[k]!='\0'){
        newS[size]=s[k];
        k++;
    }else{
        k=0;
        newS[size]=s[k];
        k++;
    }
   

  
    size++;
  
}

 k=0;

 while(k<size){
     if(newS[k]=='a'){
         ++counter;
     }
    
    k++;
    
 }

return counter;
}

int main()
{
    

    string s;
    getline(cin, s);

    long n;
    cin >> n;
  

    long result = repeatedString(s, n);
    cout<<result;

    return 0;
}
