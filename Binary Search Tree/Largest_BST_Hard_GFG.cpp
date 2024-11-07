 class Box {     
    public:     
    bool BST;     
    int size;     
    int min, max;               
    
    Box(int data) {         
        BST = true;         
        size = 1;         
        min = data;         
        max = data;              
    }  
};    

Box* find(Node* root, int &Totalsize) {        
    // If root is null, return null to avoid segmentation fault
    if (!root) return nullptr;

    // leaf node       
    if (!root->right && !root->left) {          
        Totalsize = max(Totalsize, 1);         
        return new Box(root->data);      
    }                  
    
    // only right side exists
    else if (!root->left && root->right) {                    
        Box* head = find(root->right, Totalsize);                    
        
        // Check if right subtree is BST and min of right subtree is greater than root->data
        if (head && head->BST && head->min > root->data) {              
            head->size++;              
            head->min = root->data;              
            Totalsize = max(Totalsize, head->size);              
            return head;          
        }                              
        // If not BST          
        else {              
            if (head) head->BST = false;              
            return head;          
        }                
    }            
    
    // only left side exists       
    else if (root->left && !root->right) {                      
        Box* head = find(root->left, Totalsize);           
        
        // Check if left subtree is BST and max of left subtree is less than root->data
        if (head && head->BST && head->max < root->data) {                              
            head->size++;               
            head->max = root->data;               
            Totalsize = max(Totalsize, head->size);               
            return head;           
        }           
        else {               
            if (head) head->BST = false;               
            return head;                          
        }       
    }                  
    
    // both sides exist      
    else {         
        Box* Lefthead = find(root->left, Totalsize);        
        Box* Righthead = find(root->right, Totalsize);         
        
        // Check if both left and right subtrees are BSTs and satisfy BST property with root
        if (Lefthead && Righthead && Lefthead->BST && Righthead->BST && Lefthead->max < root->data && Righthead->min > root->data) {            
            Box* head = new Box(root->data);            
            head->size = Lefthead->size + Righthead->size + 1;            
            head->min = Lefthead->min;            
            head->max = Righthead->max;            
            Totalsize = max(Totalsize, head->size);            
            return head;        
        }     
        else {                  
            Box* head = new Box(root->data);
            head->BST = false;
            return head;     
        }                                    
    }              
}         

class Solution {     
    public:     
   
    int largestBst(Node* root) {           
        int Totalsize = 0;      
        find(root, Totalsize);      
        return Totalsize;                                 
    } 
};
