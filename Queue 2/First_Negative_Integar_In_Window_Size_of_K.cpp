long long display(queue<long long> q){
     
      // first negative integer 
      while(!q.empty()){
           
           if(q.front()<0)
           return q.front();
          
           q.pop();
      }
     
       return 0;
    
 }



vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
                                                 
    vector<long long>ans;                                     
      queue<long long>q;
      
      for(long long int i=0 ; i<K ; i++){
          q.push(A[i]);
      }
                                                 
     for(long long int i=K-1 ; i<N ; i++){
         
         q.push(A[i]);
        ans.push_back(display(q));
         q.pop();
    
     }                              
                                                 
                                                 
                                                 
     return ans;                                 
                                                 