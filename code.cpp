vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int>v;
    int n=a.size();
    int max=a[n-1];
    v.push_back(a[n-1]);
    for(int i=n-2;i>=0;
    i--){
        if(a[i]>max){
            max=a[i];
            v.push_back(a[i]);
        }
    }
    return v;
}
