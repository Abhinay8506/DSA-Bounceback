vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n1=a.size();
    int n2=b.size();
    vector<int>v;
    
    int k=0;
    int i=0;
    int j=0;
    while(i<n1&&j<n2){
        if(a[i]<b[j]){
            if(v.empty()){
              v.push_back(a[i++]);
            }
            else{
                if(v.back()!=a[i]){
                     v.push_back(a[i++]);
                }
                else{
                    i++;
                }
            }
        }

        else if (a[i] == b[j]) {
            if(v.empty()){
              v.push_back(a[i++]);
            }
            else{
                if(v.back()!=a[i]){
                    v.push_back(a[i++]);
                    
                }
                else{
                    i++;
                }
            }
            j++;

        }
        else{
            if(v.empty()){
              v.push_back(b[j++]);
            }
            else{
                if(v.back()!=b[j]){
                    v.push_back(b[j++]);
                }
                else{
                    j++;
                }
            }
        }
    }
    while(i<n1){
        if(v.back()!=a[i]){
            v.push_back(a[i++]);
        }
        else i++;
    }
    while(j<n2){
        if(v.back()!=b[j]){
            v.push_back(b[j++]);
        }
        else j++;
    }
    return v;
}
