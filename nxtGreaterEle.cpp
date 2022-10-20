class Solution {
public:
int nextGreaterElement(int n) {
string s = to_string(n) ;

    int k = 0  , l = 0 ;
    
    for(k = s.size()-2 ; k>=0 ; k--){
        if(s[k] < s[k+1]) break;
    }
    
    if(k<0) {
        reverse(s.begin() , s.end()) ;
        int num = stoll(s) ;
        if(num > n) return num;
    }
    else{
        for(l=s.size()-1 ; l>=0 ; l--){
            if(s[l] > s[k]) break ;
        }
        swap(s[l] , s[k]) ;
        
        reverse(s.begin()+k+1 , s.end()) ;
        int num = stoll(s) ;
        if(num > n) return num ;
    }
    
    return -1;
    
}
};
