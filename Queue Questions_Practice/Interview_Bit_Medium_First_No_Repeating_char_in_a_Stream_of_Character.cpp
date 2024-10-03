string Solution::solve(string A) {
    
    string B = "";
    vector<int> repeated(26, 0);  // To track occurrences of each character
    queue<char> q;  // To track the first non-repeating characters

    for (int i = 0; i < A.size(); i++) {
        
        // If character is repeated, increment its count
        if (repeated[A[i] - 'a'] >= 1) {
            repeated[A[i] - 'a']++;
            
            // Remove characters from queue if they are repeated
            while (!q.empty() && repeated[q.front() - 'a'] > 1) {
                q.pop();
            }

            // If queue is empty, append '#', otherwise append the front of the queue
            if (q.empty()) {
                B += "#";
            } else {
                B += q.front();
            }
        } 
        // If character is non-repeated, process it
        else {
            repeated[A[i] - 'a']++;
            q.push(A[i]);  // Add it to the queue
            
            // Clean up the front of the queue for repeated characters
            while (!q.empty() && repeated[q.front() - 'a'] > 1) {
                q.pop();
            }

            // Append the first non-repeating character or '#' if queue is empty
            if (q.empty()) {
                B += "#";
            } else {
                B += q.front();
            }
        }
    }

    return B;
}
